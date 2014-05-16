/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_CameraManagerBinding_h__
#define mozilla_dom_CameraManagerBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"

class nsDOMCameraManager;

namespace mozilla {

class nsDOMCameraControl;

namespace dom {

struct CameraConfiguration;
struct CameraConfigurationAtoms;
class CameraErrorCallback;
struct CameraSize;
struct CameraSizeAtoms;
class GetCameraCallback;
class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom

} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(CameraMode, uint32_t)
  Picture,
  Video
MOZ_END_ENUM_CLASS(CameraMode)

namespace CameraModeValues {
extern const EnumEntry strings[3];
} // namespace CameraModeValues


struct CameraSize : public DictionaryBase
{
  uint32_t mHeight;
  uint32_t mWidth;

  CameraSize();

  explicit inline CameraSize(const CameraSize& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline CameraSize(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, CameraSizeAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const CameraSize& aOther);
};

namespace binding_detail {
struct FastCameraSize : public CameraSize
{
  inline FastCameraSize()
    : CameraSize(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct CameraConfiguration : public DictionaryBase
{
  CameraMode mMode;
  CameraSize mPreviewSize;
  nsString mRecorderProfile;

  CameraConfiguration();

  explicit inline CameraConfiguration(const CameraConfiguration& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline CameraConfiguration(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, CameraConfigurationAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const CameraConfiguration& aOther);
};

namespace binding_detail {
struct FastCameraConfiguration : public CameraConfiguration
{
  inline FastCameraConfiguration()
    : CameraConfiguration(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class CameraErrorCallback : public CallbackFunction
{
public:
  explicit inline CameraErrorCallback(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS_ObjectIsCallable(nullptr, mCallback));
  }

  explicit inline CameraErrorCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObjPtr, const nsAString& error, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObjPtr));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext(),
                                    JS::ObjectValue(*thisObjJS));
    return Call(s.GetContext(), thisValJS, error, aRv);
  }

  inline void
  Call(const nsAString& error, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, error, aRv);
  }

  inline bool
  operator==(const CameraErrorCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, const nsAString& error, ErrorResult& aRv);
};


class GetCameraCallback : public CallbackFunction
{
public:
  explicit inline GetCameraCallback(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS_ObjectIsCallable(nullptr, mCallback));
  }

  explicit inline GetCameraCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObjPtr, mozilla::nsDOMCameraControl& camera, const CameraConfiguration& configuration, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObjPtr));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext(),
                                    JS::ObjectValue(*thisObjJS));
    return Call(s.GetContext(), thisValJS, camera, configuration, aRv);
  }

  inline void
  Call(mozilla::nsDOMCameraControl& camera, const CameraConfiguration& configuration, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, camera, configuration, aRv);
  }

  inline bool
  operator==(const GetCameraCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, mozilla::nsDOMCameraControl& camera, const CameraConfiguration& configuration, ErrorResult& aRv);
};


namespace CameraManagerBinding {

  typedef nsDOMCameraManager NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, nsDOMCameraManager* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace CameraManagerBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_CameraManagerBinding_h__
