/*
  Free Download Manager Copyright (c) 2003-2011 FreeDownloadManager.ORG
*/

#include "stdafx.h"
#include "vmsOverlappedWinsockCalls.h"

vmsOverlappedWinsockCalls::vmsOverlappedWinsockCalls(void)
{
}

vmsOverlappedWinsockCalls::~vmsOverlappedWinsockCalls(void)
{
}

void vmsOverlappedWinsockCalls::AddCall(SOCKET s, LPWSABUF lpBuffers, DWORD dwBufferCount, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine, bool bSend)
{
	Call c;
	c.s = s;
	c.lpBuffers = lpBuffers;
	c.dwBufferCount = dwBufferCount;
	c.lpOverlapped = lpOverlapped;
	c.lpCompletionRoutine = lpCompletionRoutine;
	c.bSend = bSend;
	vmsAUTOLOCKSECTION (m_csCalls);
	m_vCalls.push_back (c);
}

int vmsOverlappedWinsockCalls::FindCallIndex(LPWSAOVERLAPPED lpOverlapped)
{
	vmsAUTOLOCKSECTION (m_csCalls);
	for (size_t i = 0; i < m_vCalls.size (); i++)
	{
		if (m_vCalls [i].lpOverlapped == lpOverlapped)
			return i;
	}
	return -1;
}

vmsOverlappedWinsockCalls::Call* vmsOverlappedWinsockCalls::getCall(int nIndex)
{
	assert (nIndex >= 0 && nIndex < m_vCalls.size ());
	if (nIndex < 0 || size_t (nIndex) >= m_vCalls.size ())
		return NULL;
	vmsAUTOLOCKSECTION (m_csCalls);
	return &m_vCalls [nIndex];
}

void vmsOverlappedWinsockCalls::LockList(bool bLock)
{
	if (bLock)
		EnterCriticalSection (&m_csCalls);
	else
		LeaveCriticalSection (&m_csCalls);
}

void vmsOverlappedWinsockCalls::RemoveCall(int nIndex)
{
	assert (nIndex >= 0 && nIndex < m_vCalls.size ());
	if (nIndex < 0 || size_t (nIndex) >= m_vCalls.size ())
		return;
	vmsAUTOLOCKSECTION (m_csCalls);
	m_vCalls.erase (m_vCalls.begin () + nIndex);
}
