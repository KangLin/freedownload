/*
  Free Download Manager Copyright (c) 2003-2016 FreeDownloadManager.ORG
*/

#if !defined(AFX_FSAPPSETTINGS_H__33EC2FD8_44AF_484F_AC12_A498B479BD50__INCLUDED_)
#define AFX_FSAPPSETTINGS_H__33EC2FD8_44AF_484F_AC12_A498B479BD50__INCLUDED_

#include "vmsAppSettingsStore.h"	
#include "DownloadProperties.h"	
#include "fsDownloadsMgr.h"
#include "fsWebPageDownloader.h"	
#include "DownloadsWnd.h"	
#if _MSC_VER > 1000
#pragma once
#endif 

enum vmsSpreadHelpRemind
{
	SHR_NEXTSTART,
	SHR_IN3DAYS,
	SHR_NEVER,
	SHR_WAIT1STTIME,
};

enum vmsAutoUpdateType
{
	AUT_DLANDINST,
	AUT_NOTIFYONLY,
	AUT_TURNOFF,
};

#define MONITOR_USERSWITCHEDON_IE			(1)
#define MONITOR_USERSWITCHEDON_FIREFOX		(1 << 1)
#define MONITOR_USERSWITCHEDON_OPERA		(1 << 2)
#define MONITOR_USERSWITCHEDON_NETSCAPE		(1 << 3)
#define MONITOR_USERSWITCHEDON_SEAMONKEY	(1 << 4)
#define MONITOR_USERSWITCHEDON_SAFARI		(1 << 5)
#define MONITOR_USERSWITCHEDON_CHROME		(1 << 6)

enum vmsNewGroupSelectWay
{
	NGSW_CHOOSE_BY_EXT,
	NGSW_USE_ALWAYS_SAME_GROUP,
	NGSW_USE_ALWAYS_SAME_GROUP_WITH_OUTFOLDER_AUTO_UPDATE,
};

class fsAppSettings  
{
protected:
	
	
	enum fsConnectionType
	{
		CT_MODEM_14_4,		
		CT_MODEM_28_8,		
		CT_MODEM_33_6,		
		CT_MODEM_56_ISDN,	
		CT_DUAL_ISDN,		
		CT_CABLE_DSL_256,
		CT_CABLE_DSL_512,
		CT_CABLE_DSL_768,
		CT_CABLE_DSL_1M,
		CT_CABLE_DSL_1_5M,
		CT_CABLE_DSL_2M,
		CT_LAN_10,
		CT_UNKNOWN,			
	};
	struct fsTrafficUsageModeSettings
	{
		UINT uMaxConns;		
		UINT uMaxConnsPS;	
		UINT uMaxTasks;		
		UINT uTrafficLimit;	
		fsTrafficUsageModeSettings () {uMaxTasks = 3; uMaxConns = 3; uMaxConnsPS = 3; uTrafficLimit = UINT_MAX;}
	};
public:
	void RecentVersionRun (const tstring&);
	tstring RecentVersionRun ();
	void SmallTips_CurrentTip (int n);
	int SmallTips_CurrentTip();
	void SmallTips_LastTime (FILETIME ft);
	FILETIME SmallTips_LastTime();
	void SmallTips_ForceShow (LPCTSTR ptsz);
	CString SmallTips_ForceShow ();
	void SmallTips_Show (BOOL b);
	BOOL SmallTips_Show();
	void Bittorrent_MaxConnections(int mode, int max);
	int Bittorrent_MaxConnections(int mode);
	void FlvMonitoring_ShowDownloadItButton (BOOL b);
	BOOL FlvMonitoring_ShowDownloadItButton();
	void FlvMonitoring_ProcessList (DWORD dw);
	DWORD FlvMonitoring_ProcessList();
	void FlvMonitoring_Enable (BOOL b);
	BOOL FlvMonitoring_Enable();
	void View_AvpWarnWasShown (BOOL b);
	BOOL View_AvpWarnWasShown();
	void LastTimePiWindowWasShown (FILETIME *pft);
	FILETIME LastTimePiWindowWasShown();
	void DontShowPiWindow (BOOL b);
	BOOL DontShowPiWindow();
	void StartCount (int i);
	int StartCount();
	void Notif_OnDoneWnds_Timeout (int i);
	int Notif_OnDoneWnds_Timeout();
	void Notif_UseOnDoneWnds (BOOL b);
	BOOL Notif_UseOnDoneWnds();
	void CheckIfDownloadIsMirror (BOOL b);
	BOOL CheckIfDownloadIsMirror();
	void ApplySettingsToMutexes();
	void DldsMgrPDTimeLimit (DWORD dw);
	DWORD DldsMgrPDTimeLimit();
	void Monitor_ChromePDInstalledTo (LPCTSTR psz);
	CString Monitor_ChromePDInstalledTo();
	void Monitor_SafariPDInstalledTo (LPCTSTR psz);
	CString Monitor_SafariPDInstalledTo();
	BOOL Monitor_ForceEnableChromeOnce ();
	void Monitor_ForceEnableChromeOnce (BOOL);
	void Firefox_PortableVersionPath (LPCTSTR psz);
	CString Firefox_PortableVersionPath();
	void Bittorrent_RequiredRatio (float f);
	float Bittorrent_RequiredRatio();
	void RecentDownloadsHistorySize (int i);
	int RecentDownloadsHistorySize();
	void CheckIfDownloadWithSameUrlExists (BOOL b);
	BOOL CheckIfDownloadWithSameUrlExists();
	BOOL View_DontShowPauseAlldldsEnabled();
	void View_DontShowPauseAlldldsEnabled (BOOL b);
	void Bittorrent_MaxHalfConnections (int mode, int max);
	int Bittorrent_MaxHalfConnections (int nMode);
	void PreventStandbyWhileDownloading (BOOL b);
	BOOL PreventStandbyWhileDownloading();
	void Community_MalReportsMinPerc (int);
	int Community_MalReportsMinPerc();
	void View_MoreTabs (BOOL b);
	BOOL View_MoreTabs();
	void Bittorrent_DisableSeedingByDef (BOOL b);
	BOOL Bittorrent_DisableSeedingByDef();
	void View_NOMShown (BOOL b);
	BOOL View_NOMShown();
	void TotalUpldTraffic_PrevMonth (UINT64 u);
	UINT64 TotalUpldTraffic_PrevMonth();
	void TotalUpldTraffic (UINT64 u);
	UINT64 TotalUpldTraffic();
	void View_AutoSwitchToMediaPreview (BOOL b);
	BOOL View_AutoSwitchToMediaPreview();
	void FVDownloads_AutoConvertVideo (BOOL b);
	BOOL FVDownloads_AutoConvertVideo();
	void Convert_Extension (LPCTSTR psz);
	CString Convert_Extension();
	void Convert_VideoCodec (LPCTSTR psz);
	CString Convert_VideoCodec();
	void Convert_AudioCodec (LPCTSTR psz);
	CString Convert_AudioCodec();
	void Convert_VideoBitrate (int n);
	int Convert_VideoBitrate();
	void Convert_AudioBitrate (int n);
	int Convert_AudioBitrate();
	void Convert_VideoSize (CSize sz);
	CSize Convert_VideoSize();
	void Convert_Format (LPCTSTR psz);
	CString Convert_Format();
	void View_CreateFVDownload_SetupAdvStgs (BOOL b);
	BOOL View_CreateFVDownload_SetupAdvStgs();
	void WriteTranslatedStringToRegistry (LPCTSTR pszStringId, LPCTSTR pszString);
	void Monitor_IEMenu_DLFlashVideo (BOOL b);
	BOOL Monitor_IEMenu_DLFlashVideo();
	void NewGrp_SelectWay (vmsNewGroupSelectWay en);
	vmsNewGroupSelectWay NewGrp_SelectWay();
	void View_DontAskEnableBittorrent (BOOL b);
	BOOL View_DontAskEnableBittorrent();
	void DataFolder (LPCTSTR psz);
	CString DataFolder();
	void View_AskRemoveFromAutostartAtAppExit (BOOL b);
	BOOL View_AskRemoveFromAutostartAtAppExit();
	void Bittorrent_OldTorrentAssociation (LPCTSTR psz);
	CString Bittorrent_OldTorrentAssociation();
	void Bittorrent_OldMagnetAssociation(LPCTSTR psz);
	CString Bittorrent_OldMagnetAssociation();
	void Bittorrent_OldMagnetUrlProtocol(LPCTSTR psz);
	CString Bittorrent_OldMagnetUrlProtocol();
	void Bittorrent_EnableDHT (BOOL b);
	BOOL Bittorrent_EnableDHT();
	void Bittorrent_EnableLocalPeerDiscovery (BOOL b);
	void Bittorrent_EnableUPnP (BOOL b);
	void Bittorrent_EnableNATPMP (BOOL b);
	BOOL Bittorrent_EnableLocalPeerDiscovery ();
	BOOL Bittorrent_EnableUPnP ();
	BOOL Bittorrent_EnableNATPMP ();
	BOOL Bittorrent_EnableUTPEX();
	void Bittorrent_EnableUTPEX( BOOL b );
	void Bittorrent_EnableSequentialDownloading(BOOL b);
	BOOL Bittorrent_EnableSequentialDownloading();
	void Bittorrent_ListenPort_To (int);
	int Bittorrent_ListenPort_To();
	void Bittorrent_ListenPort_From (int);
	int Bittorrent_ListenPort_From();
	void Bittorrent_UploadConnectionLimit (int mode, int limit);
	int Bittorrent_UploadConnectionLimit(int mode);
	void Bittorrent_UploadTrafficLimit (int mode, int limit);
	int Bittorrent_UploadTrafficLimit(int mode);
	void Bittorrent_Enable (BOOL b);
	BOOL Bittorrent_Enable();
	void View_UploadsLog (BOOL b);
	BOOL View_UploadsLog();
	
	
	
	void View_DownloadsGroups_SelectedFilterId (int i);
	int View_DownloadsGroups_SelectedFilterId();
	void View_SetOutputFolderAsDefForAllGrpsChecked (BOOL b);
	BOOL View_SetOutputFolderAsDefForAllGrpsChecked();
	int FirefoxSettings_Proxy_Port (LPCTSTR pszProtocol);
	CString FirefoxSettings_Proxy_Addr (LPCTSTR pszProtocol);
	int FirefoxSettings_Proxy_Type();
	void Download_IntegrityCheckFailedReaction (int i);
	int Download_IntegrityCheckFailedReaction();
	void Download_CheckIntegrityWhenDone (BOOL b);
	BOOL Download_CheckIntegrityWhenDone();
	void Monitor_SkipServers (LPCTSTR psz);
	CString Monitor_SkipServers();
	void Notif_DisableForBatchDownloads (BOOL b);
	BOOL Notif_DisableForBatchDownloads();
	void View_DropBoxIntro (BOOL b);
	BOOL View_DropBoxIntro();
	void View_ImportMtorrentInfo (BOOL b);
	BOOL View_ImportMtorrentInfo();
	vmsAppSettingsStore* get_SettingsStore();
	void Update_AutoUpdateType (vmsAutoUpdateType  en);
	vmsAutoUpdateType Update_AutoUpdateType();
	void Scheduler_LastTask_ProgArgs (LPCTSTR psz);
	CString Scheduler_LastTask_ProgArgs();
	void Scheduler_LastTask_ProgName (LPCTSTR psz);
	CString Scheduler_LastTask_ProgName();
	void Scheduler_LastTask_read (fsSchedule* task);
	void Scheduler_LastTask_save (fsSchedule* task);
	void Monitor_UserSwitchedOn (DWORD dw);
	DWORD Monitor_UserSwitchedOn();
	void LowSpeed_Factor (WORD w);
	WORD LowSpeed_Factor();
	void LowSpeed_Duration (WORD w);
	WORD LowSpeed_Duration();
	void DNPFlags (DWORD dw);
	DWORD DNPFlags();
	void Monitor_IEMenu_Enable (BOOL b);
	BOOL Monitor_IEMenu_Enable();
	void View_LastDldMoveToFolder (LPCTSTR psz);
	CString View_LastDldMoveToFolder();
	void Monitor_Firefox (BOOL b);
	BOOL Monitor_Firefox();
	void Monitor_Chrome (BOOL b);
	BOOL Monitor_Chrome();
	void Monitor_Chrome_Cancel(BOOL b);
	BOOL Monitor_Chrome_Cancel();
	
	void MonitorChrome_Cancel_HKLM(BOOL b);
	BOOL MonitorChrome_Cancel_HKLM();
	
	void FileWriteCacheSize (DWORD dw);
	DWORD FileWriteCacheSize();
	void Community_DisplayOpinionsAtDlding (BOOL b);
	BOOL Community_DisplayOpinionsAtDlding();
	void Community_CheckIfMalBeforeDlding (BOOL b);
	BOOL Community_CheckIfMalBeforeDlding();
	void View_DontShowMalOpinionOKReport (BOOL b);
	BOOL View_DontShowMalOpinionOKReport();
	void ModifyIEUserAgent (BOOL b);
	BOOL ModifyIEUserAgent();
	void Community_SwitchToOpinions (BOOL b);
	BOOL Community_SwitchToOpinions();
	void View_SpreadHelpDialog_RadioButton2Text (LPCTSTR psz);
	CString View_SpreadHelpDialog_RadioButton2Text();
	void View_SpreadHelpDialog_RadioButton1Text (LPCTSTR psz);
	CString View_SpreadHelpDialog_RadioButton1Text();
	void View_SpreadHelpDialog_LinkToUsText (LPCTSTR psz);
	CString View_SpreadHelpDialog_LinkToUsText();
	void Monitor_MozillaSuitePDInstalledTo (LPCTSTR psz);
	CString Monitor_MozillaSuitePDInstalledTo();
	void App_2_0_SchedulerFixPerformed (BOOL b);
	BOOL App_2_0_SchedulerFixPerformed();
	void CreateBD_SaveAs_Template (LPCTSTR psz);
	CString CreateBD_SaveAs_Template();
	void View_DontShowHashCheckResultIfOK (BOOL b);
	BOOL View_DontShowHashCheckResultIfOK();
	void Hash_LastAlgorithm (LPCTSTR psz);
	CString Hash_LastAlgorithm();
	void DontShowInstallAP (BOOL b);
	BOOL DontShowInstallAP();
	BOOL IsArchivePackInstalled();
	void WD_DisableAfterExec (BOOL b);
	BOOL WD_DisableAfterExec();
	void TotalTraffic_CurrMonth (int i);
	int TotalTraffic_CurrMonth();
	void TotalTraffic_PrevMonth (UINT64 u);
	UINT64 TotalTraffic_PrevMonth();
	void TotalTraffic (UINT64 u);
	UINT64 TotalTraffic();
	void CreateBD_LastNumbers (LPCTSTR psz);
	CString CreateBD_LastNumbers();
	void ConfTimeout_Exit (UINT u);
	UINT ConfTimeout_Exit();
	void ConfTimeout_Shutdown (UINT u);
	UINT ConfTimeout_Shutdown();
	void ConfTimeout_LaunchDld (UINT u);
	UINT ConfTimeout_LaunchDld();
	void ConfTimeout_Hangup (UINT u);
	UINT ConfTimeout_Hangup();
	void OnDlHasBeenCreatedByUser();
	void NumberOfDlCreatesByUser (int i);
	int NumberOfDlCreatesByUser();
	void DownloadDialog_DontAskOnHide (BOOL b);
	BOOL DownloadDialog_DontAskOnHide();
	void DownloadDialog_Use (BOOL b);
	BOOL DownloadDialog_Use();
	void DownloadDialog_AutoClose (BOOL b);
	BOOL DownloadDialog_AutoClose();
	void Export_Hist_Append (BOOL b);
	BOOL Export_Hist_Append();
	void Export_Hist_CompletedOnly (BOOL b);
	BOOL Export_Hist_CompletedOnly();
	void Export_WhichHist (int i);
	int Export_WhichHist();
	void DontSaveLogs (BOOL b);
	BOOL DontSaveLogs();
	void WD_LastShutdownType_DontAsk (BOOL b);
	BOOL WD_LastShutdownType_DontAsk();
	void WD_LastShutdownType (int enType);
	int WD_LastShutdownType ();
	void CreateBD_LastAtoZ (DWORD dw);
	DWORD CreateBD_LastAtoZ ();
	void DldListDlg_Filter_LastExtsRemove (BOOL b);
	BOOL DldListDlg_Filter_LastExtsRemove();
	void DldListDlg_Filter_LastExts (LPCTSTR psz);
	CString DldListDlg_Filter_LastExts();
	void View_TUMChanged (BOOL b);
	BOOL View_TUMChanged();
	void View_GCVButton (BOOL b);
	BOOL View_GCVButton();
	void View_SpreadHelpDialog_LastTimeShown_save (FILETIME& time);
	BOOL View_SpreadHelpDialog_LastTimeShown (FILETIME& time);
	void View_SpreadHelpDialog (vmsSpreadHelpRemind en);
	vmsSpreadHelpRemind View_SpreadHelpDialog();
	void FilesToDelete_save (CStringList& v);
	BOOL FilesToDelete (CStringList& v);
	void NewDL_GenerateNameAutomatically (BOOL b);
	BOOL NewDL_GenerateNameAutomatically();
	void Mirr_Server (int i);
	int Mirr_Server ();
	void FloatingWndsHideInFSMode (BOOL b);
	BOOL FloatingWndsHideInFSMode();
	void SM_DontSavePwdsToDisk (BOOL b);
	BOOL SM_DontSavePwdsToDisk();
	void SM_PwdsManualAddition (BOOL b);
	BOOL SM_PwdsManualAddition();
	void SM_KeepPasswords (BOOL b);
	BOOL SM_KeepPasswords();
	void Skin_Flags (DWORD dw);
	DWORD Skin_Flags();
	void Skin_Current (CString str);
	CString Skin_Current();
	void CheckHistorySize (BOOL b);
	BOOL CheckHistorySize();
	void CheckRecycleBinSize (BOOL b);
	BOOL CheckRecycleBinSize();
	void Monitor_SkipSmaller (int iSize);
	int Monitor_SkipSmaller ();
	void RollBackSize (WORD w);
	WORD RollBackSize();
	void NewDL_UseZIPPreview (BOOL b);
	BOOL NewDL_UseZIPPreview();
	void NewDL_AutoStart (BOOL b);
	BOOL NewDL_AutoStart();
	DWORD Spider_Flags();
	void Spider_Flags (DWORD dw);
	void DownloadFlags (DWORD dw);
	DWORD DownloadFlags();
	void MP_Volume (int i);
	int MP_Volume();
	void MP_Mute (BOOL b);
	BOOL MP_Mute();
	void UseZipPreview (BOOL b);
	BOOL UseZipPreview();
	UINT64 Find_FileSizeTo();
	void Find_FileSizeTo (UINT64 u);
	void Find_FileSizeFrom (UINT64 u);
	UINT64 Find_FileSizeFrom();
	FILETIME Find_TimeTo();
	void Find_TimeTo (FILETIME &t);
	FILETIME Find_TimeFrom();
	void Find_TimeFrom (FILETIME &t);
	void Find_GroupId (UINT n);
	UINT Find_GroupId();
	void Find_Flags (DWORD dw);
	DWORD Find_Flags();
	CString Find_What();
	void Find_What (LPCTSTR psz);
	void History_Downloads_CompletedOnly (BOOL b);
	BOOL History_Downloads_CompletedOnly ();
	void History_Downloads_KeepDays (UINT u);
	UINT History_Downloads_KeepDays();
	void History_Downloads_Use (BOOL b);
	BOOL History_Downloads_Use();
	void Deleted_BypassCompleted (BOOL b);
	BOOL Deleted_BypassCompleted();
	void Deleted_ConfirmDeletion (BOOL b);
	BOOL Deleted_ConfirmDeletion();
	void Deleted_MaxCount (UINT u);
	UINT Deleted_MaxCount();
	void Deleted_Bypass (BOOL b);
	BOOL Deleted_Bypass ();
	void View_DWWN (fsDLsWndWhatIsNow en);
	fsDLsWndWhatIsNow View_DWWN();
	void Export_Append (BOOL b);
	BOOL Export_Append();
	void Export_DontExpCompleted (BOOL b);
	BOOL Export_DontExpCompleted();
	void Export_WhichDlds (int i);
	int Export_WhichDlds();
	void History_FoldersOnly (BOOL b);
	BOOL History_FoldersOnly();
	int History_MaxRecords();
	void History_MaxRecords (int i);
	
	void History_KeepDays (int i);
	int History_KeepDays();
	BOOL History_Use();
	void History_Use (BOOL b);
	void Snd_Use (BOOL b);
	BOOL Snd_Use();
	void Snd_DownloadFailed (LPCTSTR psz);
	CString Snd_DownloadFailed();
	void Snd_DialingFailed (LPCTSTR psz);
	CString Snd_DialingFailed();
	void Snd_DialingOK (LPCTSTR psz);
	CString Snd_DialingOK();
	void Snd_NoActiveDownloads (LPCTSTR psz);
	CString Snd_NoActiveDownloads();
	void Snd_DownloadAdded (LPCTSTR psz);
	CString Snd_DownloadAdded();
	void Snd_DownloadComplete (LPCTSTR psz);
	CString Snd_DownloadComplete();
	BOOL Monitor_IEMenu_DLSelected();
	void Monitor_IEMenu_DLSelected (BOOL b);
	BOOL Monitor_IEMenu_DLAll();
	void Monitor_IEMenu_DLAll (BOOL b);
	BOOL Monitor_IEMenu_DLPage();
	void Monitor_IEMenu_DLPage (BOOL b);
	void Monitor_IEMenu_DLThis (BOOL b);
	BOOL Monitor_IEMenu_DLThis();
	void Monitor_Silent (BOOL b);
	BOOL Monitor_Silent();
	UINT NewDL_GroupId ();
	void NewDL_GroupId (UINT n);
	CString NewDL_Group_old ();
	void NewDL_Group_old (LPCTSTR psz);
	void View_FloatingInfoWindow (BOOL b);
	BOOL View_FloatingInfoWindow();
	void Mirr_DontSearchIfSizeUnk (BOOL b);
	BOOL Mirr_DontSearchIfSizeUnk();
	void Mirr_FileMinSize (UINT u);
	UINT Mirr_FileMinSize();
	void Mirr_RecalcSpeedTime (UINT u);
	UINT Mirr_RecalcSpeedTime();
	void Mirr_CalcSpeed (BOOL b);
	BOOL Mirr_CalcSpeed();
	void Mirr_MaxCount (UINT u);
	UINT Mirr_MaxCount();
	void Mirr_AutoSearch (BOOL b);
	BOOL Mirr_AutoSearch();
	void Notif_BalloonTimeout (DWORD dw);
	DWORD Notif_BalloonTimeout();
	void Notif_UseBalloon (BOOL b);
	BOOL Notif_UseBalloon();
	void Network_Br_SettingsSaved (BOOL b);
	BOOL Network_Br_SettingsSaved();
	void NewVerExists (BOOL b);
	BOOL NewVerExists();
	void Spider_SavePagesUnderHTM (BOOL b);
	BOOL Spider_SavePagesUnderHTM();
	void Avir_Exts (LPCTSTR psz);
	CString Avir_Exts();
	void Avir_Args (LPCTSTR psz);
	CString Avir_Args();
	void Avir_Name (LPCTSTR psz);
	CString Avir_Name();
	void Avir_Perform (BOOL b);
	BOOL Avir_Perform();
	void View_SizesInBytes (BOOL b);
	BOOL View_SizesInBytes ();
	void Download_CreateExt (LPCTSTR psz);
	CString Download_CreateExt();
	void Monitor_AllowDownload (BOOL b);
	BOOL Monitor_AllowDownload ();
	void Monitor_FirefoxPDInstalledTo (LPCTSTR psz);
	CString Monitor_FirefoxPDInstalledTo();
	void Monitor_NetscapePDInstalledTo (LPCTSTR psz);
	CString Monitor_NetscapePDInstalledTo();
	void Monitor_OperaPDInstalledTo (LPCTSTR psz);
	CString Monitor_OperaPDInstalledTo();
	void DetLog (BOOL b);
	BOOL DetLog();
	void View_FloatingWindow(BOOL b);
	BOOL View_FloatingWindow();
	void DropBoxWndBlend (BYTE b);
	BYTE DropBoxWndBlend ();
	void DownloadsInfoWndBlend (BYTE b);
	BYTE DownloadsInfoWndBlend ();
	void TUMManage (fsTUMManage en);
	fsTUMManage TUMManage();
	void View_DldInfoCurTab (int i);
	int View_DldInfoCurTab ();
	void Last_Autostart (int i);
	int Last_Autostart();
	void Spider_ImgExtsType (fsWPDExtsType en);
	fsWPDExtsType Spider_ImgExtsType();
	void Spider_ImgExts (LPCTSTR psz);
	CString Spider_ImgExts();
	void Spider_DownloadStyles (BOOL b);
	BOOL Spider_DownloadStyles();
	void Spider_ExtsType (fsWPDExtsType en);
	fsWPDExtsType Spider_ExtsType();
	void Spider_Exts (LPCTSTR psz);
	CString Spider_Exts();
	void Spider_Depth (int i);
	int Spider_Depth();
	void Spider_DownloadImages (BOOL b);
	BOOL Spider_DownloadImages();
	void Spider_DownloadFiles (BOOL b);
	BOOL Spider_DownloadFiles();
	void Spider_NotAllImages (BOOL b);
	BOOL Spider_NotAllImages();
	void Spider_NotAllFiles (BOOL b);
	BOOL Spider_NotAllFiles();
	void Spider_NotAllPages (BOOL b);
	BOOL Spider_NotAllPages();
	void Spider_HTMLExts (LPCTSTR psz);
	CString Spider_HTMLExts();
	void View_SpiderTree (BOOL b);
	BOOL View_SpiderTree();
	void Dial_Auto (BOOL b);
	BOOL Dial_Auto();
	void Dial_LastEntry (LPCTSTR);
	CString Dial_LastEntry();
	CString View_Language();
	void View_Language (LPCTSTR pszLang);
	void View_SplitterRatio (LPCTSTR pszName, float fRatio);
	float View_SplitterRatio (LPCTSTR pszName);
	enum ReadWndPlacementAdjustment
	{
		RWPA_NONE,
		RWPA_FORCE_SWHIDE,
		RWPA_FORCE_SWHIDE_AND_KEEP_MINIMIZED_MAXIMIZED_STATE,
	};
	void View_ReadWndPlacement (CWnd* pWnd, LPCTSTR pszName, ReadWndPlacementAdjustment enRWPA = RWPA_NONE);
	void View_SaveWndPlacement (CWnd* pWnd, LPCTSTR pszName);
	void View_ReadWndSize(CWnd *pWnd, LPCTSTR pszName);
	void View_SaveWndSize (CWnd* pWnd, LPCTSTR pszName);
	void View_Statusbar (BOOL b);
	BOOL View_Statusbar ();
	void View_Toolbar (BOOL b);
	BOOL View_Toolbar();
	void View_HFELog (BOOL b);
	BOOL View_HFELog();
	void View_SchedulerLog (BOOL b);
	BOOL View_SchedulerLog ();
	void View_DLInfo (BOOL b);
	BOOL View_DLInfo();
	void View_AllGroups (BOOL b);
	BOOL View_AllGroups();
	void View_SWBar (BOOL b);
	BOOL View_SWBar();
	void Update_LastCheck (SYSTEMTIME time);
	BOOL Update_LastCheck (SYSTEMTIME* time);
	BOOL Update_CheckedOnce ();
	void Update_CheckedOnce (BOOL value);
	void Update_LastCheck2 (SYSTEMTIME time);
	BOOL Update_LastCheck2 (SYSTEMTIME* time);
	void Update_URL (LPCTSTR psz);
	CString Update_URL();
	void Prg_MinToTray (BOOL b);
	BOOL Prg_MinToTray();
	void Prg_CloseAsMinimize (BOOL b);
	BOOL Prg_CloseAsMinimize();
	void Prg_StartMinimized (BOOL b);
	BOOL Prg_StartMinimized();
	void Monitor_ALTShouldPressed (BOOL b);
	BOOL Monitor_ALTShouldPressed();
	void Monitor_Clipboard (BOOL b);
	BOOL Monitor_Clipboard();
	void Monitor_IE2 (BOOL b);
	BOOL Monitor_IE2();
	void Monitor_IE1 (BOOL b);
	BOOL Monitor_IE1();
	void Monitor_SkipExts (LPCTSTR psz);
	CString Monitor_SkipExts();
	void HFE_FtpPassiveMode (BOOL b);
	BOOL HFE_FtpPassiveMode();
	void RetreiveInfoWhileGettingList (BOOL b);
	BOOL RetreiveInfoWhileGettingList();
	void CreateDld_IdOfLastGrpSelected (UINT n);
	UINT CreateDld_IdOfLastGrpSelected();
	void ActivePlugin (int i);
	int ActivePlugin();
	void NOW (int i);
	int NOW();
	void AutosaveInterval (UINT nVal);
	UINT AutosaveInterval ();
	BOOL AutoDelCompleted();
	void AutoDelCompleted (BOOL b);
	fsDeleteDownloadReaction DDR();
	void DDR (fsDeleteDownloadReaction en);
	void CurrentTUM (fsTUM i);
	fsTUM CurrentTUM();
	BOOL Get_TUM(vmsTrafficUsageModeRawSettings aTUM[3]);
	void Set_TUM (vmsTrafficUsageModeRawSettings aTUM [3]);
	void AdditionalExtension (LPCTSTR pszExt);
	CString AdditionalExtension();
	void SizeChangeReaction (fsSizeChangeReaction val);
	fsSizeChangeReaction SizeChangeReaction();
	void AlreadyExistReaction (fsAlreadyExistReaction val);
	fsAlreadyExistReaction AlreadyExistReaction();
	void AccDeniedReaction (fsDownloadFileErrorProcessing val);
	fsDownloadFileErrorProcessing AccDeniedReaction();
	void NotFoundReaction (fsDownloadFileErrorProcessing val);
	fsDownloadFileErrorProcessing NotFoundReaction();
	void UseSocksProxy (BOOL bUse);
	BOOL UseSocksProxy();
	void ASCIIExts (LPCTSTR psz);
	CString ASCIIExts ();
	void UseCookie(BOOL b);
	BOOL UseCookie();
	void SocksProxy_Password (LPCTSTR psz);
	CString SocksProxy_Password ();
	void SocksProxy_UserName (LPCTSTR psz);
	CString SocksProxy_UserName ();
	void SocksProxy_Name (LPCTSTR psz);
	CString SocksProxy_Name ();
	void FtpProxy_Password (LPCTSTR psz);
	CString FtpProxy_Password ();
	void FtpProxy_UserName (LPCTSTR psz);
	CString FtpProxy_UserName ();
	void FtpProxy_Name (LPCTSTR psz);
	CString FtpProxy_Name ();
	void HttpsProxy_Password (LPCTSTR psz);
	CString HttpsProxy_Password ();
	void HttpsProxy_UserName (LPCTSTR psz);
	CString HttpsProxy_UserName ();
	void HttpsProxy_Name (LPCTSTR psz);
	CString HttpsProxy_Name ();
	void HttpProxy_Password (LPCTSTR psz);
	CString HttpProxy_Password ();
	void HttpProxy_UserName (LPCTSTR psz);
	CString HttpProxy_UserName ();
	void HttpProxy_Name (LPCTSTR psz);
	CString HttpProxy_Name ();
	void Timeout (UINT u);
	UINT Timeout();
	void ReserveDiskSpace (BOOL b);
	BOOL ReserveDiskSpace();
	void Agent (LPCTSTR psz);
	CString Agent();
	void RestartSpeedLow (BOOL b);
	BOOL RestartSpeedLow();
	void IgnoreRestrictions (BOOL b);
	BOOL IgnoreRestrictions();
	void MaxAttempts (UINT u);
	UINT MaxAttempts ();
	void TrafficRestriction (UINT u);
	UINT TrafficRestriction();
	void MaxSections (UINT u);
	UINT MaxSections();
	void SectionMinSize (UINT u);
	UINT SectionMinSize();
	void RetriesTime (UINT u);
	UINT RetriesTime();
	void FtpTransferType (fsFtpTransferType enType);
	fsFtpTransferType FtpTransferType();
	void FtpFlags (DWORD dw);
	DWORD FtpFlags ();
	void UseHttp11 (BOOL b);
	BOOL UseHttp11();
	void Referer (LPCTSTR pszStr);
	CString Referer ();
	void UserPassword (LPCTSTR pszStr);
	CString UserPassword ();
	void UserName (LPCTSTR pszStr);
	CString UserName();
	void NonUtf8NameFixed(DWORD dw);
	DWORD NonUtf8NameFixed();
	void InternetAccessType (fsInternetAccessTypeEx enType);
	fsInternetAccessTypeEx InternetAccessType();
	void UserOnly (BOOL b);
	BOOL UserOnly();
	void Monitor_FirefoxInstalled (BOOL b);
	BOOL Monitor_FirefoxInstalled();
	void Monitor_FirefoxExtensionSuggested(BOOL b);
	BOOL Monitor_FirefoxExtensionSuggested();
	void Monitor_ChromeInstalled (BOOL b);
	BOOL Monitor_ChromeInstalled();
	void Monitor_ChromeExtensionSuggested(BOOL b);
	BOOL Monitor_ChromeExtensionSuggested();
	void ShowUserNotification (LPCTSTR notificationId, BOOL show);
	BOOL ShowUserNotification (LPCTSTR notificationId);

	fsAppSettings();
	virtual ~fsAppSettings();

protected:
	vmsAppSettingsStore m_stgs;
	
	
	DWORD m_dwWriteCacheSize;
	DWORD m_dwNonUtf8NameFixed;
	BOOL m_bPreventStandbyWhileDownloading;
	BOOL m_bDontSaveLogs;
	BOOL LoadStringList(LPCTSTR pszSubKey, LPCTSTR pszValue, CStringList *v);
	void SaveStringList(LPCTSTR pszSubKey, LPCTSTR pszValue, CStringList &v);
public:
	UINT64 ConnectionBandwidth(bool bForDownload);
	void ConnectionBandwidth(bool bForDownload, UINT64 uVal);
	void GetConnectionBandwidthValues (bool bForDownload, std::vector <UINT64> &v);
	void SetConnectionBandwidthValues (bool bForDownload, const std::vector <UINT64> &v);
	BOOL SpecifyNetworkSpeedValueInBits(void);
	void SpecifyNetworkSpeedValueInBits(bool b);
};

#endif 
