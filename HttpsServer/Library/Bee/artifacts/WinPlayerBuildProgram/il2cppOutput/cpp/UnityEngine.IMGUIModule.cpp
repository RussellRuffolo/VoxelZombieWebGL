#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_t31778E37064B20473E234BE4072FB2008963CA04;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t213820D1291B006215466FC472F2AF2A1295581B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct EntryU5BU5D_t78B8E710EE9395C4BF503D2160E92165447499A5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GUIStyle>[]
struct EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t941F1370F7FC19F6A28AF10930F940A742232497;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t4F9AD0F906A21B3318CFA9466B076A467E16305F;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngineInternal.GenericStack
struct GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t537BA5EEEDB652AA60A00E4CEA6B73710FBDD806;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.ScrollViewState
struct ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6;
// UnityEngine.SliderState
struct SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// UnityEngine.TextEditor
struct TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F;
IL2CPP_EXTERN_C String_t* _stringLiteral05CF9CF5853B675491570E9D20951E373F208902;
IL2CPP_EXTERN_C String_t* _stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA;
IL2CPP_EXTERN_C String_t* _stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1;
IL2CPP_EXTERN_C String_t* _stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5BD769C75B1966931F7A0F059B152FE79C2619;
IL2CPP_EXTERN_C String_t* _stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5;
IL2CPP_EXTERN_C String_t* _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149;
IL2CPP_EXTERN_C String_t* _stringLiteral5220DD5A418252356A406067BC43EC0FB773A172;
IL2CPP_EXTERN_C String_t* _stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15;
IL2CPP_EXTERN_C String_t* _stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400;
IL2CPP_EXTERN_C String_t* _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2;
IL2CPP_EXTERN_C String_t* _stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C;
IL2CPP_EXTERN_C String_t* _stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33;
IL2CPP_EXTERN_C String_t* _stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96;
IL2CPP_EXTERN_C String_t* _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957;
IL2CPP_EXTERN_C String_t* _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C;
IL2CPP_EXTERN_C String_t* _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D;
IL2CPP_EXTERN_C String_t* _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F;
IL2CPP_EXTERN_C String_t* _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1;
IL2CPP_EXTERN_C String_t* _stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947;
IL2CPP_EXTERN_C String_t* _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722;
IL2CPP_EXTERN_C String_t* _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE;
IL2CPP_EXTERN_C String_t* _stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F;
IL2CPP_EXTERN_C String_t* _stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIUtility_CheckOnGUI_m96F9DAAD5B8B3000EEA28C4A437B5C292F71D245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB500DDB8D220627F9BFAF448763790F027856F11 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t78B8E710EE9395C4BF503D2160E92165447499A5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t31778E37064B20473E234BE4072FB2008963CA04* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t213820D1291B006215466FC472F2AF2A1295581B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GUILayoutEntryU5BU5D_t941F1370F7FC19F6A28AF10930F940A742232497* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GUILayoutEntryU5BU5D_t941F1370F7FC19F6A28AF10930F940A742232497* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUILayout
struct GUILayout_tB26F0D6938B9B2AD04633B1DF56A1E52F3E6D177  : public RuntimeObject
{
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.GUIUtility
struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A  : public RuntimeObject
{
};

struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields
{
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* ___endContainerGUIFromException_5;
	// System.Action UnityEngine.GUIUtility::guiChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___guiChanged_6;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.ScrollViewState
struct ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6  : public RuntimeObject
{
};

// UnityEngine.SliderState
struct SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8  : public RuntimeObject
{
};

// System.Collections.Stack
struct Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47  : public RuntimeObject
{
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60  : public RuntimeObject
{
	// System.Int32 UnityEngine.GUILayoutUtility/LayoutCache::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___topLevel_1;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___layoutGroups_2;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___windows_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
struct Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
struct Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____currentValue_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t4F9AD0F906A21B3318CFA9466B076A467E16305F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.GUITargetAttribute
struct GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;
};

// UnityEngineInternal.GenericStack
struct GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49  : public Stack_tBD60B0E3125691193FBFC8DA8FFDD6630CB2CB47
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t537BA5EEEDB652AA60A00E4CEA6B73710FBDD806  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.GUILayoutUtility/LayoutCacheState
struct LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 
{
	// System.Int32 UnityEngine.GUILayoutUtility/LayoutCacheState::id
	int32_t ___id_0;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCacheState::topLevel
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___topLevel_1;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCacheState::layoutGroups
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___layoutGroups_2;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCacheState::windows
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___windows_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUILayoutUtility/LayoutCacheState
struct LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_pinvoke
{
	int32_t ___id_0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___topLevel_1;
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___layoutGroups_2;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___windows_3;
};
// Native definition for COM marshalling of UnityEngine.GUILayoutUtility/LayoutCacheState
struct LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_com
{
	int32_t ___id_0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___topLevel_1;
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___layoutGroups_2;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___windows_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;
};

struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.GUI
struct GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A  : public RuntimeObject
{
};

struct GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields
{
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_0;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_1;
	// System.Int32 UnityEngine.GUI::s_ButonHash
	int32_t ___s_ButonHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___s_Skin_10;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::<scrollViewStates>k__BackingField
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___U3CscrollViewStatesU3Ek__BackingField_11;
};

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F  : public RuntimeObject
{
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_Style_8;
};

struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields
{
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;
};

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F  : public RuntimeObject
{
};

struct GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kDummyRect_3;
};

// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847  : public RuntimeObject
{
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_4;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.TextEditor
struct TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27  : public RuntimeObject
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;
};

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.ExitGUIException
struct ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549  : public Exception_t
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D  : public GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F
{
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;
};

struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields
{
	// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::none
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* ___none_31;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<System.Exception,System.Boolean>
struct Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5  : public GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D
{
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_32;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_33;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_34;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_35;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_36;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_37;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_38;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_39;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_40;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_41;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___horizontalScrollbar_42;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___verticalScrollbar_43;
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550  : public MulticastDelegate_t
{
};

// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC  : public RuntimeArray
{
	ALIGN_FIELD (8) GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* m_Items[1];

	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);

// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_gshared_inline (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mA5E77C0596952812A96703685523819CF50D71A0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___displayIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_m63F18F7B269DE062B3B59EED94EB9D7904685118 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m94C046E3FB46173983DB77ABA0F998DD6B7100E4 (int32_t ___displayIndex0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Destroy_mD5F39FF02811D670730B0CAE34DD0796BD1B706D (intptr_t ___ptr0, const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_isKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_isMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String UnityEngine.Event::get_commandName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngineInternal.GenericStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericStack__ctor_mD21753D674298C09F3684F19DD42680323055586 (GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m826905F62A9516B3A64DFCE9748C207506679DE5_inline (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_m96F9DAAD5B8B3000EEA28C4A437B5C292F71D245 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoSetSkin_m6C90273D9950FAC2FAFB802FBFEBB2A34CABB64B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___newSkin0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUIUtility_GetDefaultSkin_mC4A265D6EC82A49B0FE4C4D30362667FC7414BB2 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin::MakeCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_mDB3BB1FBA5BD2FEDDA3F32F11170F47A6444AEED (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* GUILayoutUtility_SelectIDList_mB7FB0ADC8613FE86C8B30C7758C81EE8E4CCEAEC (int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B (const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA (float ___width0, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Height_m6992DED02A160BA83D50072295F926A938413C11 (float ___height0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m3D036D8B66B4901698F6960DD9C566A3FD79B043 (int32_t ___windowID0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_inline (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_m6F689A1EB6D4CA82AF2D8010778554A028871AE7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FDFF98EA6ACDC116BCCA705EE8F8DEC09A4A0A7 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, String_t* ___tooltip2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_image_mB91F27FCD27EDBA24794D52B7F3DF1CF4E878164 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_m72C6B6EA0C9FCA1544A7FCF6C78A93E55D8CB415 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIContent::get_tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.String System.Object::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* __this, int32_t ___type0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_mD59BB1B89A08634B9A720097E6D31DACA8050CC0 (int32_t ___windowID0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_m4D0A92F3AA7D080AE96EA9A9BD70857D7C728499 (int32_t ___windowID0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___r1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8 (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* __this, int32_t ___key0, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*, int32_t, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___instanceID0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10 (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* __this, int32_t ___key0, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*, int32_t, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_mC2EB0CDB19ACB9515CE6B2F10F342F13703A6E9D (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___toplevel0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m64E1654845D5A5ED8A37AE90EAC5B10D4F2DDF64 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
inline Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20 (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::Dispose()
inline void Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454 (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::get_Current()
inline GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53* __this, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* (*) (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>::MoveNext()
inline bool Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13 (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_Internal_GetWindowRect_mF2823614FA0CC0B739708B55B246318B7A8901C4 (int32_t ___windowID0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_mD43A176B975F2A91B3F571FB26095AD2F40346CC (int32_t ___windowID0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___r1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
inline void Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202 (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUILayoutUtility/LayoutCache::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LayoutCache_get_id_mC223564DD70C5633178B4A99121331CA58F866A1_inline (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility/LayoutCacheState::.ctor(UnityEngine.GUILayoutUtility/LayoutCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCacheState__ctor_m01CFF2336336AD63861C0A66669C2176D226B649 (LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478* __this, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___cache0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB_inline (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISettings__ctor_m4AA9AFBD94306E007937909CB7F542DF2E491404 (GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m76616AC968865181F388F0FB44D5E0815CEF83B1 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, String_t* ___key0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, String_t*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, String_t* ___key0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, String_t*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_error_m69E8F0063CDF8B6328EDA2777108CC6E25522F50 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_FindStyle_mF82C37E2481D2B9E96C26EFE0353F8954F844FFE (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___styleName0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUISkin_get_font_m806CF702C59E43DF55BA441030A60F80E9D8CFD5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_inline (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
inline ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
inline Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197 (ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 (*) (ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m3BCCA4502E15D65D2F3C9A434E57A2ACCF208092 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m81BF5D1D82E6910871CFFCD95553F9EB5B1497C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_m23FFE736C61746CB9AB7CED66526B23221C0D3D3 (intptr_t ___self0, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0ED2147E2F26704F88BF3D98A4DFC8C64567B981 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, RuntimeObject* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIUtility_Internal_GetDefaultSkin_m11DF823D5E9F7A5489B53682204A810E0DE09993 (int32_t ___skinMode0, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Int32,System.IntPtr,System.Boolean>::Invoke(T1,T2)
inline bool Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_inline (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C*, int32_t, intptr_t, const RuntimeMethod*))Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m998891FCDC9CE044E47A93B49A626E76A14C4110 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m66550604CCE0B0FEDE5ABDD5663B05DF66D888E0 (int32_t ___instanceID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_mECB6422EF61E57B7FAB562E2230FC768C5FE0A3E (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_mBF183BB524E0B07D818AFA456F4BC9B74112B101 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_mAE3CC107457F9F8FB9782DF1A7CD00507D9A7362 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_mB2C343BC22F5A80934D6CADE2645AA7655F898C5 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Exception,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m215465BB041E8F2AE1E7AD0988951D160D8F8324_inline (Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* __this, Exception_t* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6*, Exception_t*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m7C3F78880FDC727F7A3837271C9BBBE12A35FEDA_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_changed_mD5313BD975A7843C9CCEF44FA49E5BE201870AA0 (bool ___value0, const RuntimeMethod* method) ;
// UnityEngineInternal.GenericStack UnityEngine.GUI::get_scrollViewStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* GUI_get_scrollViewStates_mC465E2368BB8F5741830D2831F78DF7027759694_inline (const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mDE98B1B261D96A3A97FC2AF8C01F9869D471BDFB (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_mA3E2729C87F5C320201C92F30282EED0ACDE70E4 (const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
inline void List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72 (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____style4, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_mF024E6CEAAD97888AE293810E01F8431D79456A3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m2D3679DAF547D104FE48E7D6D8E27B639F6A666B (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
inline int32_t List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
inline GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360 (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* (*) (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m268577E88A2AE5870C14EFDA9CB88C94CAC2ACE9 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___x0, float ___width1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mA20893626441C55001C1940C53A6A100DD22D61F (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___y0, float ___height1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GUILayoutEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_mD3785AC5958EB56ECA6E5D325D166C5F5725E615 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___x0, float ___width1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___y0, float ___height1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m32464F005A899BBFD3A7ED0C42A8301E317034C2 (EmbeddedAttribute_t4F9AD0F906A21B3318CFA9466B076A467E16305F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m4D550B87505994CE328D4DD1761EC8196DC96C31 (IsReadOnlyAttribute_t537BA5EEEDB652AA60A00E4CEA6B73710FBDD806* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke& marshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_com(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_com_back(const Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com& marshaled, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_com_cleanup(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com& marshaled)
{
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6(__this, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	Il2CppChar icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, int32_t);
	static Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::set_displayIndex(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Event::get_commandName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*);
	static Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Event_Internal_Create_m94C046E3FB46173983DB77ABA0F998DD6B7100E4 (int32_t ___displayIndex0, const RuntimeMethod* method) 
{
	typedef intptr_t (*Event_Internal_Create_m94C046E3FB46173983DB77ABA0F998DD6B7100E4_ftn) (int32_t);
	static Event_Internal_Create_m94C046E3FB46173983DB77ABA0F998DD6B7100E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Create_m94C046E3FB46173983DB77ABA0F998DD6B7100E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Create(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___displayIndex0);
	return icallRetVal;
}
// System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_Destroy_mD5F39FF02811D670730B0CAE34DD0796BD1B706D (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*Event_Internal_Destroy_mD5F39FF02811D670730B0CAE34DD0796BD1B706D_ftn) (intptr_t);
	static Event_Internal_Destroy_mD5F39FF02811D670730B0CAE34DD0796BD1B706D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_Destroy_mD5F39FF02811D670730B0CAE34DD0796BD1B706D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_SetNativeEvent_m63F18F7B269DE062B3B59EED94EB9D7904685118 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*Event_Internal_SetNativeEvent_m63F18F7B269DE062B3B59EED94EB9D7904685118_ftn) (intptr_t);
	static Event_Internal_SetNativeEvent_m63F18F7B269DE062B3B59EED94EB9D7904685118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m63F18F7B269DE062B3B59EED94EB9D7904685118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Internal_MakeMasterEventCurrent_m8229B17ECB1370C5C6D0385BE0E8E17DFC0FD49B (int32_t ___displayIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		V_0 = (bool)((((RuntimeObject*)(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___displayIndex0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3 = (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)il2cpp_codegen_object_new(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Event__ctor_mA5E77C0596952812A96703685523819CF50D71A0(L_3, L_2, NULL);
		((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2), (void*)L_3);
	}

IL_0018:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_4 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		int32_t L_5 = ___displayIndex0;
		NullCheck(L_4);
		Event_set_displayIndex_m8208F1B0471C0B45C0BB248F9A0178EB40FBE100(L_4, L_5, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_6 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1), (void*)L_6);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_7 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_MasterEvent_2;
		NullCheck(L_7);
		intptr_t L_8 = L_7->___m_Ptr_0;
		Event_Internal_SetNativeEvent_m63F18F7B269DE062B3B59EED94EB9D7904685118(L_8, NULL);
		return;
	}
}
// System.Void UnityEngine.Event::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mA5E77C0596952812A96703685523819CF50D71A0 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___displayIndex0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___displayIndex0;
		intptr_t L_1;
		L_1 = Event_Internal_Create_m94C046E3FB46173983DB77ABA0F998DD6B7100E4(L_0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.Event::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Finalize_m0882CB2E5E0C20C5C9669518C4DB5D95F840DAB7 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				intptr_t L_0 = __this->___m_Ptr_0;
				bool L_1;
				L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
				V_0 = L_1;
				bool L_2 = V_0;
				if (!L_2)
				{
					goto IL_002f_1;
				}
			}
			{
				intptr_t L_3 = __this->___m_Ptr_0;
				Event_Internal_Destroy_mD5F39FF02811D670730B0CAE34DD0796BD1B706D(L_3, NULL);
				__this->___m_Ptr_0 = (0);
			}

IL_002f_1:
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields*)il2cpp_codegen_static_fields_for(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var))->___s_Current_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0;
		L_0 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)20))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)((int32_t)21)))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B8_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B8_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_GetHashCode_m9E93319C0E2A92678BC6B3B9A7B1758DBA605E6E (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = 1;
		bool L_0;
		L_0 = Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2;
		L_2 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		V_0 = ((int32_t)(uint16_t)L_2);
	}

IL_0015:
	{
		bool L_3;
		L_3 = Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A(__this, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(__this, NULL);
		V_3 = L_5;
		int32_t L_6;
		L_6 = Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline((&V_3), NULL);
		V_0 = L_6;
	}

IL_0034:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)37)))|(int32_t)L_8));
		int32_t L_9 = V_0;
		V_4 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_10 = V_4;
		return L_10;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_Equals_mBA8BEAB37AE94F9B42F62D946DD61223E0F1258A (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B9_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___obj0;
		V_3 = (bool)((((RuntimeObject*)(Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)__this) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00b4;
	}

IL_001f:
	{
		RuntimeObject* L_4 = ___obj0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_003a:
	{
		RuntimeObject* L_8 = ___obj0;
		V_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)CastclassSealed((RuntimeObject*)L_8, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_il2cpp_TypeInfo_var));
		int32_t L_9;
		L_9 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_10, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12;
		L_12 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(L_13, NULL);
		G_B9_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_12&((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_14&((int32_t)-33)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B9_0 = 1;
	}

IL_0069:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_0073:
	{
		bool L_16;
		L_16 = Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754(__this, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_18;
		L_18 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(L_19, NULL);
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		goto IL_00b4;
	}

IL_0090:
	{
		bool L_21;
		L_21 = Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A(__this, NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_24 = V_0;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_24, NULL);
		bool L_26;
		L_26 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_23, L_25, NULL);
		V_2 = L_26;
		goto IL_00b4;
	}

IL_00b0:
	{
		V_2 = (bool)0;
		goto IL_00b4;
	}

IL_00b4:
	{
		bool L_27 = V_2;
		return L_27;
	}
}
// System.String UnityEngine.Event::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_ToString_mB30B330C86407E776E932EC18CF177A4066BA56B (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B9_0 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	{
		bool L_0;
		L_0 = Event_get_isKey_mDA8FE1CC5E305BAF181E86A727173C9BE9A1B754(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		Il2CppChar L_2;
		L_2 = Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61(__this, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6;
		L_6 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14;
		L_14 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(_stringLiteral4E8B350C9F6A421FA80C169857D1523CD21C39B5, L_13, NULL);
		V_2 = L_17;
		goto IL_0196;
	}

IL_005c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4D9134A16EE1AB6C900D14CBC31703F0C1B140F0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		int32_t L_21;
		L_21 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_3 = L_21;
		Il2CppFakeBox<int32_t> L_22(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_23;
		L_23 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_22), NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral43A6F489C4D44800507561D5B432827897F9FF7C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		Il2CppChar L_26;
		L_26 = Event_get_character_m8F7A92E90EF65B9379C01432B42D6BF818C32A61(__this, NULL);
		V_4 = L_26;
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5220DD5A418252356A406067BC43EC0FB773A172);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		int32_t L_30;
		L_30 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		V_5 = L_30;
		Il2CppFakeBox<int32_t> L_31(EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_32;
		L_32 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_31), NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral66976C0DEE9EDAC6B3AEF3749751FE7A3A10BC5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		int32_t L_35;
		L_35 = Event_get_keyCode_mADBB236A741F96D86E4A536E15FFECFD4C367B64(__this, NULL);
		V_6 = L_35;
		Il2CppFakeBox<int32_t> L_36(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, (&V_6));
		String_t* L_37;
		L_37 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_36), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_37);
		String_t* L_38;
		L_38 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_34, NULL);
		V_2 = L_38;
		goto IL_0196;
	}

IL_00e6:
	{
		bool L_39;
		L_39 = Event_get_isMouse_mBD11F4FE2996DFAD2648C8A9648E301EDDA51D7A(__this, NULL);
		V_7 = L_39;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_012f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_41;
		int32_t L_43;
		L_43 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_45);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = L_47;
		RuntimeObject* L_49 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_46;
		int32_t L_51;
		L_51 = Event_get_modifiers_mD55E7CF06EB720434F0F174EA569B2A29792D39B(__this, NULL);
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_53);
		String_t* L_54;
		L_54 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(_stringLiteral5DACFD2D2C00202C188DA9BBF7B7FDC9BB27DE15, L_50, NULL);
		V_2 = L_54;
		goto IL_0196;
	}

IL_012f:
	{
		int32_t L_55;
		L_55 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		if ((((int32_t)L_55) == ((int32_t)((int32_t)14))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_56;
		L_56 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		G_B9_0 = ((((int32_t)L_56) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B9_0 = 1;
	}

IL_0146:
	{
		V_8 = (bool)G_B9_0;
		bool L_57 = V_8;
		if (!L_57)
		{
			goto IL_0176;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = L_58;
		int32_t L_60;
		L_60 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		int32_t L_61 = L_60;
		RuntimeObject* L_62 = Box(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_62);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_62);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_59;
		String_t* L_64;
		L_64 = Event_get_commandName_m14F2015FA5A9050C3C42AF1BD9D0E85D4FF78C24(__this, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_64);
		String_t* L_65;
		L_65 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(_stringLiteral0A9E6C82A5143ED08E63E500C0978BF5985C84CA, L_63, NULL);
		V_2 = L_65;
		goto IL_0196;
	}

IL_0176:
	{
		int32_t L_66;
		L_66 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(__this, NULL);
		V_3 = L_66;
		Il2CppFakeBox<int32_t> L_67(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_68;
		L_68 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_67), NULL);
		String_t* L_69 = L_68;
		G_B12_0 = L_69;
		if (L_69)
		{
			G_B13_0 = L_69;
			goto IL_0193;
		}
	}
	{
		G_B13_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0193:
	{
		V_2 = G_B13_0;
		goto IL_0196;
	}

IL_0196:
	{
		String_t* L_70 = V_2;
		return L_70;
	}
}
// System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6_ftn) (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_mousePosition_Injected_m003389887CF74AEA0E5FC70326E0BF873CDEDCE6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_changed_mD5313BD975A7843C9CCEF44FA49E5BE201870AA0 (bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUI_set_changed_mD5313BD975A7843C9CCEF44FA49E5BE201870AA0_ftn) (bool);
	static GUI_set_changed_mD5313BD975A7843C9CCEF44FA49E5BE201870AA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_mD5313BD975A7843C9CCEF44FA49E5BE201870AA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.GUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI__cctor_m844F2616037B0E030BCDBE552ABD406F37BE14C5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_HotTextField_0 = (-1);
		NullCheck(_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_BoxHash_1 = L_0;
		NullCheck(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ButonHash_2 = L_1;
		NullCheck(_stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral26A0821DCB6810F9EE588E7C2AF0FE26E68B99AC);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_RepeatButtonHash_3 = L_2;
		NullCheck(_stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralDC732E3A9B0520E01A6AE99A59C55B4519E814DE);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ToggleHash_4 = L_3;
		NullCheck(_stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralE844BE1BC8BA23F51EC74943018ABA36BC1A51FF);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ButtonGridHash_5 = L_4;
		NullCheck(_stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_SliderHash_6 = L_5;
		NullCheck(_stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteralA6B35BC56FF405443673DBCB6226185BD30D1B95);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_BeginGroupHash_7 = L_6;
		NullCheck(_stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral65E8AF72B6FAEC3075CAD781342983D346E05E2F);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_ScrollviewHash_8 = L_7;
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_8 = (GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49*)il2cpp_codegen_object_new(GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GenericStack__ctor_mD21753D674298C09F3684F19DD42680323055586(L_8, NULL);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_11), (void*)L_8);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		GUI_set_nextScrollStepTime_m826905F62A9516B3A64DFCE9748C207506679DE5_inline(L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m826905F62A9516B3A64DFCE9748C207506679DE5 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CnextScrollStepTimeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIUtility_CheckOnGUI_m96F9DAAD5B8B3000EEA28C4A437B5C292F71D245(NULL);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DoSetSkin_m6C90273D9950FAC2FAFB802FBFEBB2A34CABB64B(L_0, NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* V_0 = NULL;
	{
		GUIUtility_CheckOnGUI_m96F9DAAD5B8B3000EEA28C4A437B5C292F71D245(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10;
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DoSetSkin_m6C90273D9950FAC2FAFB802FBFEBB2A34CABB64B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___newSkin0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ___newSkin0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3;
		L_3 = GUIUtility_GetDefaultSkin_mC4A265D6EC82A49B0FE4C4D30362667FC7414BB2(NULL);
		___newSkin0 = L_3;
	}

IL_0015:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_4 = ___newSkin0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___s_Skin_10), (void*)L_4);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_5 = ___newSkin0;
		NullCheck(L_5);
		GUISkin_MakeCurrent_mDB3BB1FBA5BD2FEDDA3F32F11170F47A6444AEED(L_5, NULL);
		return;
	}
}
// UnityEngineInternal.GenericStack UnityEngine.GUI::get_scrollViewStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* GUI_get_scrollViewStates_mC465E2368BB8F5741830D2831F78DF7027759694 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_CallWindowDelegate_m95AF13FE1740FC5676B74CBE965F8E4B4C1EED88 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___func0, int32_t ___id1, int32_t ___instanceID2, GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____skin3, int32_t ___forceRect4, float ___width5, float ___height6, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* V_3 = NULL;
	bool V_4 = false;
	{
		int32_t L_0 = ___id1;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_1;
		L_1 = GUILayoutUtility_SelectIDList_mB7FB0ADC8613FE86C8B30C7758C81EE8E4CCEAEC(L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2;
		L_2 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		V_0 = L_2;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3;
		L_3 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)8))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___forceRect4;
		V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_8 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9 = L_8;
		float L_10 = ___width5;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_11;
		L_11 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_11);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_12 = L_9;
		float L_13 = ___height6;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_14;
		L_14 = GUILayout_Height_m6992DED02A160BA83D50072295F926A938413C11(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_14);
		V_3 = L_12;
		int32_t L_15 = ___id1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_16 = ___style7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m3D036D8B66B4901698F6960DD9C566A3FD79B043(L_15, L_16, L_17, NULL);
		goto IL_005f;
	}

IL_0053:
	{
		int32_t L_18 = ___id1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19 = ___style7;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m3D036D8B66B4901698F6960DD9C566A3FD79B043(L_18, L_19, (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)NULL, NULL);
	}

IL_005f:
	{
		goto IL_0071;
	}

IL_0062:
	{
		int32_t L_20 = ___id1;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21;
		L_21 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m3D036D8B66B4901698F6960DD9C566A3FD79B043(L_20, L_21, (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)NULL, NULL);
	}

IL_0071:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_22 = ____skin3;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_22, NULL);
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_23 = ___func0;
		if (L_23)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0085;
	}

IL_007d:
	{
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_24 = ___func0;
		int32_t L_25 = ___id1;
		NullCheck(L_24);
		WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_inline(L_24, L_25, NULL);
	}

IL_0085:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_26;
		L_26 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_26, NULL);
		V_4 = (bool)((((int32_t)L_27) == ((int32_t)8))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_m6F689A1EB6D4CA82AF2D8010778554A028871AE7(NULL);
	}

IL_00a0:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB(L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_Multicast(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* currentDelegate = reinterpret_cast<WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___id0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_Open(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___id0, method);
}
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_OpenStaticInvoker(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___id0);
}
void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_ClosedStaticInvoker(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___id0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___id0);

}
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_Multicast;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___id0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com_back(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled)
{
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GUIContent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com_cleanup(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled)
{
}
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Text_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_image_mB91F27FCD27EDBA24794D52B7F3DF1CF4E878164 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		__this->___m_Image_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_1), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.GUIContent::get_tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Tooltip_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_m72C6B6EA0C9FCA1544A7FCF6C78A93E55D8CB415 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_Tooltip_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Tooltip_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		GUIContent__ctor_m3FDFF98EA6ACDC116BCCA705EE8F8DEC09A4A0A7(__this, L_0, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FDFF98EA6ACDC116BCCA705EE8F8DEC09A4A0A7 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, String_t* ___tooltip2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Tooltip_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_2 = ___text0;
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(__this, L_2, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___image1;
		GUIContent_set_image_mB91F27FCD27EDBA24794D52B7F3DF1CF4E878164(__this, L_3, NULL);
		String_t* L_4 = ___tooltip2;
		GUIContent_set_tooltip_m72C6B6EA0C9FCA1544A7FCF6C78A93E55D8CB415(__this, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_mAE3CC107457F9F8FB9782DF1A7CD00507D9A7362 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___m_Text_0), (void*)(String_t*)NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_1);
		L_1->___m_Tooltip_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___m_Tooltip_2), (void*)L_2);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___m_Image_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_4);
		L_4->___m_Tooltip_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_Tooltip_2), (void*)L_5);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_6 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5;
		NullCheck(L_6);
		L_6->___m_Text_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___m_Text_0), (void*)(String_t*)NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5;
		NullCheck(L_7);
		L_7->___m_Image_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___m_Image_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		return;
	}
}
// System.String UnityEngine.GUIContent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_ToString_m9F42CA1D8DEFB446686D0010FF57B4F9B140BB9A (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		String_t* L_0;
		L_0 = GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B3_0 = L_1;
			goto IL_001b;
		}
	}
	{
		String_t* L_2;
		L_2 = GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD(__this, NULL);
		String_t* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001b;
		}
	}
	{
		String_t* L_4;
		L_4 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		G_B3_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__cctor_m18DF5018A032F11DAE866E57FB654F6D1114CC9F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_0, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3), (void*)L_0);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_1, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4), (void*)L_1);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_2, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5), (void*)L_2);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA (float ___width0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_0 = NULL;
	{
		float L_0 = ___width0;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_3 = (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)il2cpp_codegen_object_new(GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA(L_3, 0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Height_m6992DED02A160BA83D50072295F926A938413C11 (float ___height0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_0 = NULL;
	{
		float L_0 = ___height0;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_3 = (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)il2cpp_codegen_object_new(GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA(L_3, 1, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* __this, int32_t ___type0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___type0;
		__this->___type_0 = L_0;
		RuntimeObject* L_1 = ___value1;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_Internal_GetWindowRect_mF2823614FA0CC0B739708B55B246318B7A8901C4 (int32_t ___windowID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___windowID0;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_GetWindowRect_Injected_mD59BB1B89A08634B9A720097E6D31DACA8050CC0(L_0, (&V_0), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_mD43A176B975F2A91B3F571FB26095AD2F40346CC (int32_t ___windowID0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___windowID0;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Internal_MoveWindow_Injected_m4D0A92F3AA7D080AE96EA9A9BD70857D7C728499(L_0, (&___r1), NULL);
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* GUILayoutUtility_SelectIDList_mB7FB0ADC8613FE86C8B30C7758C81EE8E4CCEAEC (int32_t ___instanceID0, bool ___isWindow1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* V_0 = NULL;
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_1 = NULL;
	bool V_2 = false;
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_3 = NULL;
	Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* G_B3_0 = NULL;
	{
		bool L_0 = ___isWindow1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_1 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredLayouts_0;
		G_B3_0 = L_1;
		goto IL_0010;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_2 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredWindows_1;
		G_B3_0 = L_2;
	}

IL_0010:
	{
		V_0 = G_B3_0;
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_3 = V_0;
		int32_t L_4 = ___instanceID0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_mF6FAFEDDE37A2FE277E1ABFF79B29FD0700A91F8_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___instanceID0;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_8 = (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60*)il2cpp_codegen_object_new(LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B(L_8, L_7, NULL);
		V_1 = L_8;
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_9 = V_0;
		int32_t L_10 = ___instanceID0;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_11 = V_1;
		NullCheck(L_9);
		Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10(L_9, L_10, L_11, Dictionary_2_set_Item_m6920FD9D9518E101681E8F562ED9732085222C10_RuntimeMethod_var);
	}

IL_0033:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_12 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_13 = V_1;
		NullCheck(L_13);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_14 = L_13->___topLevel_1;
		NullCheck(L_12);
		L_12->___topLevel_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___topLevel_1), (void*)L_14);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_15 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_16 = V_1;
		NullCheck(L_16);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_17 = L_16->___layoutGroups_2;
		NullCheck(L_15);
		L_15->___layoutGroups_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___layoutGroups_2), (void*)L_17);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_18 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_19 = V_1;
		NullCheck(L_19);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_20 = L_19->___windows_3;
		NullCheck(L_18);
		L_18->___windows_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___windows_3), (void*)L_20);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_21 = V_1;
		V_3 = L_21;
		goto IL_0067;
	}

IL_0067:
	{
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_22 = V_3;
		return L_22;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Begin_m66550604CCE0B0FEDE5ABDD5663B05DF66D888E0 (int32_t ___instanceID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_0 = NULL;
	bool V_1 = false;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* V_2 = NULL;
	{
		int32_t L_0 = ___instanceID0;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_1;
		L_1 = GUILayoutUtility_SelectIDList_mB7FB0ADC8613FE86C8B30C7758C81EE8E4CCEAEC(L_0, (bool)0, NULL);
		V_0 = L_1;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)8))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_6 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_7, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_8 = L_7;
		V_2 = L_8;
		NullCheck(L_6);
		L_6->___topLevel_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___topLevel_1), (void*)L_8);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_9 = V_2;
		NullCheck(L_5);
		L_5->___topLevel_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___topLevel_1), (void*)L_9);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_10 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_10);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_11 = L_10->___layoutGroups_2;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Collections.Stack::Clear() */, L_11);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_12 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_12);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_13 = L_12->___layoutGroups_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_14 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_15 = L_14->___topLevel_1;
		NullCheck(L_13);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_13, L_15);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_16 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_17 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_18 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_18, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_17);
		L_17->___windows_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___windows_3), (void*)L_19);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_20 = V_2;
		NullCheck(L_16);
		L_16->___windows_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___windows_3), (void*)L_20);
		goto IL_00aa;
	}

IL_0078:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_21 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_22 = V_0;
		NullCheck(L_22);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_23 = L_22->___topLevel_1;
		NullCheck(L_21);
		L_21->___topLevel_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___topLevel_1), (void*)L_23);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_24 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_25 = V_0;
		NullCheck(L_25);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_26 = L_25->___layoutGroups_2;
		NullCheck(L_24);
		L_24->___layoutGroups_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___layoutGroups_2), (void*)L_26);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_27 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_28 = V_0;
		NullCheck(L_28);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_29 = L_28->___windows_3;
		NullCheck(L_27);
		L_27->___windows_3 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___windows_3), (void*)L_29);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_BeginWindow_m3D036D8B66B4901698F6960DD9C566A3FD79B043 (int32_t ___windowID0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* V_0 = NULL;
	bool V_1 = false;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* V_2 = NULL;
	bool V_3 = false;
	{
		int32_t L_0 = ___windowID0;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_1;
		L_1 = GUILayoutUtility_SelectIDList_mB7FB0ADC8613FE86C8B30C7758C81EE8E4CCEAEC(L_0, (bool)1, NULL);
		V_0 = L_1;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)8))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_6 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_7, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_8 = L_7;
		V_2 = L_8;
		NullCheck(L_6);
		L_6->___topLevel_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___topLevel_1), (void*)L_8);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_9 = V_2;
		NullCheck(L_5);
		L_5->___topLevel_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___topLevel_1), (void*)L_9);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_10 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_11 = L_10->___topLevel_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = ___style1;
		NullCheck(L_11);
		GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A(L_11, L_12, NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_13 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_14 = L_13->___topLevel_1;
		int32_t L_15 = ___windowID0;
		NullCheck(L_14);
		L_14->___windowID_17 = L_15;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_16 = ___options2;
		V_3 = (bool)((!(((RuntimeObject*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_18 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_18);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_19 = L_18->___topLevel_1;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_20 = ___options2;
		NullCheck(L_19);
		VirtualActionInvoker1< GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* >::Invoke(13 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_19, L_20);
	}

IL_0070:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_21 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_21);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_22 = L_21->___layoutGroups_2;
		NullCheck(L_22);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Collections.Stack::Clear() */, L_22);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_23 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_23);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_24 = L_23->___layoutGroups_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_25 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_26 = L_25->___topLevel_1;
		NullCheck(L_24);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_24, L_26);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_27 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_28 = V_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_29 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_29, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_30 = L_29;
		V_2 = L_30;
		NullCheck(L_28);
		L_28->___windows_3 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___windows_3), (void*)L_30);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_31 = V_2;
		NullCheck(L_27);
		L_27->___windows_3 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___windows_3), (void*)L_31);
		goto IL_00e7;
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_32 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_33 = V_0;
		NullCheck(L_33);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_34 = L_33->___topLevel_1;
		NullCheck(L_32);
		L_32->___topLevel_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___topLevel_1), (void*)L_34);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_35 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_36 = V_0;
		NullCheck(L_36);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_37 = L_36->___layoutGroups_2;
		NullCheck(L_35);
		L_35->___layoutGroups_2 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___layoutGroups_2), (void*)L_37);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_38 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_39 = V_0;
		NullCheck(L_39);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_40 = L_39->___windows_3;
		NullCheck(L_38);
		L_38->___windows_3 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___windows_3), (void*)L_40);
	}

IL_00e7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Layout_m6F689A1EB6D4CA82AF2D8010778554A028871AE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_0 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_1 = L_0->___topLevel_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___windowID_17;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00b8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_4 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_4);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_5 = L_4->___topLevel_1;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_5);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_6 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_6);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = L_6->___topLevel_1;
		int32_t L_8;
		L_8 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_9;
		L_9 = GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6(NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_10 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_11 = L_10->___topLevel_1;
		NullCheck(L_11);
		float L_12 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_11)->___maxWidth_1;
		float L_13;
		L_13 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(((float)(((float)L_8)/L_9)), L_12, NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_7, (0.0f), L_13);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_14 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_15 = L_14->___topLevel_1;
		NullCheck(L_15);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_15);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_16 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_17 = L_16->___topLevel_1;
		int32_t L_18;
		L_18 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_19;
		L_19 = GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6(NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_20 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_20);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_21 = L_20->___topLevel_1;
		NullCheck(L_21);
		float L_22 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_21)->___maxHeight_3;
		float L_23;
		L_23 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(((float)(((float)L_18)/L_19)), L_22, NULL);
		NullCheck(L_17);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_17, (0.0f), L_23);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_24 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_24);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_25 = L_24->___windows_3;
		GUILayoutUtility_LayoutFreeGroup_mC2EB0CDB19ACB9515CE6B2F10F342F13703A6E9D(L_25, NULL);
		goto IL_00da;
	}

IL_00b8:
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_26 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_26);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_27 = L_26->___topLevel_1;
		GUILayoutUtility_LayoutSingleGroup_m64E1654845D5A5ED8A37AE90EAC5B10D4F2DDF64(L_27, NULL);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_28 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_28);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_29 = L_28->___windows_3;
		GUILayoutUtility_LayoutFreeGroup_mC2EB0CDB19ACB9515CE6B2F10F342F13703A6E9D(L_29, NULL);
	}

IL_00da:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFromEditorWindow_mBF183BB524E0B07D818AFA456F4BC9B74112B101 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_0 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_1 = L_0->___topLevel_1;
		V_0 = (bool)((!(((RuntimeObject*)(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_3 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_4 = L_3->___topLevel_1;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_4);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_5 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_6 = L_5->___topLevel_1;
		int32_t L_7;
		L_7 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_8;
		L_8 = GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6(NULL);
		NullCheck(L_6);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), ((float)(((float)L_7)/L_8)));
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_9 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_10 = L_9->___topLevel_1;
		NullCheck(L_10);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_10);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_11 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_11);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_12 = L_11->___topLevel_1;
		int32_t L_13;
		L_13 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_14;
		L_14 = GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6(NULL);
		NullCheck(L_12);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_12, (0.0f), ((float)(((float)L_13)/L_14)));
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_15 = ((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2;
		NullCheck(L_15);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_16 = L_15->___windows_3;
		GUILayoutUtility_LayoutFreeGroup_mC2EB0CDB19ACB9515CE6B2F10F342F13703A6E9D(L_16, NULL);
		goto IL_0095;
	}

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral10ACE3A0FC4434FF078CBB1C934C7CE2ACEB3EE1, NULL);
	}

IL_0095:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutFreeGroup_mC2EB0CDB19ACB9515CE6B2F10F342F13703A6E9D (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___toplevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* V_1 = NULL;
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = ___toplevel0;
		NullCheck(L_0);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_1 = L_0->___entries_11;
		NullCheck(L_1);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_2;
		L_2 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_1, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_0), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0010_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_3;
				L_3 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_0), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_1 = ((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)CastclassClass((RuntimeObject*)L_3, GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var));
				GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_4 = V_1;
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				GUILayoutUtility_LayoutSingleGroup_m64E1654845D5A5ED8A37AE90EAC5B10D4F2DDF64(L_4, NULL);
			}

IL_0026_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_0), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_6 = ___toplevel0;
		NullCheck(L_6);
		GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_LayoutSingleGroup_m64E1654845D5A5ED8A37AE90EAC5B10D4F2DDF64 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = ___i0;
		NullCheck(L_0);
		bool L_1 = L_0->___isWindow_16;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007c;
		}
	}
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_3 = ___i0;
		NullCheck(L_3);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_3)->___minWidth_0;
		V_1 = L_4;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_5 = ___i0;
		NullCheck(L_5);
		float L_6 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_5)->___maxWidth_1;
		V_2 = L_6;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = ___i0;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_7);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_8 = ___i0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_9 = ___i0;
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_10 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_9)->___rect_4);
		float L_11;
		L_11 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_10, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_12 = ___i0;
		NullCheck(L_12);
		float L_13 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_12)->___maxWidth_1;
		float L_14 = V_1;
		float L_15 = V_2;
		float L_16;
		L_16 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_13, L_14, L_15, NULL);
		NullCheck(L_8);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_8, L_11, L_16);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_17 = ___i0;
		NullCheck(L_17);
		float L_18 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_17)->___minHeight_2;
		V_3 = L_18;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_19 = ___i0;
		NullCheck(L_19);
		float L_20 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_19)->___maxHeight_3;
		V_4 = L_20;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_21 = ___i0;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_21);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_22 = ___i0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_23 = ___i0;
		NullCheck(L_23);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_23)->___rect_4);
		float L_25;
		L_25 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_24, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_26 = ___i0;
		NullCheck(L_26);
		float L_27 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_26)->___maxHeight_3;
		float L_28 = V_3;
		float L_29 = V_4;
		float L_30;
		L_30 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_27, L_28, L_29, NULL);
		NullCheck(L_22);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_22, L_25, L_30);
		goto IL_00f7;
	}

IL_007c:
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_31 = ___i0;
		NullCheck(L_31);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_31);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_32 = ___i0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___windowID_17;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_34;
		L_34 = GUILayoutUtility_Internal_GetWindowRect_mF2823614FA0CC0B739708B55B246318B7A8901C4(L_33, NULL);
		V_5 = L_34;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_35 = ___i0;
		float L_36;
		L_36 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_5), NULL);
		float L_37;
		L_37 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_38 = ___i0;
		NullCheck(L_38);
		float L_39 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_38)->___minWidth_0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_40 = ___i0;
		NullCheck(L_40);
		float L_41 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_40)->___maxWidth_1;
		float L_42;
		L_42 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_37, L_39, L_41, NULL);
		NullCheck(L_35);
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_35, L_36, L_42);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_43 = ___i0;
		NullCheck(L_43);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_43);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_44 = ___i0;
		float L_45;
		L_45 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_5), NULL);
		float L_46;
		L_46 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_47 = ___i0;
		NullCheck(L_47);
		float L_48 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_47)->___minHeight_2;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_49 = ___i0;
		NullCheck(L_49);
		float L_50 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_49)->___maxHeight_3;
		float L_51;
		L_51 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_46, L_48, L_50, NULL);
		NullCheck(L_44);
		VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_44, L_45, L_51);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_52 = ___i0;
		NullCheck(L_52);
		int32_t L_53 = L_52->___windowID_17;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_54 = ___i0;
		NullCheck(L_54);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_55 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)L_54)->___rect_4;
		GUILayoutUtility_Internal_MoveWindow_mD43A176B975F2A91B3F571FB26095AD2F40346CC(L_53, L_55, NULL);
	}

IL_00f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility__cctor_mA15B59835BB8C027D885774087D4D2E03E0C9A7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_0 = (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*)il2cpp_codegen_object_new(Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202(L_0, Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredLayouts_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredLayouts_0), (void*)L_0);
		Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598* L_1 = (Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598*)il2cpp_codegen_object_new(Dictionary_2_tD74A089D3CFE69E54B1617003276B07F5B82B598_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202(L_1, Dictionary_2__ctor_m26D30094F62EB94273B024DB6AD146CD142F4202_RuntimeMethod_var);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredWindows_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___s_StoredWindows_1), (void*)L_1);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_2 = (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60*)il2cpp_codegen_object_new(LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B(L_2, (-1), NULL);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___current_2), (void*)L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var))->___kDummyRect_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_GetWindowRect_Injected_mD59BB1B89A08634B9A720097E6D31DACA8050CC0 (int32_t ___windowID0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*GUILayoutUtility_Internal_GetWindowRect_Injected_mD59BB1B89A08634B9A720097E6D31DACA8050CC0_ftn) (int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUILayoutUtility_Internal_GetWindowRect_Injected_mD59BB1B89A08634B9A720097E6D31DACA8050CC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_Injected_mD59BB1B89A08634B9A720097E6D31DACA8050CC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___ret1);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutUtility_Internal_MoveWindow_Injected_m4D0A92F3AA7D080AE96EA9A9BD70857D7C728499 (int32_t ___windowID0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___r1, const RuntimeMethod* method) 
{
	typedef void (*GUILayoutUtility_Internal_MoveWindow_Injected_m4D0A92F3AA7D080AE96EA9A9BD70857D7C728499_ftn) (int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUILayoutUtility_Internal_MoveWindow_Injected_m4D0A92F3AA7D080AE96EA9A9BD70857D7C728499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_MoveWindow_Injected_m4D0A92F3AA7D080AE96EA9A9BD70857D7C728499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID0, ___r1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.GUILayoutUtility/LayoutCacheState
IL2CPP_EXTERN_C void LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshal_pinvoke(const LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478& unmarshaled, LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_pinvoke& marshaled)
{
	Exception_t* ___topLevel_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'topLevel' of type 'LayoutCacheState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___topLevel_1Exception, NULL);
}
IL2CPP_EXTERN_C void LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshal_pinvoke_back(const LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_pinvoke& marshaled, LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478& unmarshaled)
{
	Exception_t* ___topLevel_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'topLevel' of type 'LayoutCacheState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___topLevel_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUILayoutUtility/LayoutCacheState
IL2CPP_EXTERN_C void LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshal_pinvoke_cleanup(LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.GUILayoutUtility/LayoutCacheState
IL2CPP_EXTERN_C void LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshal_com(const LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478& unmarshaled, LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_com& marshaled)
{
	Exception_t* ___topLevel_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'topLevel' of type 'LayoutCacheState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___topLevel_1Exception, NULL);
}
IL2CPP_EXTERN_C void LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshal_com_back(const LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_com& marshaled, LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478& unmarshaled)
{
	Exception_t* ___topLevel_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'topLevel' of type 'LayoutCacheState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___topLevel_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUILayoutUtility/LayoutCacheState
IL2CPP_EXTERN_C void LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshal_com_cleanup(LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCacheState::.ctor(UnityEngine.GUILayoutUtility/LayoutCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCacheState__ctor_m01CFF2336336AD63861C0A66669C2176D226B649 (LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478* __this, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___cache0, const RuntimeMethod* method) 
{
	{
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_0 = ___cache0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LayoutCache_get_id_mC223564DD70C5633178B4A99121331CA58F866A1_inline(L_0, NULL);
		__this->___id_0 = L_1;
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_2 = ___cache0;
		NullCheck(L_2);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_3 = L_2->___topLevel_1;
		__this->___topLevel_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topLevel_1), (void*)L_3);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_4 = ___cache0;
		NullCheck(L_4);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_5 = L_4->___layoutGroups_2;
		__this->___layoutGroups_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layoutGroups_2), (void*)L_5);
		LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_6 = ___cache0;
		NullCheck(L_6);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = L_6->___windows_3;
		__this->___windows_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windows_3), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C  void LayoutCacheState__ctor_m01CFF2336336AD63861C0A66669C2176D226B649_AdjustorThunk (RuntimeObject* __this, LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* ___cache0, const RuntimeMethod* method)
{
	LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478*>(__this + _offset);
	LayoutCacheState__ctor_m01CFF2336336AD63861C0A66669C2176D226B649(_thisAdjusted, ___cache0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.GUILayoutUtility/LayoutCache::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayoutCache_get_id_mC223564DD70C5633178B4A99121331CA58F866A1 (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCacheState UnityEngine.GUILayoutUtility/LayoutCache::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 LayoutCache_get_State_m02A0EC32067A64E78ED5015914ADD44FEA742B71 (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, const RuntimeMethod* method) 
{
	{
		LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 L_0;
		memset((&L_0), 0, sizeof(L_0));
		LayoutCacheState__ctor_m01CFF2336336AD63861C0A66669C2176D226B649((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache__ctor_m73B4DC62A0A7669976C8444DDB54EF8D55BF3E0B (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___instanceID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_0, NULL);
		__this->___topLevel_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topLevel_1), (void*)L_0);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_1 = (GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49*)il2cpp_codegen_object_new(GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GenericStack__ctor_mD21753D674298C09F3684F19DD42680323055586(L_1, NULL);
		__this->___layoutGroups_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layoutGroups_2), (void*)L_1);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_2 = (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)il2cpp_codegen_object_new(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(L_2, NULL);
		__this->___windows_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windows_3), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_3 = ___instanceID0;
		LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB_inline(__this, L_3, NULL);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_4 = __this->___layoutGroups_2;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_5 = __this->___topLevel_1;
		NullCheck(L_4);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::CopyState(UnityEngine.GUILayoutUtility/LayoutCacheState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_CopyState_mF256F33437826BC3C529C46B25B1D23BC0FD1597 (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 ___other0, const RuntimeMethod* method) 
{
	{
		LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 L_0 = ___other0;
		int32_t L_1 = L_0.___id_0;
		LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB_inline(__this, L_1, NULL);
		LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 L_2 = ___other0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_3 = L_2.___topLevel_1;
		__this->___topLevel_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topLevel_1), (void*)L_3);
		LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 L_4 = ___other0;
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_5 = L_4.___layoutGroups_2;
		__this->___layoutGroups_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layoutGroups_2), (void*)L_5);
		LayoutCacheState_t5BDD366BB21F71D46FB9ED907554C06E6967A478 L_6 = ___other0;
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_7 = L_6.___windows_3;
		__this->___windows_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windows_3), (void*)L_7);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility/LayoutCache::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutCache_ResetCursor_m728841782E13F82B1AE96E40AF16D6C8EBE6D59A (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_0 = __this->___windows_3;
		NullCheck(L_0);
		GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(L_0, NULL);
		GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* L_1 = __this->___topLevel_1;
		NullCheck(L_1);
		GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(L_1, NULL);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_2 = __this->___layoutGroups_2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(14 /* System.Collections.IEnumerator System.Collections.Stack::GetEnumerator() */, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0028_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				RuntimeObject* L_9 = V_1;
				NullCheck(((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)CastclassClass((RuntimeObject*)L_9, GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var)));
				GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127(((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D*)CastclassClass((RuntimeObject*)L_9, GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var)), NULL);
			}

IL_003b_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISettings__ctor_m4AA9AFBD94306E007937909CB7F542DF2E491404 (GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_DoubleClickSelectsWord_0 = (bool)1;
		__this->___m_TripleClickSelectsLine_1 = (bool)1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUISkin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin__ctor_mAA94A46B37D9C2F70962435F250BBA202CD1EC7A (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* L_0 = (GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847*)il2cpp_codegen_object_new(GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUISettings__ctor_m4AA9AFBD94306E007937909CB7F542DF2E491404(L_0, NULL);
		__this->___m_Settings_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Settings_29), (void*)L_0);
		__this->___m_Styles_31 = (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Styles_31), (void*)(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)NULL);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_1 = (GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)SZArrayNew(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___m_CustomStyles_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CustomStyles_28), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_OnEnable_m5A7FE1F57C549711FCCC2DB0322F8667129AA0BF (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	{
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::CleanupRoots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_CleanupRoots_mF2D625E3D261F6087AA24848EA9353C4A88C9C6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33 = (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33), (void*)(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)NULL);
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30), (void*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUISkin_get_font_m806CF702C59E43DF55BA441030A60F80E9D8CFD5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* V_0 = NULL;
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = __this->___m_Font_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_font_mF98516DE4363C888D7215006D51BD527F3F9DDA9 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ___value0;
		__this->___m_Font_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Font_4), (void*)L_0);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_1 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, __this, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_4 = __this->___m_Font_4;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m76616AC968865181F388F0FB44D5E0815CEF83B1(L_4, NULL);
	}

IL_0023:
	{
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_box_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_box_m82E578044569D3831D103FFA1413D81DABF74711 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_box_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_box_5), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_label_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_label_m7E9E63BBA37F93D886F7E6AF70772ECD7894462B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_label_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_label_8), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_textField_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_textField_m4730F5B544F2A87AF3CA75A01FE845E5D40E06BE (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_textField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textField_9), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textArea_m0ECBC9D126D930490F96E100B27F245E555EB7D1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_textArea_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_textArea_m916CC2135EE608D81035D3E96787735534DF4E9D (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_textArea_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textArea_10), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_button_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_button_m45F7F5CBF3E9286F4CD601AA92C0C3207C0BB373 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_button_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_button_6), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_toggle_mD5F318C602494C478F09C2D48741EC7A9CF5B849 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_toggle_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_toggle_mFE0DA0EC1F1952464B85894CCCFECFA5E0E0C57E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_toggle_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_toggle_7), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_window_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_window_mA74900E5D554578F3F45DD858B79C5A8FA4A6220 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_window_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_window_11), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalSlider_mAA1753FEEDBA6E28A3A56C3E44A8F5B3D6C8336B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalSlider_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSlider_m8357A90F358C1A040308C8D0DEE363D3ABA71575 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_horizontalSlider_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSlider_12), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalSliderThumb_m9EE5EF8204397C2946D7F384AB7D8A17693837BD (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalSliderThumb_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSliderThumb_m1042BED23F10E28042D77D7E738F86C1FEDF460E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_horizontalSliderThumb_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumb_13), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumbExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalSliderThumbExtent_m6408F303B8932D6E74B307070689A96EA082D612 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalSliderThumbExtent_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumbExtent(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSliderThumbExtent_m8F4C637DB7E25697AB463B9F2F8D50D8493609C1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_horizontalSliderThumbExtent_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumbExtent_14), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_sliderMixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_sliderMixed_mFD8CBA8BE229E299D63822AE3E632DABCC27FF61 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_SliderMixed_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_sliderMixed(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_sliderMixed_m8A129FB05FAA0970C01A8C3DB14903E13F8E37B3 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_SliderMixed_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SliderMixed_18), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalSlider_mB7EC86D11019F1892365E9C6F2A846A68879BBD5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalSlider_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSlider_m02D94C0BFF867BD8B1ECE05AB50F7F2475DF0E35 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_verticalSlider_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSlider_15), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalSliderThumb_m3D86347FFC94841C8B6CA94F9F946C76E96EBADB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalSliderThumb_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSliderThumb_mFBFA636B05068A0E7D24C8C3B06044AB2ACD4C58 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_verticalSliderThumb_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumb_16), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumbExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalSliderThumbExtent_m299DED8D10A1CE0F22B43BAF47D70DA1EB079AFA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalSliderThumbExtent_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumbExtent(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSliderThumbExtent_m3ECC754FC08BCFA5C3264A6B83C9EE280C1EFCDD (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_verticalSliderThumbExtent_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumbExtent_17), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbar_m945A39FBD098D3800A189FC34B9CE9E8AFF3AEEA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbar_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbar_mF08764A78F23728E6FE157F08B9A0127157071FA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_horizontalScrollbar_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbar_19), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbarThumb_m5011EED1650028044BCC7F6DE2829AC0243208BB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbarThumb_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarThumb_mDDADEFFD5BF9B88AC4A37AEA13B6FCCC28A3F696 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_horizontalScrollbarThumb_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarThumb_20), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbarLeftButton_m4A6E58CF80A66F58CF5792B31D08A2D74BF40567 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbarLeftButton_21;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarLeftButton_m3FDB02C1FDE47BCE92068EA21C531F1F6D667DBC (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_horizontalScrollbarLeftButton_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarLeftButton_21), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbarRightButton_mADFCABC3339BE56E2BAD5443789D8D4FBDD73DAC (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbarRightButton_22;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarRightButton_mE5ED9D2BB554FC29F6A69C81B9361A5E6E004CFD (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_horizontalScrollbarRightButton_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarRightButton_22), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbar_m600012E344D3EB4C687E8A4BE78CE33068374D2A (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbar_23;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbar_m4F55D5B66DB408A5009FC00ABBB9AFFA0C65FFEC (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_verticalScrollbar_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbar_23), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbarThumb_m62663C3DDC40AC91FD4666FBF844DCD83DDA7DE6 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbarThumb_24;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarThumb_mECEC0DC79CCD9AABBF6CBA3CE5141C38699B5EC6 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_verticalScrollbarThumb_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarThumb_24), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbarUpButton_m0B5575CA6AFB1C74899BF931296EFC39B2C1A902 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbarUpButton_25;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarUpButton_mF50F99BC770529789363EC9B1C37E610FF8A708C (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_verticalScrollbarUpButton_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarUpButton_25), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbarDownButton_mFC75161EDB03597ECF09E189C8A57F0E64213E3D (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbarDownButton_26;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarDownButton_m37DD0E232BB98BD219494A297DDBE7620104D328 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_verticalScrollbarDownButton_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarDownButton_26), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_scrollView_m5466CD77A4A7E01320DB0E0F57253D41226BB0B8 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_ScrollView_27;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_scrollView_mF2D35906BC020D81F909E65B420494F254E4DC32 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_ScrollView_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollView_27), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* GUISkin_get_customStyles_mAC8A1CFD5756E6C0D367E06B4BDC365E6F6BC39B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* V_0 = NULL;
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_0 = __this->___m_CustomStyles_28;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_customStyles_mD22F50472DDB0A9770B18F0A15D3F73EEEC4A8B2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_0 = ___value0;
		__this->___m_CustomStyles_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CustomStyles_28), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* GUISkin_get_settings_mCBAE5727D7774FAEE47CCC8B4C47AC321DDD85C2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* V_0 = NULL;
	{
		GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* L_0 = __this->___m_Settings_29;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_error_m69E8F0063CDF8B6328EDA2777108CC6E25522F50 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_1 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30), (void*)L_2);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30;
		NullCheck(L_3);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_3, _stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400, NULL);
	}

IL_0029:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30;
		V_1 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_0 = __this->___m_CustomStyles_28;
		V_0 = (bool)((((RuntimeObject*)(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96, NULL);
	}

IL_0019:
	{
		GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CF9CF5853B675491570E9D20951E373F208902);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_box_5;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		__this->___m_box_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_box_5), (void*)L_2);
	}

IL_0019:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = __this->___m_button_6;
		V_1 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_5, NULL);
		__this->___m_button_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_button_6), (void*)L_5);
	}

IL_0031:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = __this->___m_toggle_7;
		V_2 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_8, NULL);
		__this->___m_toggle_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_toggle_7), (void*)L_8);
	}

IL_0049:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = __this->___m_label_8;
		V_3 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_11, NULL);
		__this->___m_label_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_label_8), (void*)L_11);
	}

IL_0061:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = __this->___m_window_11;
		V_4 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_14, NULL);
		__this->___m_window_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_window_11), (void*)L_14);
	}

IL_007b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_15 = __this->___m_textField_9;
		V_5 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0095;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_17 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_17, NULL);
		__this->___m_textField_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textField_9), (void*)L_17);
	}

IL_0095:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_18 = __this->___m_textArea_10;
		V_6 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00af;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_20, NULL);
		__this->___m_textArea_10 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textArea_10), (void*)L_20);
	}

IL_00af:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21 = __this->___m_horizontalSlider_12;
		V_7 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_21) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00c9;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_23 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_23, NULL);
		__this->___m_horizontalSlider_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSlider_12), (void*)L_23);
	}

IL_00c9:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_24 = __this->___m_horizontalSliderThumb_13;
		V_8 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_24) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_26 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_26, NULL);
		__this->___m_horizontalSliderThumb_13 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumb_13), (void*)L_26);
	}

IL_00e3:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_27 = __this->___m_verticalSlider_15;
		V_9 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_27) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_00fd;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_29 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_29, NULL);
		__this->___m_verticalSlider_15 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSlider_15), (void*)L_29);
	}

IL_00fd:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_30 = __this->___m_verticalSliderThumb_16;
		V_10 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_30) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_0117;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_32 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_32, NULL);
		__this->___m_verticalSliderThumb_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumb_16), (void*)L_32);
	}

IL_0117:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_33 = __this->___m_horizontalScrollbar_19;
		V_11 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_33) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0131;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_35 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_35, NULL);
		__this->___m_horizontalScrollbar_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbar_19), (void*)L_35);
	}

IL_0131:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36 = __this->___m_horizontalScrollbarThumb_20;
		V_12 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_36) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_014b;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_38 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_38, NULL);
		__this->___m_horizontalScrollbarThumb_20 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarThumb_20), (void*)L_38);
	}

IL_014b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_39 = __this->___m_horizontalScrollbarLeftButton_21;
		V_13 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_39) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_40 = V_13;
		if (!L_40)
		{
			goto IL_0165;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_41 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_41, NULL);
		__this->___m_horizontalScrollbarLeftButton_21 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarLeftButton_21), (void*)L_41);
	}

IL_0165:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_42 = __this->___m_horizontalScrollbarRightButton_22;
		V_14 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_42) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_017f;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_44 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_44, NULL);
		__this->___m_horizontalScrollbarRightButton_22 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarRightButton_22), (void*)L_44);
	}

IL_017f:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_45 = __this->___m_verticalScrollbar_23;
		V_15 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_45) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_46 = V_15;
		if (!L_46)
		{
			goto IL_0199;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_47 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_47, NULL);
		__this->___m_verticalScrollbar_23 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbar_23), (void*)L_47);
	}

IL_0199:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_48 = __this->___m_verticalScrollbarThumb_24;
		V_16 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_48) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_49 = V_16;
		if (!L_49)
		{
			goto IL_01b3;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_50 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_50, NULL);
		__this->___m_verticalScrollbarThumb_24 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarThumb_24), (void*)L_50);
	}

IL_01b3:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_51 = __this->___m_verticalScrollbarUpButton_25;
		V_17 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_51) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_52 = V_17;
		if (!L_52)
		{
			goto IL_01cd;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_53 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_53, NULL);
		__this->___m_verticalScrollbarUpButton_25 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarUpButton_25), (void*)L_53);
	}

IL_01cd:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_54 = __this->___m_verticalScrollbarDownButton_26;
		V_18 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_54) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_55 = V_18;
		if (!L_55)
		{
			goto IL_01e7;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_56 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_56, NULL);
		__this->___m_verticalScrollbarDownButton_26 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarDownButton_26), (void*)L_56);
	}

IL_01e7:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_57 = __this->___m_ScrollView_27;
		V_19 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_57) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_58 = V_19;
		if (!L_58)
		{
			goto IL_0201;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_59 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_59, NULL);
		__this->___m_ScrollView_27 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollView_27), (void*)L_59);
	}

IL_0201:
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_60;
		L_60 = StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline(NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_61 = (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)il2cpp_codegen_object_new(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9(L_61, L_60, Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9_RuntimeMethod_var);
		__this->___m_Styles_31 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Styles_31), (void*)L_61);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_62 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_63 = __this->___m_box_5;
		NullCheck(L_62);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_62, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, L_63, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_64 = __this->___m_box_5;
		NullCheck(L_64);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_64, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_65 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_66 = __this->___m_button_6;
		NullCheck(L_65);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_65, _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, L_66, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_67 = __this->___m_button_6;
		NullCheck(L_67);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_67, _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_68 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_69 = __this->___m_toggle_7;
		NullCheck(L_68);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_68, _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, L_69, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_70 = __this->___m_toggle_7;
		NullCheck(L_70);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_70, _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_71 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_72 = __this->___m_label_8;
		NullCheck(L_71);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_71, _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE, L_72, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_73 = __this->___m_label_8;
		NullCheck(L_73);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_73, _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_74 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_75 = __this->___m_window_11;
		NullCheck(L_74);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_74, _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, L_75, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_76 = __this->___m_window_11;
		NullCheck(L_76);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_76, _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_77 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_78 = __this->___m_textField_9;
		NullCheck(L_77);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_77, _stringLiteral05CF9CF5853B675491570E9D20951E373F208902, L_78, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_79 = __this->___m_textField_9;
		NullCheck(L_79);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_79, _stringLiteral05CF9CF5853B675491570E9D20951E373F208902, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_80 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_81 = __this->___m_textArea_10;
		NullCheck(L_80);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_80, _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C, L_81, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_82 = __this->___m_textArea_10;
		NullCheck(L_82);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_82, _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_83 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_84 = __this->___m_horizontalSlider_12;
		NullCheck(L_83);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_83, _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF, L_84, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_85 = __this->___m_horizontalSlider_12;
		NullCheck(L_85);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_85, _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_86 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_87 = __this->___m_horizontalSliderThumb_13;
		NullCheck(L_86);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_86, _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1, L_87, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_88 = __this->___m_horizontalSliderThumb_13;
		NullCheck(L_88);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_88, _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_89 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_90 = __this->___m_verticalSlider_15;
		NullCheck(L_89);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_89, _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149, L_90, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_91 = __this->___m_verticalSlider_15;
		NullCheck(L_91);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_91, _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_92 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_93 = __this->___m_verticalSliderThumb_16;
		NullCheck(L_92);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_92, _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5, L_93, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_94 = __this->___m_verticalSliderThumb_16;
		NullCheck(L_94);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_94, _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_95 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_96 = __this->___m_horizontalScrollbar_19;
		NullCheck(L_95);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_95, _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB, L_96, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_97 = __this->___m_horizontalScrollbar_19;
		NullCheck(L_97);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_97, _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_98 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_99 = __this->___m_horizontalScrollbarThumb_20;
		NullCheck(L_98);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_98, _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766, L_99, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_100 = __this->___m_horizontalScrollbarThumb_20;
		NullCheck(L_100);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_100, _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_101 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_102 = __this->___m_horizontalScrollbarLeftButton_21;
		NullCheck(L_101);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_101, _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D, L_102, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_103 = __this->___m_horizontalScrollbarLeftButton_21;
		NullCheck(L_103);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_103, _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_104 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_105 = __this->___m_horizontalScrollbarRightButton_22;
		NullCheck(L_104);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_104, _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722, L_105, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_106 = __this->___m_horizontalScrollbarRightButton_22;
		NullCheck(L_106);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_106, _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_107 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_108 = __this->___m_verticalScrollbar_23;
		NullCheck(L_107);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_107, _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7, L_108, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_109 = __this->___m_verticalScrollbar_23;
		NullCheck(L_109);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_109, _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_110 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_111 = __this->___m_verticalScrollbarThumb_24;
		NullCheck(L_110);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_110, _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3, L_111, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_112 = __this->___m_verticalScrollbarThumb_24;
		NullCheck(L_112);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_112, _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_113 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_114 = __this->___m_verticalScrollbarUpButton_25;
		NullCheck(L_113);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_113, _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E, L_114, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_115 = __this->___m_verticalScrollbarUpButton_25;
		NullCheck(L_115);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_115, _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_116 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_117 = __this->___m_verticalScrollbarDownButton_26;
		NullCheck(L_116);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_116, _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D, L_117, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_118 = __this->___m_verticalScrollbarDownButton_26;
		NullCheck(L_118);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_118, _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_119 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_120 = __this->___m_ScrollView_27;
		NullCheck(L_119);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_119, _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0, L_120, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_121 = __this->___m_ScrollView_27;
		NullCheck(L_121);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_121, _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0, NULL);
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_122 = __this->___m_CustomStyles_28;
		V_20 = (bool)((!(((RuntimeObject*)(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)L_122) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_123 = V_20;
		if (!L_123)
		{
			goto IL_0598;
		}
	}
	{
		V_21 = 0;
		goto IL_0585;
	}

IL_0546:
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_124 = __this->___m_CustomStyles_28;
		int32_t L_125 = V_21;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		V_22 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_127) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_128 = V_22;
		if (!L_128)
		{
			goto IL_055b;
		}
	}
	{
		goto IL_057f;
	}

IL_055b:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_129 = __this->___m_Styles_31;
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_130 = __this->___m_CustomStyles_28;
		int32_t L_131 = V_21;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		String_t* L_134;
		L_134 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(L_133, NULL);
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_135 = __this->___m_CustomStyles_28;
		int32_t L_136 = V_21;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_129);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_129, L_134, L_138, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
	}

IL_057f:
	{
		int32_t L_139 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_0585:
	{
		int32_t L_140 = V_21;
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_141 = __this->___m_CustomStyles_28;
		NullCheck(L_141);
		V_23 = (bool)((((int32_t)L_140) < ((int32_t)((int32_t)(((RuntimeArray*)L_141)->max_length))))? 1 : 0);
		bool L_142 = V_23;
		if (L_142)
		{
			goto IL_0546;
		}
	}
	{
	}

IL_0598:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_143 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** L_144 = (&__this->___m_horizontalSliderThumbExtent_14);
		NullCheck(L_143);
		bool L_145;
		L_145 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_143, _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C, L_144, Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_145) == ((int32_t)0))? 1 : 0);
		bool L_146 = V_24;
		if (!L_146)
		{
			goto IL_05ec;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_147 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_147, NULL);
		__this->___m_horizontalSliderThumbExtent_14 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumbExtent_14), (void*)L_147);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_148 = __this->___m_horizontalSliderThumbExtent_14;
		NullCheck(L_148);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_148, _stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_149 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_150 = __this->___m_horizontalSliderThumbExtent_14;
		NullCheck(L_149);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_149, _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C, L_150, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
	}

IL_05ec:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_151 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** L_152 = (&__this->___m_SliderMixed_18);
		NullCheck(L_151);
		bool L_153;
		L_153 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_151, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, L_152, Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_25 = (bool)((((int32_t)L_153) == ((int32_t)0))? 1 : 0);
		bool L_154 = V_25;
		if (!L_154)
		{
			goto IL_0640;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_155 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_155);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_155, NULL);
		__this->___m_SliderMixed_18 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SliderMixed_18), (void*)L_155);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_156 = __this->___m_SliderMixed_18;
		NullCheck(L_156);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_156, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_157 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_158 = __this->___m_SliderMixed_18;
		NullCheck(L_157);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_157, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, L_158, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
	}

IL_0640:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_159 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** L_160 = (&__this->___m_verticalSliderThumbExtent_17);
		NullCheck(L_159);
		bool L_161;
		L_161 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_159, _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2, L_160, Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_26 = (bool)((((int32_t)L_161) == ((int32_t)0))? 1 : 0);
		bool L_162 = V_26;
		if (!L_162)
		{
			goto IL_0694;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_163 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_163);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_163, NULL);
		__this->___m_verticalSliderThumbExtent_17 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumbExtent_17), (void*)L_163);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_164 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_165 = __this->___m_verticalSliderThumbExtent_17;
		NullCheck(L_164);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_164, _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2, L_165, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_166 = __this->___m_verticalSliderThumbExtent_17;
		NullCheck(L_166);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_166, _stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947, NULL);
	}

IL_0694:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_167;
		L_167 = GUISkin_get_error_m69E8F0063CDF8B6328EDA2777108CC6E25522F50(NULL);
		NullCheck(L_167);
		GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378(L_167, (bool)1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_168;
		L_168 = GUISkin_get_error_m69E8F0063CDF8B6328EDA2777108CC6E25522F50(NULL);
		NullCheck(L_168);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_169;
		L_169 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_168, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_170;
		L_170 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_169);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_169, L_170, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_GetStyle_mF024BC5177A2AD477ACF44D87BE6A629C91562CA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___styleName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	bool V_1 = false;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	{
		String_t* L_0 = ___styleName0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUISkin_FindStyle_mF82C37E2481D2B9E96C26EFE0353F8954F844FFE(__this, L_0, NULL);
		V_0 = L_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = V_0;
		V_2 = L_4;
		goto IL_007c;
	}

IL_0015:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___styleName0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_14;
		L_14 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
		G_B3_0 = 5;
		G_B3_1 = L_13;
		G_B3_2 = L_13;
		if (L_14)
		{
			G_B4_0 = 5;
			G_B4_1 = L_13;
			G_B4_2 = L_13;
			goto IL_0050;
		}
	}
	{
		G_B5_0 = _stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0068;
	}

IL_0050:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_15;
		L_15 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_15, NULL);
		V_3 = L_16;
		Il2CppFakeBox<int32_t> L_17(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_18;
		L_18 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_17), NULL);
		G_B5_0 = L_18;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0068:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		String_t* L_19;
		L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B5_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_19, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20;
		L_20 = GUISkin_get_error_m69E8F0063CDF8B6328EDA2777108CC6E25522F50(NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_007c:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21 = V_2;
		return L_21;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_FindStyle_mF82C37E2481D2B9E96C26EFE0353F8954F844FFE (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___styleName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_3 = NULL;
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_0 = __this->___m_Styles_31;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1(__this, NULL);
	}

IL_0015:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_2 = __this->___m_Styles_31;
		String_t* L_3 = ___styleName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = V_0;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002b:
	{
		V_3 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)NULL;
		goto IL_002f;
	}

IL_002f:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_mDB3BB1FBA5BD2FEDDA3F32F11170F47A6444AEED (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33), (void*)__this);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0;
		L_0 = GUISkin_get_font_m806CF702C59E43DF55BA441030A60F80E9D8CFD5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m76616AC968865181F388F0FB44D5E0815CEF83B1(L_0, NULL);
		SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* L_1 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___m_SkinChanged_32;
		V_0 = (bool)((!(((RuntimeObject*)(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* L_3 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___m_SkinChanged_32;
		NullCheck(L_3);
		SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_inline(L_3, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUISkin_GetEnumerator_mEC308E2DA9A94E09C622D13F82EB7ECCECF8AFF0 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_0 = __this->___m_Styles_31;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1(__this, NULL);
	}

IL_0015:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_2 = __this->___m_Styles_31;
		NullCheck(L_2);
		ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* L_3;
		L_3 = Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2(L_2, Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2_RuntimeMethod_var);
		NullCheck(L_3);
		Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 L_4;
		L_4 = ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197(L_3, ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197_RuntimeMethod_var);
		Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 L_5 = L_4;
		RuntimeObject* L_6 = Box(Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9_il2cpp_TypeInfo_var, &L_5);
		V_1 = (RuntimeObject*)L_6;
		goto IL_002d;
	}

IL_002d:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_Multicast(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* currentDelegate = reinterpret_cast<SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_Open(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_OpenStaticInvoker(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_ClosedStaticInvoker(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98 (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate__ctor_m20D33B3868351B98B708468F7A8192C1ACF85CD1 (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_Multicast;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184(__this, (&___value0), NULL);
		return;
	}
}
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m3BCCA4502E15D65D2F3C9A434E57A2ACCF208092 (const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyleState_Init_m3BCCA4502E15D65D2F3C9A434E57A2ACCF208092_ftn) ();
	static GUIStyleState_Init_m3BCCA4502E15D65D2F3C9A434E57A2ACCF208092_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m3BCCA4502E15D65D2F3C9A434E57A2ACCF208092_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*);
	static GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mD47FE21F7FD8D786F7E8E4E8C3DCA224F9237AD7 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = GUIStyleState_Init_m3BCCA4502E15D65D2F3C9A434E57A2ACCF208092(NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___sourceStyle0;
		__this->___m_SourceStyle_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SourceStyle_1), (void*)L_0);
		intptr_t L_1 = ___source1;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0ED2147E2F26704F88BF3D98A4DFC8C64567B981 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___sourceStyle0;
		intptr_t L_1 = ___source1;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_2 = (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*)il2cpp_codegen_object_new(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3 = V_0;
		V_1 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Finalize_m5CC6FBD8C44AF1091CACD6F7032E73B1114765B2 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_SourceStyle_1;
				V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_1 = V_0;
				if (!L_1)
				{
					goto IL_0023_1;
				}
			}
			{
				GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826(__this, NULL);
				__this->___m_Ptr_0 = (0);
			}

IL_0023_1:
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
}
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
}
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_rawName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, String_t*);
	static GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_rawName(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m81BF5D1D82E6910871CFFCD95553F9EB5B1497C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_Internal_Create_m81BF5D1D82E6910871CFFCD95553F9EB5B1497C2_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_Internal_Create_m81BF5D1D82E6910871CFFCD95553F9EB5B1497C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Create_m81BF5D1D82E6910871CFFCD95553F9EB5B1497C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_m23FFE736C61746CB9AB7CED66526B23221C0D3D3 (intptr_t ___self0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Destroy_m23FFE736C61746CB9AB7CED66526B23221C0D3D3_ftn) (intptr_t);
	static GUIStyle_Internal_Destroy_m23FFE736C61746CB9AB7CED66526B23221C0D3D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Destroy_m23FFE736C61746CB9AB7CED66526B23221C0D3D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___idx0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___idx0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_m76616AC968865181F388F0FB44D5E0815CEF83B1 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_SetDefaultFont_m76616AC968865181F388F0FB44D5E0815CEF83B1_ftn) (Font_tC95270EA3198038970422D78B74A7F2E218A96B6*);
	static GUIStyle_SetDefaultFont_m76616AC968865181F388F0FB44D5E0815CEF83B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m76616AC968865181F388F0FB44D5E0815CEF83B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font0);
}
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = GUIStyle_Internal_Create_m81BF5D1D82E6910871CFFCD95553F9EB5B1497C2(__this, NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Finalize_mFF6A6FBA538B711A6ED369DD83A41F25DE6EEE85 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				intptr_t L_0 = __this->___m_Ptr_0;
				bool L_1;
				L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
				V_0 = L_1;
				bool L_2 = V_0;
				if (!L_2)
				{
					goto IL_002f_1;
				}
			}
			{
				intptr_t L_3 = __this->___m_Ptr_0;
				il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
				GUIStyle_Internal_Destroy_m23FFE736C61746CB9AB7CED66526B23221C0D3D3(L_3, NULL);
				__this->___m_Ptr_0 = (0);
			}

IL_002f_1:
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_13;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
	}
	{
		String_t* L_2;
		L_2 = GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782(__this, NULL);
		String_t* L_3 = L_2;
		V_0 = L_3;
		__this->___m_Name_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_3);
		String_t* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001a:
	{
		V_1 = G_B2_0;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_Name_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_0);
		String_t* L_1 = ___value0;
		GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6(__this, L_1, NULL);
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B2_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B1_0 = NULL;
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_0 = __this->___m_Normal_1;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB(__this, 0, NULL);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3;
		L_3 = GUIStyleState_GetGUIStyleState_m0ED2147E2F26704F88BF3D98A4DFC8C64567B981(__this, L_2, NULL);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Normal_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Normal_1), (void*)L_4);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Margin_11;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 1, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Margin_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Margin_11), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Padding_10;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Padding_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Padding_10), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B2_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_ToString_m41A8A58B4D9659047D06EF2A5AE5F170AE198ACF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		String_t* L_3;
		L_3 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887, L_1, NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__cctor_m58046FEBE2AB5A7B96F73F0B4AE602696C380FE1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___showKeyboardFocus_14 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.GUITargetAttribute::GetGUITargetAttrValue(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUITargetAttribute_GetGUITargetAttrValue_m074EE7869B1AF105C87E7DD70741AB2BC04AFDE5 (Type_t* ___klass0, String_t* ___methodName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		Type_t* L_0 = ___klass0;
		String_t* L_1 = ___methodName1;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_0, L_1, ((int32_t)52), NULL);
		V_0 = L_2;
		MethodInfo_t* L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		MethodInfo_t* L_5 = V_0;
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, (bool)1);
		V_2 = L_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		V_4 = 0;
		goto IL_0067;
	}

IL_002a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_2;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_13) == ((RuntimeObject*)(Type_t*)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0061;
	}

IL_004b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_2;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = ((GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B*)IsInstClass((RuntimeObject*)L_20, GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B_il2cpp_TypeInfo_var));
		GUITargetAttribute_t3F08CE7E00D79CB555B94AA7FA1BCB4B144B922B* L_21 = V_5;
		NullCheck(L_21);
		int32_t L_22 = L_21->___displayMask_0;
		V_7 = L_22;
		goto IL_007b;
	}

IL_0061:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0067:
	{
		int32_t L_24 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_2;
		NullCheck(L_25);
		V_8 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_002a;
		}
	}
	{
	}

IL_0075:
	{
	}

IL_0076:
	{
		V_7 = (-1);
		goto IL_007b;
	}

IL_007b:
	{
		int32_t L_27 = V_7;
		return L_27;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6 (const RuntimeMethod* method) 
{
	typedef float (*GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6_ftn) ();
	static GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_pixelsPerPoint_m69E7E0F71FC1A55332E5808688DBF49CB8F9F5E6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_pixelsPerPoint()");
	float icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.GUIUtility::get_guiDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_guiDepth_mA3E2729C87F5C320201C92F30282EED0ACDE70E4 (const RuntimeMethod* method) 
{
	typedef int32_t (*GUIUtility_get_guiDepth_mA3E2729C87F5C320201C92F30282EED0ACDE70E4_ftn) ();
	static GUIUtility_get_guiDepth_mA3E2729C87F5C320201C92F30282EED0ACDE70E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_guiDepth_mA3E2729C87F5C320201C92F30282EED0ACDE70E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_guiDepth()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIUtility_Internal_GetDefaultSkin_m11DF823D5E9F7A5489B53682204A810E0DE09993 (int32_t ___skinMode0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*GUIUtility_Internal_GetDefaultSkin_m11DF823D5E9F7A5489B53682204A810E0DE09993_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m11DF823D5E9F7A5489B53682204A810E0DE09993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m11DF823D5E9F7A5489B53682204A810E0DE09993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	RuntimeObject* icallRetVal = _il2cpp_icall_func(___skinMode0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_Internal_ExitGUI_mECB6422EF61E57B7FAB562E2230FC768C5FE0A3E (const RuntimeMethod* method) 
{
	typedef void (*GUIUtility_Internal_ExitGUI_mECB6422EF61E57B7FAB562E2230FC768C5FE0A3E_ftn) ();
	static GUIUtility_Internal_ExitGUI_mECB6422EF61E57B7FAB562E2230FC768C5FE0A3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_mECB6422EF61E57B7FAB562E2230FC768C5FE0A3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::MarkGUIChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_MarkGUIChanged_m8E25E96B6FDCC422A6A459ECF12F9A8DC25942E2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___guiChanged_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m7C3F78880FDC727F7A3837271C9BBBE12A35FEDA (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___U3CguiIsExitingU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIUtility::TakeCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_TakeCapture_m3727B8783DB864C8E21851C96A95D59151417FBD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___takeCapture_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::RemoveCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_RemoveCapture_m3F6705B85361330CDB052FA1D065DB65AB06F96B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___releaseCapture_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUIUtility_GetDefaultSkin_mC4A265D6EC82A49B0FE4C4D30362667FC7414BB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* V_0 = NULL;
	{
		int32_t L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_SkinMode_0;
		RuntimeObject* L_1;
		L_1 = GUIUtility_Internal_GetDefaultSkin_m11DF823D5E9F7A5489B53682204A810E0DE09993(L_0, NULL);
		V_0 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)IsInstSealed((RuntimeObject*)L_1, GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var));
		goto IL_0013;
	}

IL_0013:
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::ProcessEvent(System.Int32,System.IntPtr,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ProcessEvent_m0FF5CF5496797F4B45357858D1E326D2E9A3A66D (int32_t ___instanceID0, intptr_t ___nativeEventPtr1, bool* ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool* L_0 = ___result2;
		*((int8_t*)L_0) = (int8_t)0;
		Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* L_1 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___processEvent_4;
		V_0 = (bool)((!(((RuntimeObject*)(Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool* L_3 = ___result2;
		Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* L_4 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___processEvent_4;
		int32_t L_5 = ___instanceID0;
		intptr_t L_6 = ___nativeEventPtr1;
		NullCheck(L_4);
		bool L_7;
		L_7 = Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_inline(L_4, L_5, L_6, NULL);
		*((int8_t*)L_3) = (int8_t)L_7;
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_BeginGUI_m378B869E8577DEF80FF6DCE6B9F2CA8EAC7A10CF (int32_t ___skinMode0, int32_t ___instanceID1, int32_t ___useGUILayout2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___skinMode0;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_SkinMode_0 = L_0;
		int32_t L_1 = ___instanceID1;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_OriginalID_1 = L_1;
		GUIUtility_ResetGlobalState_m998891FCDC9CE044E47A93B49A626E76A14C4110(NULL);
		int32_t L_2 = ___useGUILayout2;
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___instanceID1;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		GUILayoutUtility_Begin_m66550604CCE0B0FEDE5ABDD5663B05DF66D888E0(L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_EndGUI_m633ACE2FC84C52D859BA11F89BFBC1490843502F (int32_t ___layoutType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				GUIUtility_Internal_ExitGUI_mECB6422EF61E57B7FAB562E2230FC768C5FE0A3E(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
				L_0 = Event_get_current_m095DA2D6A43F4E0C0DDBD05B8127DC5FC8093E6B(NULL);
				NullCheck(L_0);
				int32_t L_1;
				L_1 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_0, NULL);
				V_0 = (bool)((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
				bool L_2 = V_0;
				if (!L_2)
				{
					goto IL_003f_1;
				}
			}
			{
				int32_t L_3 = ___layoutType0;
				V_2 = L_3;
				int32_t L_4 = V_2;
				V_1 = L_4;
				int32_t L_5 = V_1;
				switch (L_5)
				{
					case 0:
					{
						goto IL_002c_1;
					}
					case 1:
					{
						goto IL_002e_1;
					}
					case 2:
					{
						goto IL_0036_1;
					}
				}
			}
			{
				goto IL_003e_1;
			}

IL_002c_1:
			{
				goto IL_003e_1;
			}

IL_002e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				GUILayoutUtility_Layout_m6F689A1EB6D4CA82AF2D8010778554A028871AE7(NULL);
				goto IL_003e_1;
			}

IL_0036_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				GUILayoutUtility_LayoutFromEditorWindow_mBF183BB524E0B07D818AFA456F4BC9B74112B101(NULL);
				goto IL_003e_1;
			}

IL_003e_1:
			{
			}

IL_003f_1:
			{
				int32_t L_6 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___s_OriginalID_1;
				il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
				LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* L_7;
				L_7 = GUILayoutUtility_SelectIDList_mB7FB0ADC8613FE86C8B30C7758C81EE8E4CCEAEC(L_6, (bool)0, NULL);
				il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
				GUIContent_ClearStaticCache_mAE3CC107457F9F8FB9782DF1A7CD00507D9A7362(NULL);
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_EndGUIFromException_mC399153DD4EE03EBE30EE0ECADEA085C5E9A72C8 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		GUIUtility_Internal_ExitGUI_mECB6422EF61E57B7FAB562E2230FC768C5FE0A3E(NULL);
		Exception_t* L_0 = ___exception0;
		bool L_1;
		L_1 = GUIUtility_ShouldRethrowException_mB2C343BC22F5A80934D6CADE2645AA7655F898C5(L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndContainerGUIFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_EndContainerGUIFromException_m3850FCE28D8C05F5483CA00A091B23AC1940AB0C (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* L_0 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___endContainerGUIFromException_5;
		V_0 = (bool)((!(((RuntimeObject*)(Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* L_2 = ((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___endContainerGUIFromException_5;
		Exception_t* L_3 = ___exception0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Func_2_Invoke_m215465BB041E8F2AE1E7AD0988951D160D8F8324_inline(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_001f;
	}

IL_001b:
	{
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIUtility::ResetGlobalState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ResetGlobalState_m998891FCDC9CE044E47A93B49A626E76A14C4110 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mA5C192FA26B27648E37945E0DA7A679C09E88BAB((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)NULL, NULL);
		GUIUtility_set_guiIsExiting_m7C3F78880FDC727F7A3837271C9BBBE12A35FEDA_inline((bool)0, NULL);
		GUI_set_changed_mD5313BD975A7843C9CCEF44FA49E5BE201870AA0((bool)0, NULL);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_0;
		L_0 = GUI_get_scrollViewStates_mC465E2368BB8F5741830D2831F78DF7027759694_inline(NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Collections.Stack::Clear() */, L_0);
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::IsExitGUIException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_IsExitGUIException_mDE98B1B261D96A3A97FC2AF8C01F9869D471BDFB (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		goto IL_000b;
	}

IL_0003:
	{
		Exception_t* L_0 = ___exception0;
		NullCheck(L_0);
		Exception_t* L_1;
		L_1 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_0, NULL);
		___exception0 = L_1;
	}

IL_000b:
	{
		Exception_t* L_2 = ___exception0;
		if (!((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IsInstSealed((RuntimeObject*)L_2, TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		Exception_t* L_3 = ___exception0;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_3, NULL);
		G_B5_0 = ((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B5_0;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0003;
		}
	}
	{
		Exception_t* L_6 = ___exception0;
		V_1 = (bool)((!(((RuntimeObject*)(ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549*)((ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549*)IsInstSealed((RuntimeObject*)L_6, ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_ShouldRethrowException_mB2C343BC22F5A80934D6CADE2645AA7655F898C5 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Exception_t* L_0 = ___exception0;
		bool L_1;
		L_1 = GUIUtility_IsExitGUIException_mDE98B1B261D96A3A97FC2AF8C01F9869D471BDFB(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_CheckOnGUI_m96F9DAAD5B8B3000EEA28C4A437B5C292F71D245 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = GUIUtility_get_guiDepth_mA3E2729C87F5C320201C92F30282EED0ACDE70E4(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E5BD769C75B1966931F7A0F059B152FE79C2619)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GUIUtility_CheckOnGUI_m96F9DAAD5B8B3000EEA28C4A437B5C292F71D245_RuntimeMethod_var)));
	}

IL_001b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_Style_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___value0, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___value0;
		__this->___m_Style_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Style_8), (void*)L_0);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = ___value0;
		VirtualActionInvoker1< GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* >::Invoke(12 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginLeft_m3B362DA8241B4008C2A6CDA693295A609F765221 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginRight_m032808DC8C04B31150407F3F61E71865C2636D7F (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginTop_m47BAB82D31A45E21F9AAB8229265788C0D19487C (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginBottom_m2BCCF0FC72E0230E155E7A26BA9FFD904AD4C221 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, __this);
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, __this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____style4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		__this->___consideredForMargin_7 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		__this->___m_Style_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Style_8), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		float L_2 = ____minWidth0;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth1;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight2;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight3;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ____style4;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		____style4 = L_8;
	}

IL_0066:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = ____style4;
		GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A(__this, L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcWidth_m77BB8C0413A27303E4E61CB53586FD4A825C5EF3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcHeight_m295D607AB2FDD78D7C665BB3FB3A495E2E8CC0A6 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m268577E88A2AE5870C14EFDA9CB88C94CAC2ACE9 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___x0, float ___width1, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___rect_4);
		float L_1 = ___x0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_0, L_1, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2 = (&__this->___rect_4);
		float L_3 = ___width1;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mA20893626441C55001C1940C53A6A100DD22D61F (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___y0, float ___height1, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___rect_4);
		float L_1 = ___y0;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_0, L_1, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2 = (&__this->___rect_4);
		float L_3 = ___height1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m2D3679DAF547D104FE48E7D6D8E27B639F6A666B (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, const RuntimeMethod* method) 
{
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B2_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B1_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B4_1 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B6_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B5_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B7_0 = NULL;
	int32_t G_B8_0 = 0;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B8_1 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___style0;
		NullCheck(L_0);
		float L_1;
		L_1 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_0, NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = ___style0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37(L_2, NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0017:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001b:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = ___style0;
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_4, NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B6_0 = __this;
			goto IL_0036;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ___style0;
		NullCheck(L_6);
		bool L_7;
		L_7 = GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F(L_6, NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0039;
		}
	}

IL_0036:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003a:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = ___style0;
		__this->___m_Style_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Style_8), (void*)L_8);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_mF024E6CEAAD97888AE293810E01F8431D79456A3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* V_1 = NULL;
	int32_t V_2 = 0;
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = ___options0;
		V_0 = (bool)((((RuntimeObject*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0219;
	}

IL_000e:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2 = ___options0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_01b0;
	}

IL_0018:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = L_7->___type_0;
		V_5 = L_8;
		int32_t L_9 = V_5;
		V_4 = L_9;
		int32_t L_10 = V_4;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_00a5;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_0118;
			}
			case 5:
			{
				goto IL_014b;
			}
			case 6:
			{
				goto IL_0185;
			}
			case 7:
			{
				goto IL_0198;
			}
		}
	}
	{
		goto IL_01ab;
	}

IL_0055:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_11 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___value_1;
		float L_13 = ((*(float*)((float*)(float*)UnBox(L_12, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		V_6 = L_13;
		__this->___maxWidth_1 = L_13;
		float L_14 = V_6;
		__this->___minWidth_0 = L_14;
		__this->___stretchWidth_5 = 0;
		goto IL_01ab;
	}

IL_007d:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___value_1;
		float L_17 = ((*(float*)((float*)(float*)UnBox(L_16, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		V_6 = L_17;
		__this->___maxHeight_3 = L_17;
		float L_18 = V_6;
		__this->___minHeight_2 = L_18;
		__this->___stretchHeight_6 = 0;
		goto IL_01ab;
	}

IL_00a5:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_19 = V_3;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___value_1;
		__this->___minWidth_0 = ((*(float*)((float*)(float*)UnBox(L_20, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_21 = __this->___maxWidth_1;
		float L_22 = __this->___minWidth_0;
		V_7 = (bool)((((float)L_21) < ((float)L_22))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		float L_24 = __this->___minWidth_0;
		__this->___maxWidth_1 = L_24;
	}

IL_00d6:
	{
		goto IL_01ab;
	}

IL_00db:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_25 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_26 = L_25->___value_1;
		__this->___maxWidth_1 = ((*(float*)((float*)(float*)UnBox(L_26, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_27 = __this->___minWidth_0;
		float L_28 = __this->___maxWidth_1;
		V_8 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		float L_30 = __this->___maxWidth_1;
		__this->___minWidth_0 = L_30;
	}

IL_010c:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_01ab;
	}

IL_0118:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_31 = V_3;
		NullCheck(L_31);
		RuntimeObject* L_32 = L_31->___value_1;
		__this->___minHeight_2 = ((*(float*)((float*)(float*)UnBox(L_32, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_33 = __this->___maxHeight_3;
		float L_34 = __this->___minHeight_2;
		V_9 = (bool)((((float)L_33) < ((float)L_34))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_0149;
		}
	}
	{
		float L_36 = __this->___minHeight_2;
		__this->___maxHeight_3 = L_36;
	}

IL_0149:
	{
		goto IL_01ab;
	}

IL_014b:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_37 = V_3;
		NullCheck(L_37);
		RuntimeObject* L_38 = L_37->___value_1;
		__this->___maxHeight_3 = ((*(float*)((float*)(float*)UnBox(L_38, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_39 = __this->___minHeight_2;
		float L_40 = __this->___maxHeight_3;
		V_10 = (bool)((((float)L_39) > ((float)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_017c;
		}
	}
	{
		float L_42 = __this->___maxHeight_3;
		__this->___minHeight_2 = L_42;
	}

IL_017c:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_01ab;
	}

IL_0185:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_43 = V_3;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___value_1;
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_44, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01ab;
	}

IL_0198:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_45 = V_3;
		NullCheck(L_45);
		RuntimeObject* L_46 = L_45->___value_1;
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_46, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01ab;
	}

IL_01ab:
	{
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_01b0:
	{
		int32_t L_48 = V_2;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_49 = V_1;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		float L_50 = __this->___maxWidth_1;
		if ((((float)L_50) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_51 = __this->___maxWidth_1;
		float L_52 = __this->___minWidth_0;
		G_B26_0 = ((((float)L_51) < ((float)L_52))? 1 : 0);
		goto IL_01d7;
	}

IL_01d6:
	{
		G_B26_0 = 0;
	}

IL_01d7:
	{
		V_11 = (bool)G_B26_0;
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_01e9;
		}
	}
	{
		float L_54 = __this->___minWidth_0;
		__this->___maxWidth_1 = L_54;
	}

IL_01e9:
	{
		float L_55 = __this->___maxHeight_3;
		if ((((float)L_55) == ((float)(0.0f))))
		{
			goto IL_0206;
		}
	}
	{
		float L_56 = __this->___maxHeight_3;
		float L_57 = __this->___minHeight_2;
		G_B31_0 = ((((float)L_56) < ((float)L_57))? 1 : 0);
		goto IL_0207;
	}

IL_0206:
	{
		G_B31_0 = 0;
	}

IL_0207:
	{
		V_12 = (bool)G_B31_0;
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0219;
		}
	}
	{
		float L_59 = __this->___minHeight_2;
		__this->___maxHeight_3 = L_59;
	}

IL_0219:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_mD3785AC5958EB56ECA6E5D325D166C5F5725E615 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B5_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_6 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B4_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_6 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B6_5 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_6 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_7 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		String_t* L_0 = V_0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_1;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_001b:
	{
		int32_t L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_000b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		G_B4_0 = 0;
		G_B4_1 = L_11;
		G_B4_2 = L_11;
		G_B4_3 = _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
		G_B4_4 = 1;
		G_B4_5 = L_9;
		G_B4_6 = L_9;
		if (L_12)
		{
			G_B5_0 = 0;
			G_B5_1 = L_11;
			G_B5_2 = L_11;
			G_B5_3 = _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
			G_B5_4 = 1;
			G_B5_5 = L_9;
			G_B5_6 = L_9;
			goto IL_0050;
		}
	}
	{
		G_B6_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_005b;
	}

IL_0050:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_13;
		L_13 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(L_13, NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_005b:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = G_B6_3;
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&__this->___rect_4);
		float L_19;
		L_19 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_18, NULL);
		float L_20 = L_19;
		RuntimeObject* L_21 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_17;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_23 = (&__this->___rect_4);
		float L_24;
		L_24 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_23, NULL);
		float L_25 = L_24;
		RuntimeObject* L_26 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_22;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_28 = (&__this->___rect_4);
		float L_29;
		L_29 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_28, NULL);
		float L_30 = L_29;
		RuntimeObject* L_31 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_27;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_33 = (&__this->___rect_4);
		float L_34;
		L_34 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_33, NULL);
		float L_35 = L_34;
		RuntimeObject* L_36 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_36);
		String_t* L_37;
		L_37 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(G_B6_4, L_32, NULL);
		NullCheck(G_B6_6);
		ArrayElementTypeCheck (G_B6_6, L_37);
		(G_B6_6)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_5), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = G_B6_7;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		float* L_40 = (&__this->___minWidth_0);
		String_t* L_41;
		L_41 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_40, NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_39;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		float* L_44 = (&__this->___maxWidth_1);
		String_t* L_45;
		L_45 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_43;
		int32_t L_47 = __this->___stretchWidth_5;
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_00f4;
		}
	}
	{
		G_B9_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00f9;
	}

IL_00f4:
	{
		G_B9_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00f9:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = G_B9_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		float* L_50 = (&__this->___minHeight_2);
		String_t* L_51;
		L_51 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_50, NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_51);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_49;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		float* L_54 = (&__this->___maxHeight_3);
		String_t* L_55;
		L_55 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_54, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_53;
		int32_t L_57 = __this->___stretchHeight_6;
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_56;
		G_B10_2 = L_56;
		if (L_57)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_56;
			G_B11_2 = L_56;
			goto IL_013a;
		}
	}
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_013f;
	}

IL_013a:
	{
		G_B12_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_013f:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		String_t* L_58;
		L_58 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B12_3, NULL);
		V_3 = L_58;
		goto IL_0148;
	}

IL_0148:
	{
		String_t* L_59 = V_3;
		return L_59;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__cctor_m24D59B2CAB40D5F448D4340BD5BD3D5385EBDBF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___kDummyRect_9 = L_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.GUILayoutGroup::get_marginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginLeft_m343D82AA90154850B9B2A97B9E471D5235761EB3 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginLeft_27;
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginRight_m2710F9CCC1B6D67BC4F9D9487B082B7E143757D0 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginRight_28;
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginTop_mA61C984665E93EE9E8670753AF919208528C4F87 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginTop_29;
		return L_0;
	}
}
// System.Int32 UnityEngine.GUILayoutGroup::get_marginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutGroup_get_marginBottom_m1EC579493343750FB013A6F01AD84DFEC8D489BD (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_MarginBottom_30;
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_0 = (List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82*)il2cpp_codegen_object_new(List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72(L_0, List_1__ctor_m685E773E1D777772A2633097DD151A2A9E640D72_RuntimeMethod_var);
		__this->___entries_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entries_11), (void*)L_0);
		__this->___isVertical_12 = (bool)1;
		__this->___resetCoords_13 = (bool)0;
		__this->___spacing_14 = (0.0f);
		__this->___sameSize_15 = (bool)1;
		__this->___isWindow_16 = (bool)0;
		__this->___windowID_17 = (-1);
		__this->___m_Cursor_18 = 0;
		__this->___m_StretchableCountX_19 = ((int32_t)100);
		__this->___m_StretchableCountY_20 = ((int32_t)100);
		__this->___m_UserSpecifiedWidth_21 = (bool)0;
		__this->___m_UserSpecifiedHeight_22 = (bool)0;
		__this->___m_ChildMinWidth_23 = (100.0f);
		__this->___m_ChildMaxWidth_24 = (100.0f);
		__this->___m_ChildMinHeight_25 = (100.0f);
		__this->___m_ChildMaxHeight_26 = (100.0f);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyOptions_mD4C0BFAC7A90FB32BC6DC99ECA3EEA6C1C9396D2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* V_1 = NULL;
	int32_t V_2 = 0;
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = ___options0;
		V_0 = (bool)((((RuntimeObject*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0085;
	}

IL_000b:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2 = ___options0;
		GUILayoutEntry_ApplyOptions_mF024E6CEAAD97888AE293810E01F8431D79456A3(__this, L_2, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3 = ___options0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_007f;
	}

IL_001a:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9 = L_8->___type_0;
		V_5 = L_9;
		int32_t L_10 = V_5;
		V_4 = L_10;
		int32_t L_11 = V_4;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0054;
			}
			case 4:
			{
				goto IL_005d;
			}
			case 5:
			{
				goto IL_005d;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_004c:
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)13))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_007a;
	}

IL_0054:
	{
		__this->___m_UserSpecifiedHeight_22 = (bool)1;
		goto IL_007a;
	}

IL_005d:
	{
		__this->___m_UserSpecifiedWidth_21 = (bool)1;
		goto IL_007a;
	}

IL_0066:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_13 = V_3;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___value_1;
		__this->___spacing_14 = ((float)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_14, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))));
		goto IL_007a;
	}

IL_007a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_007f:
	{
		int32_t L_16 = V_2;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_001a;
		}
	}

IL_0085:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ApplyStyleSettings_m5A88CB0FC11FE81405684C3EFF7EF7DA974D2649 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, const RuntimeMethod* method) 
{
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___style0;
		GUILayoutEntry_ApplyStyleSettings_m2D3679DAF547D104FE48E7D6D8E27B639F6A666B(__this, L_0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = ___style0;
		NullCheck(L_1);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_2;
		L_2 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_1, NULL);
		V_0 = L_2;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_3, NULL);
		__this->___m_MarginLeft_27 = L_4;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_5, NULL);
		__this->___m_MarginRight_28 = L_6;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_7, NULL);
		__this->___m_MarginTop_29 = L_8;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_9, NULL);
		__this->___m_MarginBottom_30 = L_10;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_ResetCursor_m58C36F1ABC54BE5EFC16D512318BED9EB8918127 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Cursor_18 = 0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_8;
	memset((&V_8), 0, sizeof(V_8));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_13;
	memset((&V_13), 0, sizeof(V_13));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_14 = NULL;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B22_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B43_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B43_2 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B42_2 = NULL;
	int32_t G_B44_0 = 0;
	int32_t G_B44_1 = 0;
	int32_t G_B44_2 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B44_3 = NULL;
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_0 = __this->___entries_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_0, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3;
		L_3 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_3);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4;
		L_4 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352(L_4, NULL);
		float L_6 = ((float)L_5);
		V_6 = L_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_6;
		float L_7 = V_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_7;
		goto IL_043a;
	}

IL_003d:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinWidth_23 = (0.0f);
		__this->___m_ChildMaxWidth_24 = (0.0f);
		__this->___m_StretchableCountX_19 = 0;
		V_2 = (bool)1;
		bool L_8 = __this->___isVertical_12;
		V_7 = L_8;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_0181;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_10 = __this->___entries_11;
		NullCheck(L_10);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_11;
		L_11 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_10, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_8 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_8), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_013c_1;
			}

IL_0083_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_12;
				L_12 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_8), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_9 = L_12;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_13 = V_9;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_13);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_14 = V_9;
				NullCheck(L_14);
				bool L_15 = L_14->___consideredForMargin_7;
				V_10 = L_15;
				bool L_16 = V_10;
				if (!L_16)
				{
					goto IL_0127_1;
				}
			}
			{
				bool L_17 = V_2;
				V_11 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_11;
				if (!L_18)
				{
					goto IL_00d0_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_19 = V_9;
				NullCheck(L_19);
				int32_t L_20;
				L_20 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_19);
				int32_t L_21 = V_0;
				int32_t L_22;
				L_22 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_20, L_21, NULL);
				V_0 = L_22;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_23 = V_9;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_23);
				int32_t L_25 = V_1;
				int32_t L_26;
				L_26 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_24, L_25, NULL);
				V_1 = L_26;
				goto IL_00e4_1;
			}

IL_00d0_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_27 = V_9;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_27);
				V_0 = L_28;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_29 = V_9;
				NullCheck(L_29);
				int32_t L_30;
				L_30 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_29);
				V_1 = L_30;
				V_2 = (bool)0;
			}

IL_00e4_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_31 = V_9;
				NullCheck(L_31);
				float L_32 = L_31->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_33 = V_9;
				NullCheck(L_33);
				int32_t L_34;
				L_34 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_33, NULL);
				float L_35 = __this->___m_ChildMinWidth_23;
				float L_36;
				L_36 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_add(L_32, ((float)L_34))), L_35, NULL);
				__this->___m_ChildMinWidth_23 = L_36;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_37 = V_9;
				NullCheck(L_37);
				float L_38 = L_37->___maxWidth_1;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_39 = V_9;
				NullCheck(L_39);
				int32_t L_40;
				L_40 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_39, NULL);
				float L_41 = __this->___m_ChildMaxWidth_24;
				float L_42;
				L_42 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_add(L_38, ((float)L_40))), L_41, NULL);
				__this->___m_ChildMaxWidth_24 = L_42;
			}

IL_0127_1:
			{
				int32_t L_43 = __this->___m_StretchableCountX_19;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_44 = V_9;
				NullCheck(L_44);
				int32_t L_45 = L_44->___stretchWidth_5;
				__this->___m_StretchableCountX_19 = ((int32_t)il2cpp_codegen_add(L_43, L_45));
			}

IL_013c_1:
			{
				bool L_46;
				L_46 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_8), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_0083_1;
				}
			}
			{
				goto IL_0159;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0159:
	{
		float L_47 = __this->___m_ChildMinWidth_23;
		int32_t L_48 = V_0;
		int32_t L_49 = V_1;
		__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_subtract(L_47, ((float)((int32_t)il2cpp_codegen_add(L_48, L_49)))));
		float L_50 = __this->___m_ChildMaxWidth_24;
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_subtract(L_50, ((float)((int32_t)il2cpp_codegen_add(L_51, L_52)))));
		goto IL_02fa;
	}

IL_0181:
	{
		V_12 = 0;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_53 = __this->___entries_11;
		NullCheck(L_53);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_54;
		L_54 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_53, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_13 = L_54;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0291:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_13), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0283_1;
			}

IL_0198_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_55;
				L_55 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_13), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_14 = L_55;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_56 = V_14;
				NullCheck(L_56);
				VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_56);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_57 = V_14;
				NullCheck(L_57);
				bool L_58 = L_57->___consideredForMargin_7;
				V_16 = L_58;
				bool L_59 = V_16;
				if (!L_59)
				{
					goto IL_0244_1;
				}
			}
			{
				bool L_60 = V_2;
				V_17 = (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
				bool L_61 = V_17;
				if (!L_61)
				{
					goto IL_01df_1;
				}
			}
			{
				int32_t L_62 = V_12;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_63 = V_14;
				NullCheck(L_63);
				int32_t L_64;
				L_64 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_63);
				if ((((int32_t)L_62) > ((int32_t)L_64)))
				{
					goto IL_01d9_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_65 = V_14;
				NullCheck(L_65);
				int32_t L_66;
				L_66 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_65);
				G_B22_0 = L_66;
				goto IL_01db_1;
			}

IL_01d9_1:
			{
				int32_t L_67 = V_12;
				G_B22_0 = L_67;
			}

IL_01db_1:
			{
				V_15 = G_B22_0;
				goto IL_01e6_1;
			}

IL_01df_1:
			{
				V_15 = 0;
				V_2 = (bool)0;
			}

IL_01e6_1:
			{
				float L_68 = __this->___m_ChildMinWidth_23;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_14;
				NullCheck(L_69);
				float L_70 = L_69->___minWidth_0;
				float L_71 = __this->___spacing_14;
				int32_t L_72 = V_15;
				__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_add(L_68, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_70, L_71)), ((float)L_72)))));
				float L_73 = __this->___m_ChildMaxWidth_24;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_74 = V_14;
				NullCheck(L_74);
				float L_75 = L_74->___maxWidth_1;
				float L_76 = __this->___spacing_14;
				int32_t L_77 = V_15;
				__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_add(L_73, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_75, L_76)), ((float)L_77)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_78 = V_14;
				NullCheck(L_78);
				int32_t L_79;
				L_79 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_78);
				V_12 = L_79;
				int32_t L_80 = __this->___m_StretchableCountX_19;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_81 = V_14;
				NullCheck(L_81);
				int32_t L_82 = L_81->___stretchWidth_5;
				__this->___m_StretchableCountX_19 = ((int32_t)il2cpp_codegen_add(L_80, L_82));
				goto IL_0282_1;
			}

IL_0244_1:
			{
				float L_83 = __this->___m_ChildMinWidth_23;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_84 = V_14;
				NullCheck(L_84);
				float L_85 = L_84->___minWidth_0;
				__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_add(L_83, L_85));
				float L_86 = __this->___m_ChildMaxWidth_24;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_87 = V_14;
				NullCheck(L_87);
				float L_88 = L_87->___maxWidth_1;
				__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_add(L_86, L_88));
				int32_t L_89 = __this->___m_StretchableCountX_19;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_90 = V_14;
				NullCheck(L_90);
				int32_t L_91 = L_90->___stretchWidth_5;
				__this->___m_StretchableCountX_19 = ((int32_t)il2cpp_codegen_add(L_89, L_91));
			}

IL_0282_1:
			{
			}

IL_0283_1:
			{
				bool L_92;
				L_92 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_13), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_92)
				{
					goto IL_0198_1;
				}
			}
			{
				goto IL_02a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a0:
	{
		float L_93 = __this->___m_ChildMinWidth_23;
		float L_94 = __this->___spacing_14;
		__this->___m_ChildMinWidth_23 = ((float)il2cpp_codegen_subtract(L_93, L_94));
		float L_95 = __this->___m_ChildMaxWidth_24;
		float L_96 = __this->___spacing_14;
		__this->___m_ChildMaxWidth_24 = ((float)il2cpp_codegen_subtract(L_95, L_96));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_97 = __this->___entries_11;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_97, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_18 = (bool)((!(((uint32_t)L_98) <= ((uint32_t)0)))? 1 : 0);
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_02f3;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_100 = __this->___entries_11;
		NullCheck(L_100);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_101;
		L_101 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_100, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_101);
		int32_t L_102;
		L_102 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_101);
		V_0 = L_102;
		int32_t L_103 = V_12;
		V_1 = L_103;
		goto IL_02f9;
	}

IL_02f3:
	{
		int32_t L_104 = 0;
		V_1 = L_104;
		V_0 = L_104;
	}

IL_02f9:
	{
	}

IL_02fa:
	{
		V_3 = (0.0f);
		V_4 = (0.0f);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_105;
		L_105 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_106;
		L_106 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_105) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_106))))
		{
			goto IL_031c;
		}
	}
	{
		bool L_107 = __this->___m_UserSpecifiedWidth_21;
		G_B37_0 = ((int32_t)(L_107));
		goto IL_031d;
	}

IL_031c:
	{
		G_B37_0 = 1;
	}

IL_031d:
	{
		V_19 = (bool)G_B37_0;
		bool L_108 = V_19;
		if (!L_108)
		{
			goto IL_0358;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_109;
		L_109 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_109);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_110;
		L_110 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_109, NULL);
		NullCheck(L_110);
		int32_t L_111;
		L_111 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_110, NULL);
		int32_t L_112 = V_0;
		int32_t L_113;
		L_113 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_111, L_112, NULL);
		V_3 = ((float)L_113);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_114;
		L_114 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_114);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_115;
		L_115 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_114, NULL);
		NullCheck(L_115);
		int32_t L_116;
		L_116 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_115, NULL);
		int32_t L_117 = V_1;
		int32_t L_118;
		L_118 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_116, L_117, NULL);
		V_4 = ((float)L_118);
		goto IL_0371;
	}

IL_0358:
	{
		int32_t L_119 = V_0;
		__this->___m_MarginLeft_27 = L_119;
		int32_t L_120 = V_1;
		__this->___m_MarginRight_28 = L_120;
		float L_121 = (0.0f);
		V_4 = L_121;
		V_3 = L_121;
	}

IL_0371:
	{
		float L_122 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		float L_123 = __this->___m_ChildMinWidth_23;
		float L_124 = V_3;
		float L_125 = V_4;
		float L_126;
		L_126 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_122, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_123, L_124)), L_125)), NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_126;
		float L_127 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		V_20 = (bool)((((float)L_127) == ((float)(0.0f)))? 1 : 0);
		bool L_128 = V_20;
		if (!L_128)
		{
			goto IL_03da;
		}
	}
	{
		int32_t L_129 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5;
		int32_t L_130 = __this->___m_StretchableCountX_19;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_131;
		L_131 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_131);
		bool L_132;
		L_132 = GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37(L_131, NULL);
		G_B42_0 = L_130;
		G_B42_1 = L_129;
		G_B42_2 = __this;
		if (L_132)
		{
			G_B43_0 = L_130;
			G_B43_1 = L_129;
			G_B43_2 = __this;
			goto IL_03be;
		}
	}
	{
		G_B44_0 = 0;
		G_B44_1 = G_B42_0;
		G_B44_2 = G_B42_1;
		G_B44_3 = G_B42_2;
		goto IL_03bf;
	}

IL_03be:
	{
		G_B44_0 = 1;
		G_B44_1 = G_B43_0;
		G_B44_2 = G_B43_1;
		G_B44_3 = G_B43_2;
	}

IL_03bf:
	{
		NullCheck(G_B44_3);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)G_B44_3)->___stretchWidth_5 = ((int32_t)il2cpp_codegen_add(G_B44_2, ((int32_t)il2cpp_codegen_add(G_B44_1, G_B44_0))));
		float L_133 = __this->___m_ChildMaxWidth_24;
		float L_134 = V_3;
		float L_135 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_133, L_134)), L_135));
		goto IL_03e3;
	}

IL_03da:
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
	}

IL_03e3:
	{
		float L_136 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		float L_137 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		float L_138;
		L_138 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_136, L_137, NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_138;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_139;
		L_139 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_139);
		float L_140;
		L_140 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_139, NULL);
		V_21 = (bool)((((int32_t)((((float)L_140) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_21;
		if (!L_141)
		{
			goto IL_043a;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_142;
		L_142 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_142);
		float L_143;
		L_143 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_142, NULL);
		float L_144 = L_143;
		V_6 = L_144;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_144;
		float L_145 = V_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_145;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
	}

IL_043a:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___x0, float ___width1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_12;
	memset((&V_12), 0, sizeof(V_12));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_13 = NULL;
	bool V_14 = false;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_27;
	memset((&V_27), 0, sizeof(V_27));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_28 = NULL;
	float V_29 = 0.0f;
	bool V_30 = false;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	bool V_33 = false;
	int32_t G_B43_0 = 0;
	{
		float L_0 = ___x0;
		float L_1 = ___width1;
		GUILayoutEntry_SetHorizontal_m268577E88A2AE5870C14EFDA9CB88C94CAC2ACE9(__this, L_0, L_1, NULL);
		bool L_2 = __this->___resetCoords_13;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		___x0 = (0.0f);
	}

IL_001b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4;
		L_4 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5;
		L_5 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_4, NULL);
		V_0 = L_5;
		bool L_6 = __this->___isVertical_12;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_01b3;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9;
		L_9 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_8) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00fd;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_11 = __this->___entries_11;
		NullCheck(L_11);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_12;
		L_12 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_11, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_4), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_005d_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_13;
				L_13 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_4), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_5 = L_13;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_14 = V_5;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_14);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_16 = V_0;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_16, NULL);
				int32_t L_18;
				L_18 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_15, L_17, NULL);
				V_6 = ((float)L_18);
				float L_19 = ___x0;
				float L_20 = V_6;
				V_7 = ((float)il2cpp_codegen_add(L_19, L_20));
				float L_21 = ___width1;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_22 = V_5;
				NullCheck(L_22);
				int32_t L_23;
				L_23 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_22);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_24 = V_0;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_24, NULL);
				int32_t L_26;
				L_26 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_23, L_25, NULL);
				float L_27 = V_6;
				V_8 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_21, ((float)L_26))), L_27));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_28 = V_5;
				NullCheck(L_28);
				int32_t L_29 = L_28->___stretchWidth_5;
				V_9 = (bool)((!(((uint32_t)L_29) <= ((uint32_t)0)))? 1 : 0);
				bool L_30 = V_9;
				if (!L_30)
				{
					goto IL_00ba_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_31 = V_5;
				float L_32 = V_7;
				float L_33 = V_8;
				NullCheck(L_31);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_31, L_32, L_33);
				goto IL_00d9_1;
			}

IL_00ba_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_34 = V_5;
				float L_35 = V_7;
				float L_36 = V_8;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_37 = V_5;
				NullCheck(L_37);
				float L_38 = L_37->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_39 = V_5;
				NullCheck(L_39);
				float L_40 = L_39->___maxWidth_1;
				float L_41;
				L_41 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_36, L_38, L_40, NULL);
				NullCheck(L_34);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
			}

IL_00d9_1:
			{
			}

IL_00da_1:
			{
				bool L_42;
				L_42 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_4), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_00f7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f7:
	{
		goto IL_01ad;
	}

IL_00fd:
	{
		float L_43 = ___x0;
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		V_10 = ((float)il2cpp_codegen_subtract(L_43, ((float)L_44)));
		float L_45 = ___width1;
		int32_t L_46;
		L_46 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(__this, NULL);
		V_11 = ((float)il2cpp_codegen_add(L_45, ((float)L_46)));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_47 = __this->___entries_11;
		NullCheck(L_47);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_48;
		L_48 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_47, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_12 = L_48;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_019d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_12), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0192_1;
			}

IL_0124_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_49;
				L_49 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_12), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_13 = L_49;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_50 = V_13;
				NullCheck(L_50);
				int32_t L_51 = L_50->___stretchWidth_5;
				V_14 = (bool)((!(((uint32_t)L_51) <= ((uint32_t)0)))? 1 : 0);
				bool L_52 = V_14;
				if (!L_52)
				{
					goto IL_0160_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_53 = V_13;
				float L_54 = V_10;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_55 = V_13;
				NullCheck(L_55);
				int32_t L_56;
				L_56 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_55);
				float L_57 = V_11;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_58 = V_13;
				NullCheck(L_58);
				int32_t L_59;
				L_59 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_58, NULL);
				NullCheck(L_53);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_53, ((float)il2cpp_codegen_add(L_54, ((float)L_56))), ((float)il2cpp_codegen_subtract(L_57, ((float)L_59))));
				goto IL_0191_1;
			}

IL_0160_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_60 = V_13;
				float L_61 = V_10;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_62 = V_13;
				NullCheck(L_62);
				int32_t L_63;
				L_63 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_62);
				float L_64 = V_11;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_65 = V_13;
				NullCheck(L_65);
				int32_t L_66;
				L_66 = GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5(L_65, NULL);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_67 = V_13;
				NullCheck(L_67);
				float L_68 = L_67->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_13;
				NullCheck(L_69);
				float L_70 = L_69->___maxWidth_1;
				float L_71;
				L_71 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_64, ((float)L_66))), L_68, L_70, NULL);
				NullCheck(L_60);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_60, ((float)il2cpp_codegen_add(L_61, ((float)L_63))), L_71);
			}

IL_0191_1:
			{
			}

IL_0192_1:
			{
				bool L_72;
				L_72 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_12), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_0124_1;
				}
			}
			{
				goto IL_01ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ac:
	{
	}

IL_01ad:
	{
		goto IL_03b2;
	}

IL_01b3:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_73;
		L_73 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_74;
		L_74 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		V_20 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_73) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_74))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_20;
		if (!L_75)
		{
			goto IL_0245;
		}
	}
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_76, NULL);
		V_21 = ((float)L_77);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_78, NULL);
		V_22 = ((float)L_79);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_80 = __this->___entries_11;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_80, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_23 = (bool)((!(((uint32_t)L_81) <= ((uint32_t)0)))? 1 : 0);
		bool L_82 = V_23;
		if (!L_82)
		{
			goto IL_0235;
		}
	}
	{
		float L_83 = V_21;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_84 = __this->___entries_11;
		NullCheck(L_84);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_85;
		L_85 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_84, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_85);
		float L_87;
		L_87 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_83, ((float)L_86), NULL);
		V_21 = L_87;
		float L_88 = V_22;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_89 = __this->___entries_11;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_90 = __this->___entries_11;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_90, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		NullCheck(L_89);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_92;
		L_92 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_89, ((int32_t)il2cpp_codegen_subtract(L_91, 1)), List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_92);
		int32_t L_93;
		L_93 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_92);
		float L_94;
		L_94 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_88, ((float)L_93), NULL);
		V_22 = L_94;
	}

IL_0235:
	{
		float L_95 = ___x0;
		float L_96 = V_21;
		___x0 = ((float)il2cpp_codegen_add(L_95, L_96));
		float L_97 = ___width1;
		float L_98 = V_22;
		float L_99 = V_21;
		___width1 = ((float)il2cpp_codegen_subtract(L_97, ((float)il2cpp_codegen_add(L_98, L_99))));
	}

IL_0245:
	{
		float L_100 = ___width1;
		float L_101 = __this->___spacing_14;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_102 = __this->___entries_11;
		NullCheck(L_102);
		int32_t L_103;
		L_103 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_102, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_15 = ((float)il2cpp_codegen_subtract(L_100, ((float)il2cpp_codegen_multiply(L_101, ((float)((int32_t)il2cpp_codegen_subtract(L_103, 1)))))));
		V_16 = (0.0f);
		float L_104 = __this->___m_ChildMinWidth_23;
		float L_105 = __this->___m_ChildMaxWidth_24;
		V_24 = (bool)((((int32_t)((((float)L_104) == ((float)L_105))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_24;
		if (!L_106)
		{
			goto IL_02a4;
		}
	}
	{
		float L_107 = V_15;
		float L_108 = __this->___m_ChildMinWidth_23;
		float L_109 = __this->___m_ChildMaxWidth_24;
		float L_110 = __this->___m_ChildMinWidth_23;
		float L_111;
		L_111 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(((float)il2cpp_codegen_subtract(L_107, L_108))/((float)il2cpp_codegen_subtract(L_109, L_110)))), (0.0f), (1.0f), NULL);
		V_16 = L_111;
	}

IL_02a4:
	{
		V_17 = (0.0f);
		float L_112 = V_15;
		float L_113 = __this->___m_ChildMaxWidth_24;
		V_25 = (bool)((((float)L_112) > ((float)L_113))? 1 : 0);
		bool L_114 = V_25;
		if (!L_114)
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_115 = __this->___m_StretchableCountX_19;
		V_26 = (bool)((((int32_t)L_115) > ((int32_t)0))? 1 : 0);
		bool L_116 = V_26;
		if (!L_116)
		{
			goto IL_02e0;
		}
	}
	{
		float L_117 = V_15;
		float L_118 = __this->___m_ChildMaxWidth_24;
		int32_t L_119 = __this->___m_StretchableCountX_19;
		V_17 = ((float)(((float)il2cpp_codegen_subtract(L_117, L_118))/((float)L_119)));
	}

IL_02e0:
	{
	}

IL_02e1:
	{
		V_18 = 0;
		V_19 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_120 = __this->___entries_11;
		NullCheck(L_120);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_121;
		L_121 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_120, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_27 = L_121;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03a2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_27), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0394_1;
			}

IL_02fa_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_122;
				L_122 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_27), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_28 = L_122;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_123 = V_28;
				NullCheck(L_123);
				float L_124 = L_123->___minWidth_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_125 = V_28;
				NullCheck(L_125);
				float L_126 = L_125->___maxWidth_1;
				float L_127 = V_16;
				float L_128;
				L_128 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_124, L_126, L_127, NULL);
				V_29 = L_128;
				float L_129 = V_29;
				float L_130 = V_17;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_131 = V_28;
				NullCheck(L_131);
				int32_t L_132 = L_131->___stretchWidth_5;
				V_29 = ((float)il2cpp_codegen_add(L_129, ((float)il2cpp_codegen_multiply(L_130, ((float)L_132)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_133 = V_28;
				NullCheck(L_133);
				bool L_134 = L_133->___consideredForMargin_7;
				V_30 = L_134;
				bool L_135 = V_30;
				if (!L_135)
				{
					goto IL_0371_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_136 = V_28;
				NullCheck(L_136);
				int32_t L_137;
				L_137 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, L_136);
				V_31 = L_137;
				bool L_138 = V_19;
				V_33 = L_138;
				bool L_139 = V_33;
				if (!L_139)
				{
					goto IL_0352_1;
				}
			}
			{
				V_31 = 0;
				V_19 = (bool)0;
			}

IL_0352_1:
			{
				int32_t L_140 = V_18;
				int32_t L_141 = V_31;
				if ((((int32_t)L_140) > ((int32_t)L_141)))
				{
					goto IL_035c_1;
				}
			}
			{
				int32_t L_142 = V_31;
				G_B43_0 = L_142;
				goto IL_035e_1;
			}

IL_035c_1:
			{
				int32_t L_143 = V_18;
				G_B43_0 = L_143;
			}

IL_035e_1:
			{
				V_32 = G_B43_0;
				float L_144 = ___x0;
				int32_t L_145 = V_32;
				___x0 = ((float)il2cpp_codegen_add(L_144, ((float)L_145)));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_146 = V_28;
				NullCheck(L_146);
				int32_t L_147;
				L_147 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, L_146);
				V_18 = L_147;
			}

IL_0371_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_148 = V_28;
				float L_149 = ___x0;
				float L_150;
				L_150 = bankers_roundf(L_149);
				float L_151 = V_29;
				float L_152;
				L_152 = bankers_roundf(L_151);
				NullCheck(L_148);
				VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_148, L_150, L_152);
				float L_153 = ___x0;
				float L_154 = V_29;
				float L_155 = __this->___spacing_14;
				___x0 = ((float)il2cpp_codegen_add(L_153, ((float)il2cpp_codegen_add(L_154, L_155))));
			}

IL_0394_1:
			{
				bool L_156;
				L_156 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_27), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_156)
				{
					goto IL_02fa_1;
				}
			}
			{
				goto IL_03b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03b1:
	{
	}

IL_03b2:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	float V_5 = 0.0f;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_9;
	memset((&V_9), 0, sizeof(V_9));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_16;
	memset((&V_16), 0, sizeof(V_16));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B34_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B40_2 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B39_2 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	int32_t G_B41_2 = 0;
	GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* G_B41_3 = NULL;
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_0 = __this->___entries_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_0, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3;
		L_3 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_3);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4;
		L_4 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0(L_4, NULL);
		float L_6 = ((float)L_5);
		V_5 = L_6;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_6;
		float L_7 = V_5;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_7;
		goto IL_03fe;
	}

IL_003d:
	{
		V_0 = 0;
		V_1 = 0;
		__this->___m_ChildMinHeight_25 = (0.0f);
		__this->___m_ChildMaxHeight_26 = (0.0f);
		__this->___m_StretchableCountY_20 = 0;
		bool L_8 = __this->___isVertical_12;
		V_6 = L_8;
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_01e8;
		}
	}
	{
		V_7 = 0;
		V_8 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_10 = __this->___entries_11;
		NullCheck(L_10);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_11;
		L_11 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_10, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_9 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_9), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016c_1;
			}

IL_0087_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_12;
				L_12 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_9), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_10 = L_12;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_13 = V_10;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_13);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_14 = V_10;
				NullCheck(L_14);
				bool L_15 = L_14->___consideredForMargin_7;
				V_12 = L_15;
				bool L_16 = V_12;
				if (!L_16)
				{
					goto IL_012d_1;
				}
			}
			{
				bool L_17 = V_8;
				V_13 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_13;
				if (!L_18)
				{
					goto IL_00c7_1;
				}
			}
			{
				int32_t L_19 = V_7;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_20 = V_10;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_20);
				int32_t L_22;
				L_22 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_19, L_21, NULL);
				V_11 = L_22;
				goto IL_00cf_1;
			}

IL_00c7_1:
			{
				V_11 = 0;
				V_8 = (bool)0;
			}

IL_00cf_1:
			{
				float L_23 = __this->___m_ChildMinHeight_25;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_24 = V_10;
				NullCheck(L_24);
				float L_25 = L_24->___minHeight_2;
				float L_26 = __this->___spacing_14;
				int32_t L_27 = V_11;
				__this->___m_ChildMinHeight_25 = ((float)il2cpp_codegen_add(L_23, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_25, L_26)), ((float)L_27)))));
				float L_28 = __this->___m_ChildMaxHeight_26;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_29 = V_10;
				NullCheck(L_29);
				float L_30 = L_29->___maxHeight_3;
				float L_31 = __this->___spacing_14;
				int32_t L_32 = V_11;
				__this->___m_ChildMaxHeight_26 = ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_30, L_31)), ((float)L_32)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_33 = V_10;
				NullCheck(L_33);
				int32_t L_34;
				L_34 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_33);
				V_7 = L_34;
				int32_t L_35 = __this->___m_StretchableCountY_20;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_36 = V_10;
				NullCheck(L_36);
				int32_t L_37 = L_36->___stretchHeight_6;
				__this->___m_StretchableCountY_20 = ((int32_t)il2cpp_codegen_add(L_35, L_37));
				goto IL_016b_1;
			}

IL_012d_1:
			{
				float L_38 = __this->___m_ChildMinHeight_25;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_39 = V_10;
				NullCheck(L_39);
				float L_40 = L_39->___minHeight_2;
				__this->___m_ChildMinHeight_25 = ((float)il2cpp_codegen_add(L_38, L_40));
				float L_41 = __this->___m_ChildMaxHeight_26;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_42 = V_10;
				NullCheck(L_42);
				float L_43 = L_42->___maxHeight_3;
				__this->___m_ChildMaxHeight_26 = ((float)il2cpp_codegen_add(L_41, L_43));
				int32_t L_44 = __this->___m_StretchableCountY_20;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_45 = V_10;
				NullCheck(L_45);
				int32_t L_46 = L_45->___stretchHeight_6;
				__this->___m_StretchableCountY_20 = ((int32_t)il2cpp_codegen_add(L_44, L_46));
			}

IL_016b_1:
			{
			}

IL_016c_1:
			{
				bool L_47;
				L_47 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_9), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_0087_1;
				}
			}
			{
				goto IL_0189;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0189:
	{
		float L_48 = __this->___m_ChildMinHeight_25;
		float L_49 = __this->___spacing_14;
		__this->___m_ChildMinHeight_25 = ((float)il2cpp_codegen_subtract(L_48, L_49));
		float L_50 = __this->___m_ChildMaxHeight_26;
		float L_51 = __this->___spacing_14;
		__this->___m_ChildMaxHeight_26 = ((float)il2cpp_codegen_subtract(L_50, L_51));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_52 = __this->___entries_11;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_52, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_14 = (bool)((!(((uint32_t)L_53) <= ((uint32_t)0)))? 1 : 0);
		bool L_54 = V_14;
		if (!L_54)
		{
			goto IL_01dc;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_55 = __this->___entries_11;
		NullCheck(L_55);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_56;
		L_56 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_55, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_56);
		V_0 = L_57;
		int32_t L_58 = V_7;
		V_1 = L_58;
		goto IL_01e2;
	}

IL_01dc:
	{
		int32_t L_59 = 0;
		V_0 = L_59;
		V_1 = L_59;
	}

IL_01e2:
	{
		goto IL_02c3;
	}

IL_01e8:
	{
		V_15 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_60 = __this->___entries_11;
		NullCheck(L_60);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_61;
		L_61 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_60, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_16 = L_61;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02b3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_16), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02a5_1;
			}

IL_01ff_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_62;
				L_62 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_16), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_17 = L_62;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_63 = V_17;
				NullCheck(L_63);
				VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_63);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_64 = V_17;
				NullCheck(L_64);
				bool L_65 = L_64->___consideredForMargin_7;
				V_18 = L_65;
				bool L_66 = V_18;
				if (!L_66)
				{
					goto IL_0290_1;
				}
			}
			{
				bool L_67 = V_15;
				V_19 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
				bool L_68 = V_19;
				if (!L_68)
				{
					goto IL_024a_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_17;
				NullCheck(L_69);
				int32_t L_70;
				L_70 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_69);
				int32_t L_71 = V_0;
				int32_t L_72;
				L_72 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_70, L_71, NULL);
				V_0 = L_72;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_73 = V_17;
				NullCheck(L_73);
				int32_t L_74;
				L_74 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_73);
				int32_t L_75 = V_1;
				int32_t L_76;
				L_76 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_74, L_75, NULL);
				V_1 = L_76;
				goto IL_025f_1;
			}

IL_024a_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_77 = V_17;
				NullCheck(L_77);
				int32_t L_78;
				L_78 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_77);
				V_0 = L_78;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_79 = V_17;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_79);
				V_1 = L_80;
				V_15 = (bool)0;
			}

IL_025f_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_81 = V_17;
				NullCheck(L_81);
				float L_82 = L_81->___minHeight_2;
				float L_83 = __this->___m_ChildMinHeight_25;
				float L_84;
				L_84 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_82, L_83, NULL);
				__this->___m_ChildMinHeight_25 = L_84;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_85 = V_17;
				NullCheck(L_85);
				float L_86 = L_85->___maxHeight_3;
				float L_87 = __this->___m_ChildMaxHeight_26;
				float L_88;
				L_88 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_86, L_87, NULL);
				__this->___m_ChildMaxHeight_26 = L_88;
			}

IL_0290_1:
			{
				int32_t L_89 = __this->___m_StretchableCountY_20;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_90 = V_17;
				NullCheck(L_90);
				int32_t L_91 = L_90->___stretchHeight_6;
				__this->___m_StretchableCountY_20 = ((int32_t)il2cpp_codegen_add(L_89, L_91));
			}

IL_02a5_1:
			{
				bool L_92;
				L_92 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_16), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_92)
				{
					goto IL_01ff_1;
				}
			}
			{
				goto IL_02c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02c2:
	{
	}

IL_02c3:
	{
		V_2 = (0.0f);
		V_3 = (0.0f);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_93;
		L_93 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_94;
		L_94 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		if ((!(((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_93) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_94))))
		{
			goto IL_02e4;
		}
	}
	{
		bool L_95 = __this->___m_UserSpecifiedHeight_22;
		G_B34_0 = ((int32_t)(L_95));
		goto IL_02e5;
	}

IL_02e4:
	{
		G_B34_0 = 1;
	}

IL_02e5:
	{
		V_20 = (bool)G_B34_0;
		bool L_96 = V_20;
		if (!L_96)
		{
			goto IL_031f;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_97;
		L_97 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_97);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_98;
		L_98 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_97, NULL);
		NullCheck(L_98);
		int32_t L_99;
		L_99 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_98, NULL);
		int32_t L_100 = V_0;
		int32_t L_101;
		L_101 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_99, L_100, NULL);
		V_2 = ((float)L_101);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_102;
		L_102 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_102);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_103;
		L_103 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_102, NULL);
		NullCheck(L_103);
		int32_t L_104;
		L_104 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_103, NULL);
		int32_t L_105 = V_1;
		int32_t L_106;
		L_106 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_104, L_105, NULL);
		V_3 = ((float)L_106);
		goto IL_0337;
	}

IL_031f:
	{
		int32_t L_107 = V_0;
		__this->___m_MarginTop_29 = L_107;
		int32_t L_108 = V_1;
		__this->___m_MarginBottom_30 = L_108;
		float L_109 = (0.0f);
		V_3 = L_109;
		V_2 = L_109;
	}

IL_0337:
	{
		float L_110 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_111 = __this->___m_ChildMinHeight_25;
		float L_112 = V_2;
		float L_113 = V_3;
		float L_114;
		L_114 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_110, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_111, L_112)), L_113)), NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_114;
		float L_115 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_21 = (bool)((((float)L_115) == ((float)(0.0f)))? 1 : 0);
		bool L_116 = V_21;
		if (!L_116)
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_117 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6;
		int32_t L_118 = __this->___m_StretchableCountY_20;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_119;
		L_119 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_119);
		bool L_120;
		L_120 = GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F(L_119, NULL);
		G_B39_0 = L_118;
		G_B39_1 = L_117;
		G_B39_2 = __this;
		if (L_120)
		{
			G_B40_0 = L_118;
			G_B40_1 = L_117;
			G_B40_2 = __this;
			goto IL_0383;
		}
	}
	{
		G_B41_0 = 0;
		G_B41_1 = G_B39_0;
		G_B41_2 = G_B39_1;
		G_B41_3 = G_B39_2;
		goto IL_0384;
	}

IL_0383:
	{
		G_B41_0 = 1;
		G_B41_1 = G_B40_0;
		G_B41_2 = G_B40_1;
		G_B41_3 = G_B40_2;
	}

IL_0384:
	{
		NullCheck(G_B41_3);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)G_B41_3)->___stretchHeight_6 = ((int32_t)il2cpp_codegen_add(G_B41_2, ((int32_t)il2cpp_codegen_add(G_B41_1, G_B41_0))));
		float L_121 = __this->___m_ChildMaxHeight_26;
		float L_122 = V_2;
		float L_123 = V_3;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_121, L_122)), L_123));
		goto IL_03a7;
	}

IL_039e:
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
	}

IL_03a7:
	{
		float L_124 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		float L_125 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_126;
		L_126 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_124, L_125, NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_126;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_127;
		L_127 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_127);
		float L_128;
		L_128 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_127, NULL);
		V_22 = (bool)((((int32_t)((((float)L_128) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_129 = V_22;
		if (!L_129)
		{
			goto IL_03fe;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_130;
		L_130 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_130);
		float L_131;
		L_131 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_130, NULL);
		float L_132 = L_131;
		V_5 = L_132;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_132;
		float L_133 = V_5;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_133;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
	}

IL_03fe:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___y0, float ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_16;
	memset((&V_16), 0, sizeof(V_16));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_17 = NULL;
	float V_18 = 0.0f;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_24;
	memset((&V_24), 0, sizeof(V_24));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_25 = NULL;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	float V_28 = 0.0f;
	bool V_29 = false;
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_32;
	memset((&V_32), 0, sizeof(V_32));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_33 = NULL;
	bool V_34 = false;
	int32_t G_B23_0 = 0;
	{
		float L_0 = ___y0;
		float L_1 = ___height1;
		GUILayoutEntry_SetVertical_mA20893626441C55001C1940C53A6A100DD22D61F(__this, L_0, L_1, NULL);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_2 = __this->___entries_11;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_2, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_03c7;
	}

IL_0021:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5;
		L_5 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_5);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6;
		L_6 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_5, NULL);
		V_0 = L_6;
		bool L_7 = __this->___resetCoords_13;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		___y0 = (0.0f);
	}

IL_003e:
	{
		bool L_9 = __this->___isVertical_12;
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_024d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11;
		L_11 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_11) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_00dd;
		}
	}
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_14, NULL);
		V_10 = ((float)L_15);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_16, NULL);
		V_11 = ((float)L_17);
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_18 = __this->___entries_11;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_18, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_12 = (bool)((!(((uint32_t)L_19) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_12;
		if (!L_20)
		{
			goto IL_00cd;
		}
	}
	{
		float L_21 = V_10;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_22 = __this->___entries_11;
		NullCheck(L_22);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_23;
		L_23 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_22, 0, List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_23);
		float L_25;
		L_25 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_21, ((float)L_24), NULL);
		V_10 = L_25;
		float L_26 = V_11;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_27 = __this->___entries_11;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_28 = __this->___entries_11;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_28, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		NullCheck(L_27);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_30;
		L_30 = List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360(L_27, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), List_1_get_Item_m16B6735ABC6797DEC0C384CD67F15DDE9A5C1360_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_30);
		float L_32;
		L_32 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_26, ((float)L_31), NULL);
		V_11 = L_32;
	}

IL_00cd:
	{
		float L_33 = ___y0;
		float L_34 = V_10;
		___y0 = ((float)il2cpp_codegen_add(L_33, L_34));
		float L_35 = ___height1;
		float L_36 = V_11;
		float L_37 = V_10;
		___height1 = ((float)il2cpp_codegen_subtract(L_35, ((float)il2cpp_codegen_add(L_36, L_37))));
	}

IL_00dd:
	{
		float L_38 = ___height1;
		float L_39 = __this->___spacing_14;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_40 = __this->___entries_11;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_inline(L_40, List_1_get_Count_m153018B4392442CB2A61FDE8F54D648A39BD4F4E_RuntimeMethod_var);
		V_4 = ((float)il2cpp_codegen_subtract(L_38, ((float)il2cpp_codegen_multiply(L_39, ((float)((int32_t)il2cpp_codegen_subtract(L_41, 1)))))));
		V_5 = (0.0f);
		float L_42 = __this->___m_ChildMinHeight_25;
		float L_43 = __this->___m_ChildMaxHeight_26;
		V_13 = (bool)((((int32_t)((((float)L_42) == ((float)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_13;
		if (!L_44)
		{
			goto IL_013c;
		}
	}
	{
		float L_45 = V_4;
		float L_46 = __this->___m_ChildMinHeight_25;
		float L_47 = __this->___m_ChildMaxHeight_26;
		float L_48 = __this->___m_ChildMinHeight_25;
		float L_49;
		L_49 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(((float)il2cpp_codegen_subtract(L_45, L_46))/((float)il2cpp_codegen_subtract(L_47, L_48)))), (0.0f), (1.0f), NULL);
		V_5 = L_49;
	}

IL_013c:
	{
		V_6 = (0.0f);
		float L_50 = V_4;
		float L_51 = __this->___m_ChildMaxHeight_26;
		V_14 = (bool)((((float)L_50) > ((float)L_51))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_53 = __this->___m_StretchableCountY_20;
		V_15 = (bool)((((int32_t)L_53) > ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_0176;
		}
	}
	{
		float L_55 = V_4;
		float L_56 = __this->___m_ChildMaxHeight_26;
		int32_t L_57 = __this->___m_StretchableCountY_20;
		V_6 = ((float)(((float)il2cpp_codegen_subtract(L_55, L_56))/((float)L_57)));
	}

IL_0176:
	{
	}

IL_0177:
	{
		V_7 = 0;
		V_8 = (bool)1;
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_58 = __this->___entries_11;
		NullCheck(L_58);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_59;
		L_59 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_58, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_16 = L_59;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0238:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_16), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_022a_1;
			}

IL_0190_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_60;
				L_60 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_16), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_17 = L_60;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_61 = V_17;
				NullCheck(L_61);
				float L_62 = L_61->___minHeight_2;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_63 = V_17;
				NullCheck(L_63);
				float L_64 = L_63->___maxHeight_3;
				float L_65 = V_5;
				float L_66;
				L_66 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_62, L_64, L_65, NULL);
				V_18 = L_66;
				float L_67 = V_18;
				float L_68 = V_6;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_69 = V_17;
				NullCheck(L_69);
				int32_t L_70 = L_69->___stretchHeight_6;
				V_18 = ((float)il2cpp_codegen_add(L_67, ((float)il2cpp_codegen_multiply(L_68, ((float)L_70)))));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_71 = V_17;
				NullCheck(L_71);
				bool L_72 = L_71->___consideredForMargin_7;
				V_19 = L_72;
				bool L_73 = V_19;
				if (!L_73)
				{
					goto IL_0207_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_74 = V_17;
				NullCheck(L_74);
				int32_t L_75;
				L_75 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_74);
				V_20 = L_75;
				bool L_76 = V_8;
				V_22 = L_76;
				bool L_77 = V_22;
				if (!L_77)
				{
					goto IL_01e8_1;
				}
			}
			{
				V_20 = 0;
				V_8 = (bool)0;
			}

IL_01e8_1:
			{
				int32_t L_78 = V_7;
				int32_t L_79 = V_20;
				if ((((int32_t)L_78) > ((int32_t)L_79)))
				{
					goto IL_01f2_1;
				}
			}
			{
				int32_t L_80 = V_20;
				G_B23_0 = L_80;
				goto IL_01f4_1;
			}

IL_01f2_1:
			{
				int32_t L_81 = V_7;
				G_B23_0 = L_81;
			}

IL_01f4_1:
			{
				V_21 = G_B23_0;
				float L_82 = ___y0;
				int32_t L_83 = V_21;
				___y0 = ((float)il2cpp_codegen_add(L_82, ((float)L_83)));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_84 = V_17;
				NullCheck(L_84);
				int32_t L_85;
				L_85 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_84);
				V_7 = L_85;
			}

IL_0207_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_86 = V_17;
				float L_87 = ___y0;
				float L_88;
				L_88 = bankers_roundf(L_87);
				float L_89 = V_18;
				float L_90;
				L_90 = bankers_roundf(L_89);
				NullCheck(L_86);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_86, L_88, L_90);
				float L_91 = ___y0;
				float L_92 = V_18;
				float L_93 = __this->___spacing_14;
				___y0 = ((float)il2cpp_codegen_add(L_91, ((float)il2cpp_codegen_add(L_92, L_93))));
			}

IL_022a_1:
			{
				bool L_94;
				L_94 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_16), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_94)
				{
					goto IL_0190_1;
				}
			}
			{
				goto IL_0247;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0247:
	{
		goto IL_03c7;
	}

IL_024d:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_95;
		L_95 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_96;
		L_96 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		V_23 = (bool)((((int32_t)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_95) == ((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_96))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_97 = V_23;
		if (!L_97)
		{
			goto IL_0318;
		}
	}
	{
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_98 = __this->___entries_11;
		NullCheck(L_98);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_99;
		L_99 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_98, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_24 = L_99;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0303:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_24), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02f5_1;
			}

IL_0278_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_100;
				L_100 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_24), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_25 = L_100;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_101 = V_25;
				NullCheck(L_101);
				int32_t L_102;
				L_102 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_101);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_103 = V_0;
				NullCheck(L_103);
				int32_t L_104;
				L_104 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_103, NULL);
				int32_t L_105;
				L_105 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_102, L_104, NULL);
				V_26 = ((float)L_105);
				float L_106 = ___y0;
				float L_107 = V_26;
				V_27 = ((float)il2cpp_codegen_add(L_106, L_107));
				float L_108 = ___height1;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_109 = V_25;
				NullCheck(L_109);
				int32_t L_110;
				L_110 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, L_109);
				RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_111 = V_0;
				NullCheck(L_111);
				int32_t L_112;
				L_112 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_111, NULL);
				int32_t L_113;
				L_113 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_110, L_112, NULL);
				float L_114 = V_26;
				V_28 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_108, ((float)L_113))), L_114));
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_115 = V_25;
				NullCheck(L_115);
				int32_t L_116 = L_115->___stretchHeight_6;
				V_29 = (bool)((!(((uint32_t)L_116) <= ((uint32_t)0)))? 1 : 0);
				bool L_117 = V_29;
				if (!L_117)
				{
					goto IL_02d5_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_118 = V_25;
				float L_119 = V_27;
				float L_120 = V_28;
				NullCheck(L_118);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_118, L_119, L_120);
				goto IL_02f4_1;
			}

IL_02d5_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_121 = V_25;
				float L_122 = V_27;
				float L_123 = V_28;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_124 = V_25;
				NullCheck(L_124);
				float L_125 = L_124->___minHeight_2;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_126 = V_25;
				NullCheck(L_126);
				float L_127 = L_126->___maxHeight_3;
				float L_128;
				L_128 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_123, L_125, L_127, NULL);
				NullCheck(L_121);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_121, L_122, L_128);
			}

IL_02f4_1:
			{
			}

IL_02f5_1:
			{
				bool L_129;
				L_129 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_24), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_129)
				{
					goto IL_0278_1;
				}
			}
			{
				goto IL_0312;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0312:
	{
		goto IL_03c6;
	}

IL_0318:
	{
		float L_130 = ___y0;
		int32_t L_131;
		L_131 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		V_30 = ((float)il2cpp_codegen_subtract(L_130, ((float)L_131)));
		float L_132 = ___height1;
		int32_t L_133;
		L_133 = GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3(__this, NULL);
		V_31 = ((float)il2cpp_codegen_add(L_132, ((float)L_133)));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_134 = __this->___entries_11;
		NullCheck(L_134);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_135;
		L_135 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_134, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_32 = L_135;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03b6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_32), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03ab_1;
			}

IL_033f_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_136;
				L_136 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_32), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_33 = L_136;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_137 = V_33;
				NullCheck(L_137);
				int32_t L_138 = L_137->___stretchHeight_6;
				V_34 = (bool)((!(((uint32_t)L_138) <= ((uint32_t)0)))? 1 : 0);
				bool L_139 = V_34;
				if (!L_139)
				{
					goto IL_0379_1;
				}
			}
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_140 = V_33;
				float L_141 = V_30;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_142 = V_33;
				NullCheck(L_142);
				int32_t L_143;
				L_143 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_142);
				float L_144 = V_31;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_145 = V_33;
				NullCheck(L_145);
				int32_t L_146;
				L_146 = GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3(L_145, NULL);
				NullCheck(L_140);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_140, ((float)il2cpp_codegen_add(L_141, ((float)L_143))), ((float)il2cpp_codegen_subtract(L_144, ((float)L_146))));
				goto IL_03aa_1;
			}

IL_0379_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_147 = V_33;
				float L_148 = V_30;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_149 = V_33;
				NullCheck(L_149);
				int32_t L_150;
				L_150 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, L_149);
				float L_151 = V_31;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_152 = V_33;
				NullCheck(L_152);
				int32_t L_153;
				L_153 = GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3(L_152, NULL);
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_154 = V_33;
				NullCheck(L_154);
				float L_155 = L_154->___minHeight_2;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_156 = V_33;
				NullCheck(L_156);
				float L_157 = L_156->___maxHeight_3;
				float L_158;
				L_158 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_151, ((float)L_153))), L_155, L_157, NULL);
				NullCheck(L_147);
				VirtualActionInvoker2< float, float >::Invoke(11 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_147, ((float)il2cpp_codegen_add(L_148, ((float)L_150))), L_158);
			}

IL_03aa_1:
			{
			}

IL_03ab_1:
			{
				bool L_159;
				L_159 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_32), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_159)
				{
					goto IL_033f_1;
				}
			}
			{
				goto IL_03c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03c5:
	{
	}

IL_03c6:
	{
	}

IL_03c7:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutGroup_ToString_m7859D80D5D81B23684C4309DA0565D4CE1D2680C (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* V_5 = NULL;
	String_t* V_6 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		String_t* L_0 = V_1;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_1;
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0021:
	{
		int32_t L_3 = V_2;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		V_3 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		String_t* L_10;
		L_10 = GUILayoutEntry_ToString_mD3785AC5958EB56ECA6E5D325D166C5F5725E615(__this, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE4A22FB5EC2C885FFEF93EC0880562530642E93F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		float* L_13 = (&__this->___m_ChildMinHeight_25);
		String_t* L_14;
		L_14 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2119843D49FC28C2274616B4EFB48C1D4F29ED02);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_15, NULL);
		V_0 = L_16;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_17 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* L_18 = __this->___entries_11;
		NullCheck(L_18);
		Enumerator_t9F643BC5B08DF7846BA1835E1D8767C0247D2F53 L_19;
		L_19 = List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20(L_18, List_1_GetEnumerator_m14998F11E1FAE434729EE24C6ADD97B82578BA20_RuntimeMethod_var);
		V_4 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454((&V_4), Enumerator_Dispose_m4BC6C2A4027CF77CE3B117587AA176873A863454_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0080_1:
			{
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_20;
				L_20 = Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_inline((&V_4), Enumerator_get_Current_m4EB1D8772633AA6591F1AFD5651F5EB49C7468BC_RuntimeMethod_var);
				V_5 = L_20;
				String_t* L_21 = V_0;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_22 = V_5;
				GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_23 = L_22;
				G_B6_0 = L_23;
				G_B6_1 = L_21;
				if (L_23)
				{
					G_B7_0 = L_23;
					G_B7_1 = L_21;
					goto IL_0094_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				G_B8_1 = G_B6_1;
				goto IL_0099_1;
			}

IL_0094_1:
			{
				NullCheck(G_B7_0);
				String_t* L_24;
				L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
				G_B8_0 = L_24;
				G_B8_1 = G_B7_1;
			}

IL_0099_1:
			{
				String_t* L_25;
				L_25 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B8_1, G_B8_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				V_0 = L_25;
			}

IL_00a5_1:
			{
				bool L_26;
				L_26 = Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13((&V_4), Enumerator_MoveNext_m8BFB1AE4A2A2D9193A2AFD7A74F036CE0FA12D13_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_27, L_28, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_29;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_30 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10 = ((int32_t)il2cpp_codegen_subtract(L_30, 4));
		String_t* L_31 = V_0;
		V_6 = L_31;
		goto IL_00dd;
	}

IL_00dd:
	{
		String_t* L_32 = V_6;
		return L_32;
	}
}
// System.Void UnityEngine.GUILayoutGroup::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__cctor_m0E278D7F613B4E2DFB6D1775426821C39B87BEFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* L_1 = (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)il2cpp_codegen_object_new(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2(L_1, (0.0f), (1.0f), (0.0f), (1.0f), L_0, NULL);
		((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var))->___none_31 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var))->___none_31), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIScrollGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup__ctor_m95351A883B27B71698A4B84815CEA687D109F3FB (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___allowHorizontalScroll_38 = (bool)1;
		__this->___allowVerticalScroll_39 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcWidth_m6B927DBF94A8940301A9FB64190403E5667712CE (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		V_1 = L_1;
		bool L_2 = __this->___allowHorizontalScroll_38;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (0.0f);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = (0.0f);
	}

IL_0031:
	{
		GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B(__this, NULL);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		__this->___calcMinWidth_32 = L_4;
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		__this->___calcMaxWidth_33 = L_5;
		bool L_6 = __this->___allowHorizontalScroll_38;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		float L_8 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_4 = (bool)((((float)L_8) > ((float)(32.0f)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (32.0f);
	}

IL_0079:
	{
		float L_10 = V_0;
		V_5 = (bool)((((int32_t)((((float)L_10) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		float L_12 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
	}

IL_0091:
	{
		float L_13 = V_1;
		V_6 = (bool)((((int32_t)((((float)L_13) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		float L_15 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_15;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetHorizontal_m31FCDD252E67D51FC954C8E2C358BA0EB3AD7601 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___x0, float ___width1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float G_B3_0 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->___needsVerticalScrollbar_41;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = ___width1;
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_000c:
	{
		float L_2 = ___width1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = __this->___verticalScrollbar_43;
		NullCheck(L_3);
		float L_4;
		L_4 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_3, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = __this->___verticalScrollbar_43;
		NullCheck(L_5);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6;
		L_6 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_6, NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_2, L_4)), ((float)L_7)));
	}

IL_002b:
	{
		V_0 = G_B3_0;
		bool L_8 = __this->___allowHorizontalScroll_38;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->___calcMinWidth_32;
		G_B6_0 = ((((float)L_9) < ((float)L_10))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B6_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		__this->___needsHorizontalScrollbar_40 = (bool)1;
		float L_12 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
		float L_13 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_13;
		float L_14 = ___x0;
		float L_15 = __this->___calcMinWidth_32;
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_14, L_15, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_17 = ___width1;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_16, L_17, NULL);
		float L_18 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_18;
		goto IL_00d8;
	}

IL_008e:
	{
		__this->___needsHorizontalScrollbar_40 = (bool)0;
		bool L_19 = __this->___allowHorizontalScroll_38;
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		float L_21 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_21;
		float L_22 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_22;
	}

IL_00ba:
	{
		float L_23 = ___x0;
		float L_24 = V_0;
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_23, L_24, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_26 = ___width1;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_25, L_26, NULL);
		float L_27 = V_0;
		__this->___clientWidth_36 = L_27;
	}

IL_00d8:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcHeight_mCB0CEC4871F6540145949E4CE8242172A75B2E5F (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_1 = L_1;
		bool L_2 = __this->___allowVerticalScroll_39;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (0.0f);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = (0.0f);
	}

IL_0031:
	{
		GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A(__this, NULL);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		__this->___calcMinHeight_34 = L_4;
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		__this->___calcMaxHeight_35 = L_5;
		bool L_6 = __this->___needsHorizontalScrollbar_40;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0099;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = __this->___horizontalScrollbar_42;
		NullCheck(L_8);
		float L_9;
		L_9 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_8, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___horizontalScrollbar_42;
		NullCheck(L_10);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11;
		L_11 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_11, NULL);
		V_4 = ((float)il2cpp_codegen_add(L_9, ((float)L_12)));
		float L_13 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_14 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = ((float)il2cpp_codegen_add(L_13, L_14));
		float L_15 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		float L_16 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = ((float)il2cpp_codegen_add(L_15, L_16));
	}

IL_0099:
	{
		bool L_17 = __this->___allowVerticalScroll_39;
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00fe;
		}
	}
	{
		float L_19 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_6 = (bool)((((float)L_19) > ((float)(32.0f)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (32.0f);
	}

IL_00c4:
	{
		float L_21 = V_0;
		V_7 = (bool)((((int32_t)((((float)L_21) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00dc;
		}
	}
	{
		float L_23 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_23;
	}

IL_00dc:
	{
		float L_24 = V_1;
		V_8 = (bool)((((int32_t)((((float)L_24) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00fd;
		}
	}
	{
		float L_26 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_26;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetVertical_m8609CD909413A7364781818DDE37A314D8795FD6 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___y0, float ___height1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		float L_0 = ___height1;
		V_0 = L_0;
		bool L_1 = __this->___needsHorizontalScrollbar_40;
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = V_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___horizontalScrollbar_42;
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_4, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = __this->___horizontalScrollbar_42;
		NullCheck(L_6);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_7;
		L_7 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_7, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_add(L_5, ((float)L_8)))));
	}

IL_002d:
	{
		bool L_9 = __this->___allowVerticalScroll_39;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = __this->___calcMinHeight_34;
		G_B5_0 = ((((float)L_10) < ((float)L_11))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B5_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0151;
		}
	}
	{
		bool L_13 = __this->___needsHorizontalScrollbar_40;
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		bool L_14 = __this->___needsVerticalScrollbar_41;
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 0;
	}

IL_005d:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00f1;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_16, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_18 = __this->___verticalScrollbar_43;
		NullCheck(L_18);
		float L_19;
		L_19 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_18, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20 = __this->___verticalScrollbar_43;
		NullCheck(L_20);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_21;
		L_21 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_21, NULL);
		__this->___clientWidth_36 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)L_22)));
		float L_23 = __this->___clientWidth_36;
		float L_24 = __this->___calcMinWidth_32;
		V_7 = (bool)((((float)L_23) < ((float)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		float L_26 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_26;
	}

IL_00b6:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_27 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_28;
		L_28 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_27, NULL);
		V_6 = L_28;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_30;
		L_30 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_29, NULL);
		float L_31 = __this->___clientWidth_36;
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, __this, L_30, L_31);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, __this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_32 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_33 = V_6;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_32, L_33, NULL);
	}

IL_00f1:
	{
		float L_34 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_3 = L_34;
		float L_35 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_4 = L_35;
		float L_36 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_36;
		float L_37 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_37;
		float L_38 = ___y0;
		float L_39 = __this->___calcMinHeight_34;
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_38, L_39, NULL);
		float L_40 = V_3;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_40;
		float L_41 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_41;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_42 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_43 = ___height1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_42, L_43, NULL);
		float L_44 = __this->___calcMinHeight_34;
		__this->___clientHeight_37 = L_44;
		goto IL_0196;
	}

IL_0151:
	{
		bool L_45 = __this->___allowVerticalScroll_39;
		V_8 = L_45;
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		float L_47 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_47;
		float L_48 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_48;
	}

IL_0178:
	{
		float L_49 = ___y0;
		float L_50 = V_0;
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_49, L_50, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_51 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_52 = ___height1;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_51, L_52, NULL);
		float L_53 = V_0;
		__this->___clientHeight_37 = L_53;
	}

IL_0196:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ScrollViewState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollViewState__ctor_m9619262C4C72300A8B26011F627C68DF67425E53 (ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SliderState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderState__ctor_m650A11534C71EF571FD631CC3E910B756A16889E (SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TextEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextEditor__ctor_m4AEAC85E4950B709A35F26D1F0DAB3C9D35E3494 (TextEditor_t45128DFCB4C388BF7B8153693C9342D5D2358B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___keyboardOnScreen_0 = (TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyboardOnScreen_0), (void*)(TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A*)NULL);
		__this->___controlID_1 = 0;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUIStyle_get_none_m802F085D5360B8A9D430441F1B5B83ED1496AF5C(NULL);
		__this->___style_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___style_2), (void*)L_0);
		__this->___multiline_3 = (bool)0;
		__this->___hasHorizontalCursorPos_4 = (bool)0;
		__this->___isPasswordField_5 = (bool)0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___scrollOffset_6 = L_1;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_2, NULL);
		__this->___m_Content_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Content_7), (void*)L_2);
		__this->___m_CursorIndex_8 = 0;
		__this->___m_SelectIndex_9 = 0;
		__this->___m_RevealCursor_10 = (bool)0;
		__this->___m_MouseDragSelectsWholeWords_11 = (bool)0;
		__this->___m_DblClickInitPos_12 = 0;
		__this->___m_DblClickSnap_13 = 0;
		__this->___m_bJustSelected_14 = (bool)0;
		__this->___m_iAltCursorPos_15 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_m826905F62A9516B3A64DFCE9748C207506679DE5_inline (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CnextScrollStepTimeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowFunction_Invoke_m27ADD2F0F97D0149CE0B6F6452B3C23229D2CC85_inline (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___id0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LayoutCache_get_id_mC223564DD70C5633178B4A99121331CA58F866A1_inline (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LayoutCache_set_id_m532720FF0F65E8039E37D015910E2F1AE1C9F4FB_inline (LayoutCache_tF844B2FAD6933B78FD5EFEBDE0529BCBAC19BA60* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_inline (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m7C3F78880FDC727F7A3837271C9BBBE12A35FEDA_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___U3CguiIsExitingU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* GUI_get_scrollViewStates_mC465E2368BB8F5741830D2831F78DF7027759694_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollViewStatesU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mDFA3CD122659AE2902BCCD5F89B3CCCA94E041DF_gshared_inline (Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* __this, int32_t ___arg10, intptr_t ___arg21, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
