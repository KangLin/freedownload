/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_SpeechSynthesisEventBinding_h__
#define mozilla_dom_SpeechSynthesisEventBinding_h__

#include "EventBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;
class SpeechSynthesisEvent;
struct SpeechSynthesisEventInitAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct SpeechSynthesisEventInit : public EventInit
{
  uint32_t mCharIndex;
  float mElapsedTime;
  nsString mName;

  SpeechSynthesisEventInit();

  explicit inline SpeechSynthesisEventInit(const SpeechSynthesisEventInit& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline SpeechSynthesisEventInit(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, SpeechSynthesisEventInitAtoms* atomsCache);

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
  operator=(const SpeechSynthesisEventInit& aOther);
};

namespace binding_detail {
struct FastSpeechSynthesisEventInit : public SpeechSynthesisEventInit
{
  inline FastSpeechSynthesisEventInit()
    : SpeechSynthesisEventInit(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace SpeechSynthesisEventBinding {

  typedef mozilla::dom::SpeechSynthesisEvent NativeType;

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

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::SpeechSynthesisEvent* aObject, nsWrapperCache* aCache);

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

} // namespace SpeechSynthesisEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_SpeechSynthesisEventBinding_h__
