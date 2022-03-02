#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers,System.Boolean>
struct Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding>
struct IEnumerable_1_tABF27AED8E88C2557464B0E32EAD36CE8213B1B8;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct IEnumerable_1_t8B8B74E4E163F107DF40528FD638F6CB22AC3ACA;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1;
// UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityAction_1_tE32574C71B51DFED36AB235C69E2777243DCB5D2;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Camera/RenderRequest[]
struct RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers[]
struct MessageTypeSubscribersU5BU5D_t6FEDFA812C0CC191A11AB0F3A5C1249D3E6FE306;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10;
// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t4A70F587CADFDFCCC21AE3CBC58F98D7BC925279;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
struct IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB;
// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t0AEAADF4922B6A372CF1F96C61541A853333857D;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tF36DE2DB7764C29B0C4FB1D99A48CD8BACA9633B;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t76F80B6FA73878DE6E2C5F498BDE2B5623E9DE46;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8B8B74E4E163F107DF40528FD638F6CB22AC3ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5800BABE79F189E020006811D912BD6E0E6D9EFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D;
IL2CPP_EXTERN_C String_t* _stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37;
IL2CPP_EXTERN_C String_t* _stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426;
IL2CPP_EXTERN_C String_t* _stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386;
IL2CPP_EXTERN_C String_t* _stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC;
IL2CPP_EXTERN_C String_t* _stringLiteral39FAE74D15788315AB78133F0E7597E1DC324337;
IL2CPP_EXTERN_C String_t* _stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458;
IL2CPP_EXTERN_C String_t* _stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6;
IL2CPP_EXTERN_C String_t* _stringLiteralAA1EF620F523327123017878A2862AB13B665F4E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_m325559AE274ACA2B7355F0BE1B400C62AB4EABFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mF1D8B2462CA570C40A8351378D711DC94573E057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDE8329A946F8EF43EB9721A1AC45A81907D941B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m14531EF2786031C78B1E061B5B04FA1F6690AE63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7A563971F9E35D4ABEB12F34DDCEC8DC4139B3A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mAB457C850FBAB1CF66C7EFAAE9F57EAD0FED6CFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mD687F2BC0FE80692E5F88480DC5B861FE122F82E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m3906587CC8F4CF5B752383CE6EA540B27E67055D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m44F8BB1B1C23E586FD00E7DB14B1264E4B2DA10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mCBDA7F69E2C9DA734337F0525477DE7657557F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m48F43042E64F534160C6E38664EB237E0DA4BAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MessageTypeSubscribersU5BU5D_t6FEDFA812C0CC191A11AB0F3A5C1249D3E6FE306* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MessageTypeSubscribersU5BU5D_t6FEDFA812C0CC191A11AB0F3A5C1249D3E6FE306* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD  : public RuntimeObject
{
};

struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields
{
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableNoStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableNoStencil_0;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableStencil_1;
};

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
struct LightmapperUtils_tA76DFC04F9CA5CE874A5443DD3423DB351FD3D6A  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A  : public RuntimeObject
{
};

struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_DefaultDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_DefaultDelegate_0;
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_RequestLightsDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_RequestLightsDelegate_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9  : public RuntimeObject
{
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_1;
};

// UnityEngine.Rendering.OnDemandRendering
struct OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E  : public RuntimeObject
{
};

struct OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields
{
	// System.Int32 UnityEngine.Rendering.OnDemandRendering::m_RenderFrameInterval
	int32_t ___m_RenderFrameInterval_0;
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
{
};

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B* ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B* ___disconnectionEvent_2;
};

// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.RenderPipeline::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_0;
};

// UnityEngine.Rendering.RenderPipelineManager
struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB  : public RuntimeObject
{
};

struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields
{
	// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___s_CurrentPipelineAsset_0;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.RenderPipelineManager::s_Cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___s_Cameras_1;
	// System.String UnityEngine.Rendering.RenderPipelineManager::s_currentPipelineType
	String_t* ___s_currentPipelineType_2;
	// System.String UnityEngine.Rendering.RenderPipelineManager::s_builtinPipelineName
	String_t* ___s_builtinPipelineName_3;
	// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::s_currentPipeline
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___s_currentPipeline_4;
	// System.Action UnityEngine.Rendering.RenderPipelineManager::activeRenderPipelineTypeChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___activeRenderPipelineTypeChanged_5;
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF  : public RuntimeObject
{
};

struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields
{
	// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::s_Instance
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ___s_Instance_0;
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924  : public RuntimeObject
{
	// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::<implementation>k__BackingField
	RuntimeObject* ___U3CimplementationU3Ek__BackingField_0;
};

// UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com
{
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

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6  : public RuntimeObject
{
	// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbeModes>k__BackingField
	int32_t ___U3CreflectionProbeModesU3Ek__BackingField_1;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<defaultMixedLightingModes>k__BackingField
	int32_t ___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<mixedLightingModes>k__BackingField
	int32_t ___U3CmixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapBakeTypes>k__BackingField
	int32_t ___U3ClightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapsModes>k__BackingField
	int32_t ___U3ClightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlightenLightmapper>k__BackingField
	bool ___U3CenlightenLightmapperU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlighten>k__BackingField
	bool ___U3CenlightenU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<lightProbeProxyVolumes>k__BackingField
	bool ___U3ClightProbeProxyVolumesU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<motionVectors>k__BackingField
	bool ___U3CmotionVectorsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<receiveShadows>k__BackingField
	bool ___U3CreceiveShadowsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbes>k__BackingField
	bool ___U3CreflectionProbesU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbesBlendDistance>k__BackingField
	bool ___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererPriority>k__BackingField
	bool ___U3CrendererPriorityU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendersUIOverlay>k__BackingField
	bool ___U3CrendersUIOverlayU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesEnvironmentLighting>k__BackingField
	bool ___U3CoverridesEnvironmentLightingU3Ek__BackingField_15;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesFog>k__BackingField
	bool ___U3CoverridesFogU3Ek__BackingField_16;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesRealtimeReflectionProbes>k__BackingField
	bool ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesOtherLightingSettings>k__BackingField
	bool ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<editableMaterialRenderQueue>k__BackingField
	bool ___U3CeditableMaterialRenderQueueU3Ek__BackingField_19;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesLODBias>k__BackingField
	bool ___U3CoverridesLODBiasU3Ek__BackingField_20;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesMaximumLODLevel>k__BackingField
	bool ___U3CoverridesMaximumLODLevelU3Ek__BackingField_21;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererProbes>k__BackingField
	bool ___U3CrendererProbesU3Ek__BackingField_22;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<particleSystemInstancing>k__BackingField
	bool ___U3CparticleSystemInstancingU3Ek__BackingField_23;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoAmbientProbeBaking>k__BackingField
	bool ___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoDefaultReflectionProbeBaking>k__BackingField
	bool ___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesShadowmask>k__BackingField
	bool ___U3CoverridesShadowmaskU3Ek__BackingField_26;
	// System.String UnityEngine.Rendering.SupportedRenderingFeatures::<overrideShadowmaskMessage>k__BackingField
	String_t* ___U3CoverrideShadowmaskMessageU3Ek__BackingField_27;
};

struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields
{
	// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___s_Active_0;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4  : public RuntimeObject
{
};

struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<>9
	U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* ___U3CU3E9_0;
};

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t76F80B6FA73878DE6E2C5F498BDE2B5623E9DE46  : public RuntimeObject
{
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0::msgReceived
	bool ___msgReceived_0;
};

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D  : public RuntimeObject
{
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* ___messageCallback_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA 
{
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject* ___DefaultValue_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t4A70F587CADFDFCCC21AE3CBC58F98D7BC925279  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	// System.Int32 UnityEngine.LightBakingOutput::probeOcclusionLightIndex
	int32_t ___probeOcclusionLightIndex_0;
	// System.Int32 UnityEngine.LightBakingOutput::occlusionMaskChannel
	int32_t ___occlusionMaskChannel_1;
	// UnityEngine.LightmapBakeType UnityEngine.LightBakingOutput::lightmapBakeType
	int32_t ___lightmapBakeType_2;
	// UnityEngine.MixedLightingMode UnityEngine.LightBakingOutput::mixedLightingMode
	int32_t ___mixedLightingMode_3;
	// System.Boolean UnityEngine.LightBakingOutput::isBaked
	bool ___isBaked_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};
// Native definition for COM marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_12;
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

// UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.BatchRendererGroup::m_GroupHandle
	intptr_t ___m_GroupHandle_0;
	// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling UnityEngine.Rendering.BatchRendererGroup::m_PerformCulling
	OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* ___m_PerformCulling_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Experimental.GlobalIllumination.Cookie
struct Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizes_2;
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

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
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

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// UnityEngine.Rendering.LODParameters
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.PointLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t0AEAADF4922B6A372CF1F96C61541A853333857D  : public RuntimeObject
{
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0::messageId
	Guid_t ___messageId_0;
};

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tF36DE2DB7764C29B0C4FB1D99A48CD8BACA9633B  : public RuntimeObject
{
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0::messageId
	Guid_t ___messageId_0;
};

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA  : public RuntimeObject
{
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0::messageId
	Guid_t ___messageId_0;
};

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6  : public RuntimeObject
{
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0::messageId
	Guid_t ___messageId_0;
};

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE  : public RuntimeObject
{
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0::messageId
	Guid_t ___messageId_0;
};

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9  : public UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A
{
};

// UnityEngine.Rendering.BatchCullingContext
struct BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Plane> UnityEngine.Rendering.BatchCullingContext::cullingPlanes
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___cullingPlanes_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> UnityEngine.Rendering.BatchCullingContext::batchVisibility
	NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___batchVisibility_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___visibleIndices_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndicesY
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___visibleIndicesY_3;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.BatchCullingContext::lodParameters
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___lodParameters_4;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.BatchCullingContext::cullingMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix_5;
	// System.Single UnityEngine.Rendering.BatchCullingContext::nearPlane
	float ___nearPlane_6;
};

// UnityEngine.Rendering.BatchRendererCullingOutput
struct BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5 
{
	// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererCullingOutput::cullingJobsFence
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobsFence_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.BatchRendererCullingOutput::cullingMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix_1;
	// UnityEngine.Plane* UnityEngine.Rendering.BatchRendererCullingOutput::cullingPlanes
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___cullingPlanes_2;
	// UnityEngine.Rendering.BatchVisibility* UnityEngine.Rendering.BatchRendererCullingOutput::batchVisibility
	BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA* ___batchVisibility_3;
	// System.Int32* UnityEngine.Rendering.BatchRendererCullingOutput::visibleIndices
	int32_t* ___visibleIndices_4;
	// System.Int32* UnityEngine.Rendering.BatchRendererCullingOutput::visibleIndicesY
	int32_t* ___visibleIndicesY_5;
	// System.Int32 UnityEngine.Rendering.BatchRendererCullingOutput::cullingPlanesCount
	int32_t ___cullingPlanesCount_6;
	// System.Int32 UnityEngine.Rendering.BatchRendererCullingOutput::batchVisibilityCount
	int32_t ___batchVisibilityCount_7;
	// System.Int32 UnityEngine.Rendering.BatchRendererCullingOutput::visibleIndicesCount
	int32_t ___visibleIndicesCount_8;
	// System.Single UnityEngine.Rendering.BatchRendererCullingOutput::nearPlane
	float ___nearPlane_9;
};

// UnityEngine.Experimental.Playables.CameraPlayable
struct CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.GraphicsSettings
struct GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
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

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t* ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};

struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// UnityEngine.Playables.ScriptPlayableOutput
struct ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
struct SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934 
{
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SpriteID
	int32_t ___SpriteID_0;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::TextureID
	int32_t ___TextureID_1;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::MaterialID
	int32_t ___MaterialID_2;
	// UnityEngine.Color UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_3;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Transform_4;
	// UnityEngine.Bounds UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___Bounds_5;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Layer
	int32_t ___Layer_6;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingLayer
	int32_t ___SortingLayer_7;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingOrder
	int32_t ___SortingOrder_8;
	// System.UInt64 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SceneCullingMask
	uint64_t ___SceneCullingMask_9;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexData
	intptr_t ___IndexData_10;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexData
	intptr_t ___VertexData_11;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexCount
	int32_t ___IndexCount_12;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexCount
	int32_t ___VertexCount_13;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::ShaderChannelMask
	int32_t ___ShaderChannelMask_14;
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

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
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

// System.Func`2<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers,System.Boolean>
struct Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityAction_1_tE32574C71B51DFED36AB235C69E2777243DCB5D2  : public MulticastDelegate_t
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.FrameData
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output_8;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2  : public MulticastDelegate_t
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB  : public MulticastDelegate_t
{
};

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
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
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 m_Items[1];

	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
};
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SingleOrDefault_TisRuntimeObject_m79F141F20F85C2AC7A37F39B332426E4021F65D4_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::get_MessageTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t MessageTypeSubscribers_get_MessageTypeId_m782C2CCF400D0C5A0FB343FBE1B66C9C09971449 (MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m2EE8CF87D7C3816A57E4D6238DEA0660DB2C7303 (U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFA94ABFA4899828101FD318948A7D1DAF3C5DCBB (Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mF1D8B2462CA570C40A8351378D711DC94573E057 (RuntimeObject* ___source0, Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_m325559AE274ACA2B7355F0BE1B400C62AB4EABFC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m7A8464D749B64BD550FDDF2C92C8D1844986CA86_gshared)(___source0, method);
}
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.PlayerConnection.MessageEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEventArgs__ctor_m66E6239501EEE8FCE1DA218E8189F46FB0669A45 (MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>::Invoke(T0)
inline void UnityEvent_1_Invoke_m44F8BB1B1C23E586FD00E7DB14B1264E4B2DA10B (UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A* __this, MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A*, MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mC3BBDE08CDDEF0DA0811796906BA4A74C287CC2E (U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48 (RuntimeObject* ___source0, Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9* ___predicate1, const RuntimeMethod* method)
{
	return ((  MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* (*) (RuntimeObject*, Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m79F141F20F85C2AC7A37F39B332426E4021F65D4_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers__ctor_mFC17A12701D7DB8739ABF17DB1D5EC41531CFED6 (MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::set_MessageTypeId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers_set_MessageTypeId_m4FA721221C0D7812EA1AFB6C406C0620FF06761B (MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEvent__ctor_mD99E3A2C521C8B2B544F5DF2376258E9613D08EE (MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::Add(T)
inline void List_1_Add_mDE8329A946F8EF43EB9721A1AC45A81907D941B8_inline (List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* __this, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1*, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mEFD5A284D56758F6EA5F97C12FDE739E7E1C2C93 (U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mCBDA7F69E2C9DA734337F0525477DE7657557F8F (UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A* __this, UnityAction_1_tE32574C71B51DFED36AB235C69E2777243DCB5D2* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A*, UnityAction_1_tE32574C71B51DFED36AB235C69E2777243DCB5D2*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::Remove(T)
inline bool List_1_Remove_m14531EF2786031C78B1E061B5B04FA1F6690AE63 (List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* __this, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1*, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::.ctor()
inline void List_1__ctor_m7A563971F9E35D4ABEB12F34DDCEC8DC4139B3A9 (List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChangeEvent__ctor_mEEB8C3ABC40815A0BBC2EEEEAD77ACAE1A6A0554 (ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>::.ctor()
inline void UnityEvent_1__ctor_m48F43042E64F534160C6E38664EB237E0DA4BAF1 (UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, const RuntimeMethod*))UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___g0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, const RuntimeMethod* method) ;
// System.Int32 System.Attribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.RenderTargetIdentifier::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.OnDemandRendering::get_renderFrameInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnDemandRendering_get_renderFrameInterval_mE5574585DE4A02C5A5C0F6770FF86AF1C4F3CCA9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.BatchCullingContext::.ctor(Unity.Collections.NativeArray`1<UnityEngine.Plane>,Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeArray`1<System.Int32>,UnityEngine.Rendering.LODParameters,UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___inCullingPlanes0, NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___inOutBatchVisibility1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndices2, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndicesY3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___inLodParameters4, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___inCullingMatrix5, float ___inNearPlane6, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_ScheduleBatchedJobs_mD80F0AB54AEA1D1A107F4B7B84EE5288FD895A93 (const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.LODParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40 (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Camera>::ToArray()
inline CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Camera>::get_Count()
inline int32_t List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Camera>::get_Item(System.Int32)
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_m3AC4375082D83077EB449AD20EC27B6B458D2EC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Clear()
inline void List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___results0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m89D456720172AE19FEABD43C870EE06BA6FFE885 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::.ctor()
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ____unity_self0, Type_t* ___listType1, RuntimeObject* ___resultList2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___listType0, RuntimeObject* ___resultList1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::TagToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_TagToID_m1FD312CA7913C007B8A80F638C3DCD24B5E47323 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A (int32_t ___mixedMode0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mF97CED14CB16F3193BCB30A9A37F7B8EDFB7AC4D (int32_t ___mixedMode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4 (int32_t ___bakeType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mC712C491E3596EE8C0655538CF08E042EB7B34C8 (int32_t ___bakeType0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) ;
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217 (const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m13BA20519948F798D105B0F5F4FCF0D738CEA5A7 (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___lhs0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___p0, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_mAF77E9AD09CFBA177D85605ACF0B659F7DEE80E4 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___p0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::RGBMultiplied(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___multiplier0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_linear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Color::get_maxColorComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_m29E930EAED6270F37E98DCFDE78417DACEBA26A3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___lightInstanceID0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_bounceIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___intensity1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Light::get_useColorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_colorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Mathf_CorrelatedColorTemperatureToRGB_m92860D984CC8E5F6359CC8959C8BFD927379D45D (float ___kelvin0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.LightBakingOutput UnityEngine.Light::get_bakingOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92 (int32_t ___baketype0, const RuntimeMethod* method) ;
// UnityEngine.LightShadows UnityEngine.Light::get_shadows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cct0, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___lightColor1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m546DD25E1DEFA2B7EECF8D0C5AB7B46F70426138 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Light::get_cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_cookieSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m168917A3FFE696B6B4F2BE2ACFB5C74AEA57AAE0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___dir1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m43F2AE128B08ACD1BE42D1A48FCE9DA5BD1BFF23 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m923E63DD2078497852AEC688E199BE6E129B69C4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___spot1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m6CD2C57089AE0B41970C60A597EAFBF3BE27B3A6 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___rect1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m4DB65098D5061C188791D825490B46EEE305DE6D (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___disc1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B (const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m9C447321AA5B70BA35F3A23DFC772D449D92A315 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8 (int32_t ___minimumDepthBits0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216 (bool ___condition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m0F5051D3999D87A45F6CD5C80E6041F0B0C4C1E7 (int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810 (int32_t ___format0, bool ___wholeImage1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6 (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m07EBBD06394F8590D2B8DFD50B6D1EE94ABB0CBB (U3CU3Ec__DisplayClass12_0_t0AEAADF4922B6A372CF1F96C61541A853333857D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0::<Register>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CRegisterU3Eb__0_mAC55D4E3203F06ED7F9872599F1CF02DF2430859 (U3CU3Ec__DisplayClass12_0_t0AEAADF4922B6A372CF1F96C61541A853333857D* __this, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* ___x0, const RuntimeMethod* method) 
{
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_0 = ___x0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m782C2CCF400D0C5A0FB343FBE1B66C9C09971449(L_0, NULL);
		Guid_t L_2 = __this->___messageId_0;
		bool L_3;
		L_3 = Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27(L_1, L_2, NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m6AA357ABA48CA75462E938084C7953E820CB18AA (U3CU3Ec__DisplayClass13_0_tF36DE2DB7764C29B0C4FB1D99A48CD8BACA9633B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0::<Unregister>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CUnregisterU3Eb__0_m929D945DEF8430CA1E953420F9C28F43198F9FF5 (U3CU3Ec__DisplayClass13_0_tF36DE2DB7764C29B0C4FB1D99A48CD8BACA9633B* __this, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* ___x0, const RuntimeMethod* method) 
{
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_0 = ___x0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m782C2CCF400D0C5A0FB343FBE1B66C9C09971449(L_0, NULL);
		Guid_t L_2 = __this->___messageId_0;
		bool L_3;
		L_3 = Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27(L_1, L_2, NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m75B603A2B5F9AB50F7A52CCD844186FE1A6981AA (U3CU3Ec__DisplayClass20_0_t76F80B6FA73878DE6E2C5F498BDE2B5623E9DE46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0::<BlockUntilRecvMsg>b__0(UnityEngine.Networking.PlayerConnection.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CBlockUntilRecvMsgU3Eb__0_mE65B4F1DEAC961650E79C59F69302B4AC63CE3F1 (U3CU3Ec__DisplayClass20_0_t76F80B6FA73878DE6E2C5F498BDE2B5623E9DE46* __this, MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* ___args0, const RuntimeMethod* method) 
{
	{
		__this->___msgReceived_0 = (bool)1;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::InvokeMessageIdSubscribers(System.Guid,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_m67F47A7AA6EC55A672AD1020F329C4332BEEFFAE (PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB* __this, Guid_t ___messageId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___playerId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_m325559AE274ACA2B7355F0BE1B400C62AB4EABFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mF1D8B2462CA570C40A8351378D711DC94573E057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8B8B74E4E163F107DF40528FD638F6CB22AC3ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5800BABE79F189E020006811D912BD6E0E6D9EFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mAB457C850FBAB1CF66C7EFAAE9F57EAD0FED6CFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m44F8BB1B1C23E586FD00E7DB14B1264E4B2DA10B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39FAE74D15788315AB78133F0E7597E1DC324337);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* V_2 = NULL;
	bool V_3 = false;
	Guid_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* V_6 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* L_0 = (U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m2EE8CF87D7C3816A57E4D6238DEA0660DB2C7303(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* L_1 = V_0;
		Guid_t L_2 = ___messageId0;
		NullCheck(L_1);
		L_1->___messageId_0 = L_2;
		List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* L_3 = __this->___messageTypeSubscribers_0;
		U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* L_4 = V_0;
		Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9* L_5 = (Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9*)il2cpp_codegen_object_new(Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mFA94ABFA4899828101FD318948A7D1DAF3C5DCBB(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mAB457C850FBAB1CF66C7EFAAE9F57EAD0FED6CFF_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mF1D8B2462CA570C40A8351378D711DC94573E057(L_3, L_5, Enumerable_Where_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mF1D8B2462CA570C40A8351378D711DC94573E057_RuntimeMethod_var);
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		bool L_8;
		L_8 = Enumerable_Any_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_m325559AE274ACA2B7355F0BE1B400C62AB4EABFC(L_7, Enumerable_Any_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_m325559AE274ACA2B7355F0BE1B400C62AB4EABFC_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* L_10 = V_0;
		NullCheck(L_10);
		Guid_t L_11 = L_10->___messageId_0;
		V_4 = L_11;
		String_t* L_12;
		L_12 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_4), NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral39FAE74D15788315AB78133F0E7597E1DC324337, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_13, NULL);
		goto IL_00ab;
	}

IL_005b:
	{
		MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* L_14 = (MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9*)il2cpp_codegen_object_new(MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		MessageEventArgs__ctor_m66E6239501EEE8FCE1DA218E8189F46FB0669A45(L_14, NULL);
		MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* L_15 = L_14;
		int32_t L_16 = ___playerId2;
		NullCheck(L_15);
		L_15->___playerId_0 = L_16;
		MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* L_17 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___data1;
		NullCheck(L_17);
		L_17->___data_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___data_1), (void*)L_18);
		V_2 = L_17;
		RuntimeObject* L_19 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::GetEnumerator() */, IEnumerable_1_t8B8B74E4E163F107DF40528FD638F6CB22AC3ACA_il2cpp_TypeInfo_var, L_19);
		V_5 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_21 = V_5;
					if (!L_21)
					{
						goto IL_00aa;
					}
				}
				{
					RuntimeObject* L_22 = V_5;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00aa:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_007a_1:
			{
				RuntimeObject* L_23 = V_5;
				NullCheck(L_23);
				MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_24;
				L_24 = InterfaceFuncInvoker0< MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::get_Current() */, IEnumerator_1_t5800BABE79F189E020006811D912BD6E0E6D9EFE_il2cpp_TypeInfo_var, L_23);
				V_6 = L_24;
				MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_25 = V_6;
				NullCheck(L_25);
				MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* L_26 = L_25->___messageCallback_2;
				MessageEventArgs_t34F726E6463615C0A460FB5CBCCB92F84D83D4F9* L_27 = V_2;
				NullCheck(L_26);
				UnityEvent_1_Invoke_m44F8BB1B1C23E586FD00E7DB14B1264E4B2DA10B(L_26, L_27, UnityEvent_1_Invoke_m44F8BB1B1C23E586FD00E7DB14B1264E4B2DA10B_RuntimeMethod_var);
			}

IL_0093_1:
			{
				RuntimeObject* L_28 = V_5;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_007a_1;
				}
			}
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		return;
	}
}
// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::AddAndCreate(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A* PlayerEditorConnectionEvents_AddAndCreate_mB3B1355A8FDC43E5974CC3DE5BB17CB0C4328308 (PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB* __this, Guid_t ___messageId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDE8329A946F8EF43EB9721A1AC45A81907D941B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mD687F2BC0FE80692E5F88480DC5B861FE122F82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* V_0 = NULL;
	MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* V_1 = NULL;
	bool V_2 = false;
	UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* L_0 = (U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_mC3BBDE08CDDEF0DA0811796906BA4A74C287CC2E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* L_1 = V_0;
		Guid_t L_2 = ___messageId0;
		NullCheck(L_1);
		L_1->___messageId_0 = L_2;
		List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* L_3 = __this->___messageTypeSubscribers_0;
		U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* L_4 = V_0;
		Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9* L_5 = (Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9*)il2cpp_codegen_object_new(Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mFA94ABFA4899828101FD318948A7D1DAF3C5DCBB(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mD687F2BC0FE80692E5F88480DC5B861FE122F82E_RuntimeMethod_var), NULL);
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_6;
		L_6 = Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48(L_3, L_5, Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48_RuntimeMethod_var);
		V_1 = L_6;
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_7 = V_1;
		V_2 = (bool)((((RuntimeObject*)(MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_9 = (MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D*)il2cpp_codegen_object_new(MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MessageTypeSubscribers__ctor_mFC17A12701D7DB8739ABF17DB1D5EC41531CFED6(L_9, NULL);
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_10 = L_9;
		U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* L_11 = V_0;
		NullCheck(L_11);
		Guid_t L_12 = L_11->___messageId_0;
		NullCheck(L_10);
		MessageTypeSubscribers_set_MessageTypeId_m4FA721221C0D7812EA1AFB6C406C0620FF06761B(L_10, L_12, NULL);
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_13 = L_10;
		MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* L_14 = (MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9*)il2cpp_codegen_object_new(MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		MessageEvent__ctor_mD99E3A2C521C8B2B544F5DF2376258E9613D08EE(L_14, NULL);
		NullCheck(L_13);
		L_13->___messageCallback_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___messageCallback_2), (void*)L_14);
		V_1 = L_13;
		List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* L_15 = __this->___messageTypeSubscribers_0;
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_mDE8329A946F8EF43EB9721A1AC45A81907D941B8_inline(L_15, L_16, List_1_Add_mDE8329A946F8EF43EB9721A1AC45A81907D941B8_RuntimeMethod_var);
	}

IL_005b:
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_17 = V_1;
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->___subscriberCount_1;
		NullCheck(L_18);
		L_18->___subscriberCount_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_20 = V_1;
		NullCheck(L_20);
		MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* L_21 = L_20->___messageCallback_2;
		V_3 = L_21;
		goto IL_0072;
	}

IL_0072:
	{
		UnityEvent_1_tC7B50B7E6ECAB9ACFEFAB003FAAFBCC28AB4591A* L_22 = V_3;
		return L_22;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::UnregisterManagedCallback(System.Guid,UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEditorConnectionEvents_UnregisterManagedCallback_m61A82E77AA85A903BE0E534FEE601CABF9DE7809 (PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB* __this, Guid_t ___messageId0, UnityAction_1_tE32574C71B51DFED36AB235C69E2777243DCB5D2* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m14531EF2786031C78B1E061B5B04FA1F6690AE63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m3906587CC8F4CF5B752383CE6EA540B27E67055D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mCBDA7F69E2C9DA734337F0525477DE7657557F8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE* V_0 = NULL;
	MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE* L_0 = (U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_mEFD5A284D56758F6EA5F97C12FDE739E7E1C2C93(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE* L_1 = V_0;
		Guid_t L_2 = ___messageId0;
		NullCheck(L_1);
		L_1->___messageId_0 = L_2;
		List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* L_3 = __this->___messageTypeSubscribers_0;
		U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE* L_4 = V_0;
		Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9* L_5 = (Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9*)il2cpp_codegen_object_new(Func_2_tF80A3CF1E2E81795512E6424FDC0734755C579A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mFA94ABFA4899828101FD318948A7D1DAF3C5DCBB(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m3906587CC8F4CF5B752383CE6EA540B27E67055D_RuntimeMethod_var), NULL);
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_6;
		L_6 = Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48(L_3, L_5, Enumerable_SingleOrDefault_TisMessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D_mAB8FD622A0917AB71DD0CEAAAB4035893467EA48_RuntimeMethod_var);
		V_1 = L_6;
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_7 = V_1;
		V_2 = (bool)((((RuntimeObject*)(MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_006b;
	}

IL_0031:
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_9 = V_1;
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->___subscriberCount_1;
		NullCheck(L_10);
		L_10->___subscriberCount_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_12 = V_1;
		NullCheck(L_12);
		MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* L_13 = L_12->___messageCallback_2;
		UnityAction_1_tE32574C71B51DFED36AB235C69E2777243DCB5D2* L_14 = ___callback1;
		NullCheck(L_13);
		UnityEvent_1_RemoveListener_mCBDA7F69E2C9DA734337F0525477DE7657557F8F(L_13, L_14, UnityEvent_1_RemoveListener_mCBDA7F69E2C9DA734337F0525477DE7657557F8F_RuntimeMethod_var);
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___subscriberCount_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* L_18 = __this->___messageTypeSubscribers_0;
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_19 = V_1;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Remove_m14531EF2786031C78B1E061B5B04FA1F6690AE63(L_18, L_19, List_1_Remove_m14531EF2786031C78B1E061B5B04FA1F6690AE63_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEditorConnectionEvents__ctor_mA1F7A1F05DA196CDC66A85361C5589F504C557B3 (PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A563971F9E35D4ABEB12F34DDCEC8DC4139B3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1* L_0 = (List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1*)il2cpp_codegen_object_new(List_1_tE296B28D7B0CF1A4CFA320F2E438EF22EFAEEEF1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7A563971F9E35D4ABEB12F34DDCEC8DC4139B3A9(L_0, List_1__ctor_m7A563971F9E35D4ABEB12F34DDCEC8DC4139B3A9_RuntimeMethod_var);
		__this->___messageTypeSubscribers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageTypeSubscribers_0), (void*)L_0);
		ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B* L_1 = (ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B*)il2cpp_codegen_object_new(ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConnectionChangeEvent__ctor_mEEB8C3ABC40815A0BBC2EEEEAD77ACAE1A6A0554(L_1, NULL);
		__this->___connectionEvent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionEvent_1), (void*)L_1);
		ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B* L_2 = (ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B*)il2cpp_codegen_object_new(ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConnectionChangeEvent__ctor_mEEB8C3ABC40815A0BBC2EEEEAD77ACAE1A6A0554(L_2, NULL);
		__this->___disconnectionEvent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___disconnectionEvent_2), (void*)L_2);
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEvent__ctor_mD99E3A2C521C8B2B544F5DF2376258E9613D08EE (MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m48F43042E64F534160C6E38664EB237E0DA4BAF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m48F43042E64F534160C6E38664EB237E0DA4BAF1(__this, UnityEvent_1__ctor_m48F43042E64F534160C6E38664EB237E0DA4BAF1_RuntimeMethod_var);
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChangeEvent__ctor_mEEB8C3ABC40815A0BBC2EEEEAD77ACAE1A6A0554 (ConnectionChangeEvent_t248B606ACAD196280E928DF0A51C489CFED3978B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::get_MessageTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t MessageTypeSubscribers_get_MessageTypeId_m782C2CCF400D0C5A0FB343FBE1B66C9C09971449 (MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = __this->___m_messageTypeId_0;
		Guid_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Guid_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::set_MessageTypeId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers_set_MessageTypeId_m4FA721221C0D7812EA1AFB6C406C0620FF06761B (MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&___value0), NULL);
		__this->___m_messageTypeId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_messageTypeId_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers__ctor_mFC17A12701D7DB8739ABF17DB1D5EC41531CFED6 (MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___subscriberCount_1 = 0;
		MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9* L_0 = (MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9*)il2cpp_codegen_object_new(MessageEvent_tBF02D60FEABA2052B9970B1DEF2322E38ADE61C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MessageEvent__ctor_mD99E3A2C521C8B2B544F5DF2376258E9613D08EE(L_0, NULL);
		__this->___messageCallback_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageCallback_2), (void*)L_0);
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m2EE8CF87D7C3816A57E4D6238DEA0660DB2C7303 (U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0::<InvokeMessageIdSubscribers>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mAB457C850FBAB1CF66C7EFAAE9F57EAD0FED6CFF (U3CU3Ec__DisplayClass6_0_t0EBD5A7FDF9301638A6960A9066F69AAB97E7DBA* __this, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* ___x0, const RuntimeMethod* method) 
{
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_0 = ___x0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m782C2CCF400D0C5A0FB343FBE1B66C9C09971449(L_0, NULL);
		Guid_t L_2 = __this->___messageId_0;
		bool L_3;
		L_3 = Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27(L_1, L_2, NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mC3BBDE08CDDEF0DA0811796906BA4A74C287CC2E (U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0::<AddAndCreate>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mD687F2BC0FE80692E5F88480DC5B861FE122F82E (U3CU3Ec__DisplayClass7_0_tAD01565A28D27906B1398728A64E6208EA1D1EC6* __this, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* ___x0, const RuntimeMethod* method) 
{
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_0 = ___x0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m782C2CCF400D0C5A0FB343FBE1B66C9C09971449(L_0, NULL);
		Guid_t L_2 = __this->___messageId_0;
		bool L_3;
		L_3 = Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27(L_1, L_2, NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mEFD5A284D56758F6EA5F97C12FDE739E7E1C2C93 (U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0::<UnregisterManagedCallback>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m3906587CC8F4CF5B752383CE6EA540B27E67055D (U3CU3Ec__DisplayClass8_0_t6145C4A1A817F6510AB01CF31F9DBAF4F42452EE* __this, MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* ___x0, const RuntimeMethod* method) 
{
	{
		MessageTypeSubscribers_t1FA1C0DBEE77D28856F8BB97C784EB77920C308D* L_0 = ___x0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m782C2CCF400D0C5A0FB343FBE1B66C9C09971449(L_0, NULL);
		Guid_t L_2 = __this->___messageId_0;
		bool L_3;
		L_3 = Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27(L_1, L_2, NULL);
		return L_3;
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
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValueAttribute__ctor_mC1104F2F0A2CD67CE308CD7E5C1CCE74482C1BB4 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->___DefaultValue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DefaultValue_0), (void*)L_0);
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___DefaultValue_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultValueAttribute_Equals_m6E5B33344C4FD2FC4775A657481B63F82F18B925 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121*)IsInstClass((RuntimeObject*)L_0, DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0041;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___DefaultValue_0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24(L_5, NULL);
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0041;
	}

IL_002d:
	{
		RuntimeObject* L_7 = __this->___DefaultValue_0;
		DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = DefaultValueAttribute_get_Value_m8FC7A517D291CDDB7B5D17E811F5CB11FCF59D24(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_9);
		V_2 = L_10;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultValueAttribute_GetHashCode_m6F99553C7E76E711DCA6368417F66898F5AF6359 (DefaultValueAttribute_t7F65EB0CEA9E405BA1438EA6D6077973280CE121* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___DefaultValue_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2;
		L_2 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		V_1 = L_2;
		goto IL_0025;
	}

IL_0017:
	{
		RuntimeObject* L_3 = __this->___DefaultValue_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_5 = V_1;
		return L_5;
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
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcludeFromDocsAttribute__ctor_mF280A16634D72D09D550C2BA2294D9234D50C771 (ExcludeFromDocsAttribute_t4A70F587CADFDFCCC21AE3CBC58F98D7BC925279* __this, const RuntimeMethod* method) 
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
// System.String UnityEngine.Rendering.RenderTargetIdentifier::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___m_Type_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = __this->___m_NameID_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = __this->___m_InstanceID_2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		intptr_t L_14 = __this->___m_BufferPointer_3;
		intptr_t L_15 = L_14;
		RuntimeObject* L_16 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___m_MipLevel_4;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = __this->___m_CubeFace_5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26 = __this->___m_DepthSlice_6;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = UnityString_Format_m560566B98CA1AC19A6C2B424AE640F6E95D3B9B0(_stringLiteral4C6CE5DF96D354231E70A806FC48C28A97F4E4F6, L_25, NULL);
		V_0 = L_29;
		goto IL_0076;
	}

IL_0076:
	{
		String_t* L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RenderTargetIdentifier_ToString_mA0B5CBC27159C4257939A5CAC6CEACE65AA6D36A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = (&__this->___m_Type_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_0, NULL);
		int32_t* L_2 = (&__this->___m_NameID_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		int32_t* L_4 = (&__this->___m_InstanceID_2);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)23))), L_3)), ((int32_t)23))), L_5));
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RenderTargetIdentifier_GetHashCode_m255E1EFD7BFC22B1B4464F9EF3346386DA328B86(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = __this->___m_Type_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_1 = ___rhs0;
		int32_t L_2 = L_1.___m_Type_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_3 = __this->___m_NameID_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_4 = ___rhs0;
		int32_t L_5 = L_4.___m_NameID_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_6 = __this->___m_InstanceID_2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_7 = ___rhs0;
		int32_t L_8 = L_7.___m_InstanceID_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_006a;
		}
	}
	{
		intptr_t L_9 = __this->___m_BufferPointer_3;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_10 = ___rhs0;
		intptr_t L_11 = L_10.___m_BufferPointer_3;
		bool L_12;
		L_12 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13 = __this->___m_MipLevel_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_14 = ___rhs0;
		int32_t L_15 = L_14.___m_MipLevel_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = __this->___m_CubeFace_5;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_17 = ___rhs0;
		int32_t L_18 = L_17.___m_CubeFace_5;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_19 = __this->___m_DepthSlice_6;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_20 = ___rhs0;
		int32_t L_21 = L_20.___m_DepthSlice_6;
		G_B8_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_006b;
	}

IL_006a:
	{
		G_B8_0 = 0;
	}

IL_006b:
	{
		V_0 = (bool)G_B8_0;
		goto IL_006e;
	}

IL_006e:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9_AdjustorThunk (RuntimeObject* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs0, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9(_thisAdjusted, ___rhs0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0026;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((*(RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)((RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)(RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*)UnBox(L_2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_il2cpp_TypeInfo_var))));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_3 = V_0;
		bool L_4;
		L_4 = RenderTargetIdentifier_Equals_m859988BBC3D58D5C2AEA18C2CCCAF7009A5499D9(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B*>(__this + _offset);
	bool _returnValue;
	_returnValue = RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB (const RuntimeMethod* method) 
{
	typedef bool (*GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB_ftn) ();
	static GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Rendering.OnDemandRendering::get_renderFrameInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnDemandRendering_get_renderFrameInterval_mE5574585DE4A02C5A5C0F6770FF86AF1C4F3CCA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields*)il2cpp_codegen_static_fields_for(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var))->___m_RenderFrameInterval_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.OnDemandRendering::GetRenderFrameInterval(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDemandRendering_GetRenderFrameInterval_mEE92E09F4366D8D3F2224AB0EBA6F1E57CD13F40 (int32_t* ___frameInterval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___frameInterval0;
		il2cpp_codegen_runtime_class_init_inline(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = OnDemandRendering_get_renderFrameInterval_mE5574585DE4A02C5A5C0F6770FF86AF1C4F3CCA9(NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		return;
	}
}
// System.Void UnityEngine.Rendering.OnDemandRendering::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDemandRendering__cctor_mBAE9AC06F698C374E748EF75B23B690656F88A47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_StaticFields*)il2cpp_codegen_static_fields_for(OnDemandRendering_t3ED2CE20D351518F912948DF1D2D03079F5CE34E_il2cpp_TypeInfo_var))->___m_RenderFrameInterval_0 = 1;
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
// System.Void UnityEngine.Rendering.BatchCullingContext::.ctor(Unity.Collections.NativeArray`1<UnityEngine.Plane>,Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeArray`1<System.Int32>,UnityEngine.Rendering.LODParameters,UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___inCullingPlanes0, NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___inOutBatchVisibility1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndices2, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndicesY3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___inLodParameters4, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___inCullingMatrix5, float ___inNearPlane6, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_0 = ___inCullingPlanes0;
		__this->___cullingPlanes_0 = L_0;
		NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_1 = ___inOutBatchVisibility1;
		__this->___batchVisibility_1 = L_1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2 = ___outVisibleIndices2;
		__this->___visibleIndices_2 = L_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3 = ___outVisibleIndicesY3;
		__this->___visibleIndicesY_3 = L_3;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_4 = ___inLodParameters4;
		__this->___lodParameters_4 = L_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___inCullingMatrix5;
		__this->___cullingMatrix_5 = L_5;
		float L_6 = ___inNearPlane6;
		__this->___nearPlane_6 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___inCullingPlanes0, NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 ___inOutBatchVisibility1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndices2, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___outVisibleIndicesY3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___inLodParameters4, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___inCullingMatrix5, float ___inNearPlane6, const RuntimeMethod* method)
{
	BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659*>(__this + _offset);
	BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449(_thisAdjusted, ___inCullingPlanes0, ___inOutBatchVisibility1, ___outVisibleIndices2, ___outVisibleIndicesY3, ___inLodParameters4, ___inCullingMatrix5, ___inNearPlane6, method);
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
// Conversion methods for marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	Exception_t* ___m_PerformCulling_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_PerformCulling' of type 'BatchRendererGroup': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCulling_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.BatchRendererGroup
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Rendering.BatchRendererGroup::InvokeOnPerformCulling(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchRendererCullingOutput&,UnityEngine.Rendering.LODParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchRendererGroup_InvokeOnPerformCulling_m482BDBB3B02D5C2E66A37C1C4F76A1CB933864F8 (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___group0, BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* ___context1, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* ___lodParameters2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_0 = ___context1;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_1 = L_0->___cullingPlanes_2;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_2 = ___context1;
		int32_t L_3 = L_2->___cullingPlanesCount_6;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6((void*)L_1, L_3, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m85AAC4A4CCBD44DF7126AEB35BDF95A3F94442A6_RuntimeMethod_var);
		V_0 = L_4;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_5 = ___context1;
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA* L_6 = L_5->___batchVisibility_3;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_7 = ___context1;
		int32_t L_8 = L_7->___batchVisibilityCount_7;
		NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_9;
		L_9 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C((void*)L_6, L_8, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA9DF0EF69C7087A4DE0ED3E8B3445189A73D959C_RuntimeMethod_var);
		V_1 = L_9;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_10 = ___context1;
		int32_t* L_11 = L_10->___visibleIndices_4;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_12 = ___context1;
		int32_t L_13 = L_12->___visibleIndicesCount_8;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14;
		L_14 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724((void*)L_11, L_13, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var);
		V_2 = L_14;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_15 = ___context1;
		int32_t* L_16 = L_15->___visibleIndicesY_5;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_17 = ___context1;
		int32_t L_18 = L_17->___visibleIndicesCount_8;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_19;
		L_19 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724((void*)L_16, L_18, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3ACF6A1E47D345E814CEF2BDAD94A21A8AE66724_RuntimeMethod_var);
		V_3 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				JobHandle_ScheduleBatchedJobs_mD80F0AB54AEA1D1A107F4B7B84EE5288FD895A93(NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_20 = ___context1;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_21 = ___group0;
			NullCheck(L_21);
			OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* L_22 = L_21->___m_PerformCulling_1;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_23 = ___group0;
			NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_24 = V_0;
			NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_25 = V_1;
			NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_26 = V_2;
			NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_27 = V_3;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* L_28 = ___lodParameters2;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_29 = (*(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)L_28);
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_30 = ___context1;
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = L_30->___cullingMatrix_1;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_32 = ___context1;
			float L_33 = L_32->___nearPlane_9;
			BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 L_34;
			memset((&L_34), 0, sizeof(L_34));
			BatchCullingContext__ctor_m4E95A80E46EB29A21AB9AD64C2D1CC5891281449((&L_34), L_24, L_25, L_26, L_27, L_29, L_31, L_33, /*hidden argument*/NULL);
			NullCheck(L_22);
			JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_35;
			L_35 = OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_inline(L_22, L_23, L_34, NULL);
			L_20->___cullingJobsFence_0 = L_35;
			goto IL_0087;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
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
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_Multicast(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* currentDelegate = reinterpret_cast<OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2*>(delegatesToInvoke[i]);
		typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___rendererGroup0, ___cullingContext1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_Open(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___rendererGroup0, ___cullingContext1, method);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenStaticInvoker(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(__this->___method_ptr_0, method, NULL, ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_ClosedStaticInvoker(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(il2cpp_codegen_method_get_slot(method), ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(method, ___rendererGroup0, ___cullingContext1);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 >::Invoke(method, ___rendererGroup0, ___cullingContext1);
}
// System.Void UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPerformCulling__ctor_mFB91FB8D6D713AC39AFB921AF1C23A50EC80529B (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_Multicast;
}
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22 (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___rendererGroup0, ___cullingContext1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(UnityEngine.Rendering.LODParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = __this->___m_IsOrthographic_0;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_1 = ___other0;
		int32_t L_2 = L_1.___m_IsOrthographic_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0058;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___m_CameraPosition_1);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_4 = ___other0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___m_CameraPosition_1;
		bool L_6;
		L_6 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		float* L_7 = (&__this->___m_FieldOfView_2);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_8 = ___other0;
		float L_9 = L_8.___m_FieldOfView_2;
		bool L_10;
		L_10 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		float* L_11 = (&__this->___m_OrthoSize_3);
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_12 = ___other0;
		float L_13 = L_12.___m_OrthoSize_3;
		bool L_14;
		L_14 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_15 = __this->___m_CameraPixelHeight_4;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_16 = ___other0;
		int32_t L_17 = L_16.___m_CameraPixelHeight_4;
		G_B6_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B6_0 = 0;
	}

IL_0059:
	{
		V_0 = (bool)G_B6_0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  bool LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F_AdjustorThunk (RuntimeObject* __this, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___other0, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	bool _returnValue;
	_returnValue = LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.LODParameters::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		bool L_4;
		L_4 = LODParameters_Equals_mAD45601A9E881620B23A7922D8AA5AFBC91E0B9F(__this, ((*(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)((LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)UnBox(L_3, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	bool _returnValue;
	_returnValue = LODParameters_Equals_mF956A067D82497A00AC8234322CD848E6FB7BADE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.LODParameters::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40 (LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___m_IsOrthographic_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___m_CameraPosition_1);
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_2, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
		int32_t L_4 = V_0;
		float* L_5 = (&__this->___m_FieldOfView_2);
		int32_t L_6;
		L_6 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_5, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)397)))^L_6));
		int32_t L_7 = V_0;
		float* L_8 = (&__this->___m_OrthoSize_3);
		int32_t L_9;
		L_9 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_8, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)397)))^L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___m_CameraPixelHeight_4;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)397)))^L_11));
		int32_t L_12 = V_0;
		V_1 = L_12;
		goto IL_005e;
	}

IL_005e:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LODParameters_GetHashCode_mECFCEAAAC935759A99C30C69BBC99A1148F46F40(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_ProcessRenderRequests_m1303438384D0A5857A147C280A1AF0E16E488908 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Render_m41E15C2221365D92636651792FBDAD1A04E8AF1A (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_0 = ___context0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_1 = ___cameras1;
		NullCheck(L_1);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_2;
		L_2 = List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A(L_1, List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* >::Invoke(4 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]) */, __this, L_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___context0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___cameras1;
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* >::Invoke(6 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>) */, __this, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___cameras1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B5_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B3_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B4_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B6_2 = NULL;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___context0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___cameras1;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = __this;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_6 = ___cameras1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline(L_6, List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_8 = ___cameras1;
		NullCheck(L_8);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6(L_8, 0, List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0033:
	{
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_10 = ___renderRequests2;
		NullCheck(G_B6_2);
		VirtualActionInvoker3< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* >::Invoke(5 /* System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>) */, G_B6_2, G_B6_1, G_B6_0, L_10);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_m581E2B33EF0CCAF2C3E7BD71AE32B4974D259286 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___disposing0, const RuntimeMethod* method) 
{
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
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_0 = NULL;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		V_0 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
	}
	try
	{// begin try (depth: 1)
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = VirtualFuncInvoker0< RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* >::Invoke(24 /* UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::CreatePipeline() */, __this);
		V_0 = L_0;
		goto IL_0065;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		{
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_1 = V_1;
			NullCheck(L_1);
			RuntimeObject* L_2;
			L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_1);
			NullCheck(L_2);
			bool L_3;
			L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(2 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!L_3)
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_4);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))))
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_7 = V_1;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			G_B6_0 = ((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0057;
		}

IL_0056:
		{
			G_B6_0 = 1;
		}

IL_0057:
		{
			V_2 = (bool)G_B6_0;
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_0062;
			}
		}
		{
			Exception_t* L_11 = V_1;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_11, NULL);
		}

IL_0062:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0065;
		}
	}// end catch (depth: 1)

IL_0065:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_12 = V_0;
		V_3 = L_12;
		goto IL_0069;
	}

IL_0069:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_13 = V_3;
		return L_13;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_renderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_renderingLayerMaskNames_mC0978F38B2EADD1462593AC6D8395E612CB1329D (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_prefixedRenderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_prefixedRenderingLayerMaskNames_m89254E02D74CC6FC9320104B8A1748534FE55F6B (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultMaterial_mCF112570E7B47208A0B700BA97B33CAE6713D323 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveShader_m261A0788B4F73AFC5A50953878552BC3BFF8B674 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveTransparentShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveTransparentShader_m6E2A2439FCB378F64DC46CB6DB517A1661A306F8 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveMaskedShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveMaskedShader_m42DB9A70B290E217B91616E9274C9B7E58D54362 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailLitShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailLitShader_m74F2FA112CD18493E7003F6F711AA09A8C930136 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassShader_mBE126045BF9048B59CE56D1BD9C69C3DEB4CDD96 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassBillboardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassBillboardShader_mE233539926B92ADB7A057C34CBCD7E51823C75A2 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultParticleMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultParticleMaterial_mC68CA6787815E00CF501F268F34DA0B3C83B3013 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultLineMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultLineMaterial_mB4DD122B043417F3810FEAAA74E79B369A26B484 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultTerrainMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultTerrainMaterial_m129D75CFE9689112452AA911C24BEE4939ADB520 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIMaterial_mBB9F6694EEEB97AC6140C094A48743660A0DAF04 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIOverdrawMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIOverdrawMaterial_m19832E76629C0AFC18F0D61C5C1CC47533200038 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIETC1SupportedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIETC1SupportedMaterial_m2D1DC4B89F59283C8AE3101F3DC05D88C10D4C10 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaterial_m2418C7E1A0974B2A06CF3BE81590C7B0DF1DB113 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaskMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaskMaterial_mEE67105F80768BDFD1C93E8709FEBF2D4561E14E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultShader_m633AD6A97B2D1D436E42920D766B1283C1FED858 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree7Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree7Shader_mCEF3795C9E36F0A9D9A3CE29824790B172637252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree8Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree8Shader_mAEB3D02FC0A0016BAC5C22BC1967827403E5C17A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnValidate_mD160C7BDEA559BAF3DDA48B4819307E07B377F52 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E(NULL);
		RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063(__this, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnDisable_mE99CEED707BDC901AD37DC976FA3A3A313E7E00C (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E(NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset__ctor_mC45BECAED54BEDC4555AF010323EABF49BA7B78A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		String_t* L_1 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_000b:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_2 = ___value0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2), (void*)G_B3_0);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_5 = ___value0;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4), (void*)L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::OnActiveRenderPipelineTypeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_OnActiveRenderPipelineTypeChanged_mC5AC4C431D84C5F030CA2DF6B46C19EFA87E92EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___activeRenderPipelineTypeChanged_5;
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
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m89D456720172AE19FEABD43C870EE06BA6FFE885 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1 = ___pipelineAsset0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_0) == ((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E(NULL);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_4 = ___pipelineAsset0;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)L_4);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m6FF252A0C2CFDEDFB4A5B5EF33B86B5EDFBAFD2E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4;
		L_4 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		NullCheck(L_4);
		RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179(L_4, NULL);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL);
		RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF((RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_5 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_set_active_m3AC4375082D83077EB449AD20EC27B6B458D2EC4(L_5, NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.String UnityEngine.Rendering.RenderPipelineManager::GetCurrentPipelineAssetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderPipelineManager_GetCurrentPipelineAssetType_mD70AE9CC75AF741F336A494688F69B9AC666123C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::DoRenderLoop_Internal(UnityEngine.Rendering.RenderPipelineAsset,System.IntPtr,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_DoRenderLoop_Internal_m7FB9F81FF54E716454A4888990CE46220DBAD6CC (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipe0, intptr_t ___loopPtr1, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___renderRequests2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___pipe0;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063(L_0, NULL);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		V_1 = (bool)((((RuntimeObject*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_006e;
	}

IL_0016:
	{
		intptr_t L_3 = ___loopPtr1;
		ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5((&V_0), L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_4 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_4);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_4, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189((&V_0), L_5, NULL);
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_6 = ___renderRequests2;
		V_2 = (bool)((((RuntimeObject*)(List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_8;
		L_8 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_9 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_10 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_8);
		RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE(L_8, L_9, L_10, NULL);
		goto IL_0063;
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_11;
		L_11 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_12 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_13 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_14 = ___renderRequests2;
		NullCheck(L_11);
		RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57(L_11, L_12, L_13, L_14, NULL);
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_15 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_15);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_15, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
	}

IL_006e:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m399F65B962C902B1FFC331294E3CA4C469BDC063 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___pipelineAsset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___pipelineAsset0;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_HandleRenderPipelineChange_m89D456720172AE19FEABD43C870EE06BA6FFE885(L_0, NULL);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_3;
		L_3 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4;
		L_4 = RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_4, NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B6_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_7 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		NullCheck(L_7);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_8;
		L_8 = RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252(L_7, NULL);
		RenderPipelineManager_set_currentPipeline_m58F8CDDA2C8A138F355F7672BE5382C62D2C55DF(L_8, NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager__cctor_mE2CB9B1D60D04CAEEBC0130E5B99644870F90BF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_0, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1), (void*)L_0);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3 = _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3), (void*)_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4), (void*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL);
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
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___listType0, RuntimeObject* ___resultList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___listType0;
		RuntimeObject* L_1 = ___resultList1;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8_AdjustorThunk (RuntimeObject* __this, Type_t* ___listType0, RuntimeObject* ___resultList1, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(_thisAdjusted, ___listType0, ___resultList1, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ptr0;
		__this->___m_Ptr_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5_AdjustorThunk (RuntimeObject* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5(_thisAdjusted, ___ptr0, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___results0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_2 = ___results0;
		ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189_AdjustorThunk (RuntimeObject* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___results0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189(_thisAdjusted, ___results0, method);
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t* L_0 = (&__this->___m_Ptr_1);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_1 = ___other0;
		intptr_t L_2 = L_1.___m_Ptr_1;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E(L_0, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D_AdjustorThunk (RuntimeObject* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___other0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		bool L_4;
		L_4 = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(__this, ((*(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)UnBox(L_3, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Ptr_1);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__cctor_mC3B278224EBBC167C90B484295DB8563BED64D6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B((&L_0), _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, /*hidden argument*/NULL);
		((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var))->___kRenderTypeTag_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ____unity_self0, Type_t* ___listType1, RuntimeObject* ___resultList2, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Type_t*, RuntimeObject*);
	static ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_GetCameras_Internal_Injected_mE2D2D9C806F8AEC694BF42009B6878765F6A28FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)");
	_il2cpp_icall_func(____unity_self0, ___listType1, ___resultList2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1;
		L_1 = Shader_TagToID_m1FD312CA7913C007B8A80F638C3DCD24B5E47323(L_0, NULL);
		__this->___m_Id_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B(_thisAdjusted, ___name0, method);
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(__this, ((*(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)UnBox(L_1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Id_0;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_1 = ___other0;
		int32_t L_2 = L_1.___m_Id_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0_AdjustorThunk (RuntimeObject* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___other0, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)2079669542);
		int32_t L_0 = V_0;
		int32_t* L_1 = (&__this->___m_Id_0);
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)-1521134295))), L_2));
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_0 = (bool)((((RuntimeObject*)(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_m3AC4375082D83077EB449AD20EC27B6B458D2EC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackMixedLightingModeByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackMixedLightingModeByRef_m79883C2C0259DA7AF9B43DC1C6621EF8C2C882AB (intptr_t ___fallbackModePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___fallbackModePtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (int32_t*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2;
		L_2 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_4, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_6, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_8;
		L_8 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_8, NULL);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_7))) == ((int32_t)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_11, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0060;
	}

IL_0056:
	{
		int32_t* L_16 = V_0;
		*((int32_t*)L_16) = (int32_t)2;
		goto IL_0065;
	}

IL_005b:
	{
		int32_t* L_17 = V_0;
		*((int32_t*)L_17) = (int32_t)1;
		goto IL_0065;
	}

IL_0060:
	{
		int32_t* L_18 = V_0;
		*((int32_t*)L_18) = (int32_t)0;
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_008e;
	}

IL_0067:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A(2, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_21 = V_0;
		*((int32_t*)L_21) = (int32_t)2;
		goto IL_008e;
	}

IL_0079:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A(1, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_24 = V_0;
		*((int32_t*)L_24) = (int32_t)1;
		goto IL_008e;
	}

IL_008b:
	{
		int32_t* L_25 = V_0;
		*((int32_t*)L_25) = (int32_t)0;
	}

IL_008e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m1FAB223D6188E1830288D98A7622B549F545881A (int32_t ___mixedMode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___mixedMode0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mF97CED14CB16F3193BCB30A9A37F7B8EDFB7AC4D(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mF97CED14CB16F3193BCB30A9A37F7B8EDFB7AC4D (int32_t ___mixedMode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool* G_B4_0 = NULL;
	bool* G_B3_0 = NULL;
	bool* G_B10_0 = NULL;
	bool* G_B6_0 = NULL;
	bool* G_B5_0 = NULL;
	bool* G_B8_0 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	bool* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	bool* G_B11_1 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4(1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_4 = V_0;
		*((int8_t*)L_4) = (int8_t)0;
		goto IL_005b;
	}

IL_001b:
	{
		bool* L_5 = V_0;
		int32_t L_6 = ___mixedMode0;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_7;
		L_7 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_7, NULL);
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)((int32_t)L_8&1))) == ((int32_t)1)))
		{
			G_B10_0 = G_B3_0;
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_9 = ___mixedMode0;
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_10;
		L_10 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_10, NULL);
		G_B6_0 = G_B5_0;
		if ((((int32_t)((int32_t)((int32_t)L_11&2))) == ((int32_t)2)))
		{
			G_B10_0 = G_B5_0;
			goto IL_0059;
		}
	}

IL_0041:
	{
		int32_t L_12 = ___mixedMode0;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_13;
		L_13 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_13, NULL);
		G_B9_0 = ((((int32_t)((int32_t)((int32_t)L_14&4))) == ((int32_t)4))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005a:
	{
		*((int8_t*)G_B11_1) = (int8_t)G_B11_0;
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4 (int32_t ___bakeType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___bakeType0;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mC712C491E3596EE8C0655538CF08E042EB7B34C8(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mC712C491E3596EE8C0655538CF08E042EB7B34C8 (int32_t ___bakeType0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		int32_t L_2 = ___bakeType0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mCBE5A13BA92867DA66DCDF23121473FD4B879CA4(2, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_6, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		bool* L_9 = V_0;
		*((int8_t*)L_9) = (int8_t)0;
		goto IL_0064;
	}

IL_0035:
	{
	}

IL_0036:
	{
		bool* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline(L_11, NULL);
		int32_t L_13 = ___bakeType0;
		int32_t L_14 = ___bakeType0;
		*((int8_t*)L_10) = (int8_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)L_14))? 1 : 0);
		int32_t L_15 = ___bakeType0;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_16;
		L_16 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline(L_16, NULL);
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B10_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		bool* L_19 = V_0;
		*((int8_t*)L_19) = (int8_t)0;
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m494FCDC548A34F66D7A71A81D0C38EFBF6459AEB (int32_t ___mode0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline(L_3, NULL);
		int32_t L_5 = ___mode0;
		int32_t L_6 = ___mode0;
		*((int8_t*)L_2) = (int8_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapperSupportedByRef(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapperSupportedByRef_mFC8FCBE9FA4D3E210CBB8BA711FF0AE72648285A (int32_t ___lightmapper0, intptr_t ___isSupportedPtr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		int32_t L_3 = ___lightmapper0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m1AE190FFF1E73E64DC2F9CF21F44656056F2B2C9 (intptr_t ___isSupportedPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoAmbientProbeBakingSupported_m2D00A73CB387BEDAFADF211A0E8579ACB544A6BC (intptr_t ___isSupportedPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoDefaultReflectionProbeBakingSupported_m226DAFBB7099877D23B8273789A1FAC2130DDCC0 (intptr_t ___isSupportedPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___isSupportedPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_mEE06ADFCF05E5111ED1D42BA3E893F8386C96480(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackLightmapperByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackLightmapperByRef_mE8CE8E18176F1DF7FB7A315C3FF41029BFBDCA63 (intptr_t ___lightmapperPtr0, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		intptr_t L_0 = ___lightmapperPtr0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)1;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CreflectionProbeModesU3Ek__BackingField_1 = 0;
		__this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2 = 0;
		__this->___U3CmixedLightingModesU3Ek__BackingField_3 = 7;
		__this->___U3ClightmapBakeTypesU3Ek__BackingField_4 = 7;
		__this->___U3ClightmapsModesU3Ek__BackingField_5 = 1;
		__this->___U3CenlightenLightmapperU3Ek__BackingField_6 = (bool)1;
		__this->___U3CenlightenU3Ek__BackingField_7 = (bool)1;
		__this->___U3ClightProbeProxyVolumesU3Ek__BackingField_8 = (bool)1;
		__this->___U3CmotionVectorsU3Ek__BackingField_9 = (bool)1;
		__this->___U3CreceiveShadowsU3Ek__BackingField_10 = (bool)1;
		__this->___U3CreflectionProbesU3Ek__BackingField_11 = (bool)1;
		__this->___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12 = (bool)1;
		__this->___U3CrendererPriorityU3Ek__BackingField_13 = (bool)0;
		__this->___U3CoverridesEnvironmentLightingU3Ek__BackingField_15 = (bool)0;
		__this->___U3CoverridesFogU3Ek__BackingField_16 = (bool)0;
		__this->___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17 = (bool)0;
		__this->___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18 = (bool)0;
		__this->___U3CeditableMaterialRenderQueueU3Ek__BackingField_19 = (bool)1;
		__this->___U3CoverridesLODBiasU3Ek__BackingField_20 = (bool)0;
		__this->___U3CoverridesMaximumLODLevelU3Ek__BackingField_21 = (bool)0;
		__this->___U3CrendererProbesU3Ek__BackingField_22 = (bool)1;
		__this->___U3CparticleSystemInstancingU3Ek__BackingField_23 = (bool)1;
		__this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24 = (bool)1;
		__this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25 = (bool)1;
		__this->___U3CoverridesShadowmaskU3Ek__BackingField_26 = (bool)0;
		__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__cctor_m95816EF1A9511038798E9D7FF161E929E0217DE0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_0, NULL);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
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
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m13BA20519948F798D105B0F5F4FCF0D738CEA5A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_0 = ((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___handle0;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86_AdjustorThunk (RuntimeObject* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___other0, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.Playable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__cctor_m75FC3E0FF1F2C5AD39A0AE7F2967AC5D0ABAEF0A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217(NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Double UnityEngine.Playables.PlayableAsset::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableAsset_get_duration_m4668A767DDB780565E6506E63B4797B820405CFE (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		double L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Playables.PlayableAsset::get_outputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableAsset_get_outputs_m5760B1B5EE08B0327FA7D90AE92C94227B1C993C (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4;
		V_0 = (RuntimeObject*)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset,UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_CreatePlayable_mC2DE0964868E459854F8B7564830BDF47424CD65 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___asset0, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go2, intptr_t ___ptr3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* V_1 = NULL;
	bool V_2 = false;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___asset0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = Playable_get_Null_m13BA20519948F798D105B0F5F4FCF0D738CEA5A7(NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_0014:
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_4 = ___asset0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_5 = ___graph1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___go2;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7;
		L_7 = VirtualFuncInvoker2< Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4 /* UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject) */, L_4, L_5, L_6);
		V_0 = L_7;
	}

IL_001d:
	{
		void* L_8;
		L_8 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___ptr3), NULL);
		V_1 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_8;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_9 = V_1;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_10 = V_0;
		*(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_9 = L_10;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_GetPlayableAssetDuration_m88EC64D33EDDDCF5DD24FF233BEC2013DFDDF622 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___asset0, intptr_t ___ptrToDouble1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double* V_1 = NULL;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___asset0;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(5 /* System.Double UnityEngine.Playables.PlayableAsset::get_duration() */, L_0);
		V_0 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___ptrToDouble1), NULL);
		V_1 = (double*)L_2;
		double* L_3 = V_1;
		double L_4 = V_0;
		*((double*)L_3) = (double)L_4;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStart_mB5944807796239EFB530022539674C4E4D185D65 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStop_mF80DFC8A3C2D2CA9299011D9E871ED6A8A9586CA (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableCreate_m22B0F0051A677A523C5702AABC6B1C9D358E90B8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableDestroy_m3DB0AF7BD9689DA1BCCBBFD19BDD544143027C3C (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPlay_m05F6FCCBC6E8FB4BA0BE2690045AF28BF95C6FE2 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPause_m431A7BD2EE99C1862563FEA37E20C365B753930B (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_PrepareFrame_m33FED1E870D350D8276712A2CD75118FEFAA86BD (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_mB80DDB2AB5D7EC0D3B9A466D37BE8556F6BBD2A0 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___info1, RuntimeObject* ___playerData2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object UnityEngine.Playables.PlayableBehaviour::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableBehaviour_Clone_m6A5B052F4ECA2ADED5937A4843777F52CCD33EE8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Playables.PlayableBinding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBinding__cctor_m60F178A142DCD473565A15003603A696FE3EBC02 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = (PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)SZArrayNew(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var, (uint32_t)0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4), (void*)L_0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5 = (std::numeric_limits<double>::infinity());
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
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* currentDelegate = reinterpret_cast<CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*>(delegatesToInvoke[i]);
		typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___graph0, ___name1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Open(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___graph0, ___name1, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___graph0, ___name1);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___graph0, ___name1);
}
IL2CPP_EXTERN_C  PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (DEFAULT_CALL *PInvokeFunc)(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 returnValue = il2cppPInvokeFunc(___graph0, ____name1_marshaled);

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Open;
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
	__this->___extra_arg_5 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method) 
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___graph0, ___name1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___x0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___p0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___p0;
		bool L_2;
		L_2 = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(__this, ((*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)UnBox(L_1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___p0, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670(_thisAdjusted, ___p0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = (*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)__this);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___other0, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m802DDE7AF60A7492B1BCF3FDBE00198605001CD8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___lhs0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___lhs0;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2 = ___rhs1;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___lhs0;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = ___rhs1;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle__cctor_mD503717F819B6D5D115A206B2D88E8B1E5AEADA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4));
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) 
{
	typedef bool (*PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_IsValid_Injected_mFD1FB7096A30373EAEB9B99406CD836169CF24BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ____unity_self0, const RuntimeMethod* method) 
{
	typedef Type_t* (*PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetPlayableType_Injected_m5A90A1EC6109FBB31BD9342009B93A9B3913814B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)");
	Type_t* icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___handle0;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(__this, NULL);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1;
		L_1 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_op_Equality_mAF77E9AD09CFBA177D85605ACF0B659F7DEE80E4(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121_AdjustorThunk (RuntimeObject* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___other0, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutput::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__cctor_mA6BE3612E38131B9366284B8D0F96AABD4271D41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE(NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		((PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var))->___m_NullPlayableOutput_1 = L_1;
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
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_mAF77E9AD09CFBA177D85605ACF0B659F7DEE80E4 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___lhs0;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___rhs1;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___p0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___p0;
		bool L_2;
		L_2 = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(__this, ((*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)UnBox(L_1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___p0, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A(_thisAdjusted, ___p0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = (*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)__this);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___other0, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mA7BD9897370F05F9C192AC972A5ED7170C6D945C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___lhs0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___lhs0;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_2 = ___rhs1;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___lhs0;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_7 = ___rhs1;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle__cctor_m3739C240727C7DE5BE3C36E63D5114227F1EB09D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_red_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___value0;
		__this->___m_red_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_green_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___value0;
		__this->___m_green_1 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_blue_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___value0;
		__this->___m_blue_2 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(_thisAdjusted, ___value0, method);
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___intensity1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B7_0 = 0;
	{
		bool L_0;
		L_0 = GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB(NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = ___intensity1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&___color0), L_1, NULL);
		V_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&V_4), NULL);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_001b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&___color0), NULL);
		V_4 = L_4;
		float L_5 = ___intensity1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&V_4), L_5, NULL);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		float L_7;
		L_7 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_1 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		float L_9 = L_8.___r_0;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		float L_11 = L_10.___g_1;
		if ((((float)L_11) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		float L_13 = L_12.___b_2;
		G_B7_0 = ((((float)L_13) < ((float)(0.0f)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B7_0 = 1;
	}

IL_005f:
	{
		V_5 = (bool)G_B7_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00c3;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		float* L_18 = (&(&V_0)->___r_0);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		float* L_22 = (&(&V_0)->___g_1);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		float* L_26 = (&(&V_0)->___b_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		String_t* L_29;
		L_29 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_28, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_30 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803_RuntimeMethod_var)));
	}

IL_00c3:
	{
		float L_31 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_31) <= ((float)(9.99999968E-21f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33;
		L_33 = LinearColor_Black_m29E930EAED6270F37E98DCFDE78417DACEBA26A3(NULL);
		V_7 = L_33;
		goto IL_0125;
	}

IL_00dd:
	{
		float L_34;
		L_34 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_2 = ((float)((1.0f)/L_34));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_0;
		float L_36 = L_35.___r_0;
		float L_37 = V_2;
		(&V_3)->___m_red_0 = ((float)il2cpp_codegen_multiply(L_36, L_37));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_0;
		float L_39 = L_38.___g_1;
		float L_40 = V_2;
		(&V_3)->___m_green_1 = ((float)il2cpp_codegen_multiply(L_39, L_40));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_0;
		float L_42 = L_41.___b_2;
		float L_43 = V_2;
		(&V_3)->___m_blue_2 = ((float)il2cpp_codegen_multiply(L_42, L_43));
		float L_44 = V_1;
		(&V_3)->___m_intensity_3 = L_44;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_45 = V_3;
		V_7 = L_45;
		goto IL_0125;
	}

IL_0125:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_46 = V_7;
		return L_46;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_m29E930EAED6270F37E98DCFDE78417DACEBA26A3 (const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0 = (0.0f);
		V_1 = L_0;
		(&V_0)->___m_intensity_3 = L_0;
		float L_1 = V_1;
		float L_2 = L_1;
		V_1 = L_2;
		(&V_0)->___m_blue_2 = L_2;
		float L_3 = V_1;
		float L_4 = L_3;
		V_1 = L_4;
		(&V_0)->___m_green_1 = L_4;
		float L_5 = V_1;
		(&V_0)->___m_red_0 = L_5;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6 = V_0;
		V_2 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_2;
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
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
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		__this->___range_7 = (0.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_14 = ___cookie1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&L_14->___sizes_2);
		float L_16 = L_15->___x_0;
		__this->___coneAngle_8 = L_16;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_17 = ___cookie1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&L_17->___sizes_2);
		float L_19 = L_18->___y_1;
		__this->___innerConeAngle_9 = L_19;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_20 = ___light0;
		float L_21 = L_20->___penumbraWidthRadian_7;
		__this->___shape0_10 = L_21;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 0;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_22 = ___light0;
		uint8_t L_23 = L_22->___mode_2;
		__this->___mode_13 = L_23;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_24 = ___light0;
		bool L_25 = L_24->___shadow_1;
		G_B1_0 = __this;
		if (L_25)
		{
			G_B2_0 = __this;
			goto IL_00b8;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b9:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		__this->___falloff_15 = 4;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207_AdjustorThunk (RuntimeObject* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_16 = ___light0;
		float L_17 = L_16->___sphereRadius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 1;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_18 = ___light0;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_20 = ___light0;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_22 = ___light0;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A_AdjustorThunk (RuntimeObject* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_16 = ___light0;
		float L_17 = L_16->___coneAngle_9;
		__this->___coneAngle_8 = L_17;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_18 = ___light0;
		float L_19 = L_18->___innerConeAngle_10;
		__this->___innerConeAngle_9 = L_19;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_20 = ___light0;
		float L_21 = L_20->___sphereRadius_8;
		__this->___shape0_10 = L_21;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_22 = ___light0;
		uint8_t L_23 = L_22->___angularFalloff_12;
		__this->___shape1_11 = ((float)L_23);
		__this->___type_12 = 2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_24 = ___light0;
		uint8_t L_25 = L_24->___mode_2;
		__this->___mode_13 = L_25;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_26 = ___light0;
		bool L_27 = L_26->___shadow_1;
		G_B1_0 = __this;
		if (L_27)
		{
			G_B2_0 = __this;
			goto IL_00b1;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b2:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_28 = ___light0;
		uint8_t L_29 = L_28->___falloff_11;
		__this->___falloff_15 = L_29;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B_AdjustorThunk (RuntimeObject* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_16 = ___light0;
		float L_17 = L_16->___width_8;
		__this->___shape0_10 = L_17;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_18 = ___light0;
		float L_19 = L_18->___height_9;
		__this->___shape1_11 = L_19;
		__this->___type_12 = 3;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_20 = ___light0;
		uint8_t L_21 = L_20->___mode_2;
		__this->___mode_13 = L_21;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_22 = ___light0;
		bool L_23 = L_22->___shadow_1;
		G_B1_0 = __this;
		if (L_23)
		{
			G_B2_0 = __this;
			goto IL_00ae;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00af:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_24 = ___light0;
		uint8_t L_25 = L_24->___falloff_10;
		__this->___falloff_15 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038_AdjustorThunk (RuntimeObject* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___light0;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___cookie1;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___cookie1;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_6 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___light0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_10 = ___light0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_12 = ___light0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_14 = ___light0;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_16 = ___light0;
		float L_17 = L_16->___radius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 4;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_18 = ___light0;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_20 = ___light0;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_22 = ___light0;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632_AdjustorThunk (RuntimeObject* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___light0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632(_thisAdjusted, ___light0, ___cookie1, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___lightInstanceID0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___lightInstanceID0;
		__this->___instanceID_0 = L_0;
		__this->___mode_13 = 3;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43_AdjustorThunk (RuntimeObject* __this, int32_t ___lightInstanceID0, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43(_thisAdjusted, ___lightInstanceID0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92 (int32_t ___baketype0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___baketype0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___baketype0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B4_0 = 2;
		goto IL_000d;
	}

IL_000c:
	{
		G_B4_0 = 1;
	}

IL_000d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B6_0 = 0;
	}

IL_0010:
	{
		V_0 = G_B6_0;
		goto IL_0013;
	}

IL_0013:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___l0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = ___l0;
		NullCheck(L_2);
		float L_3;
		L_3 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_2, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE(L_4, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6;
		L_6 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_1, ((float)il2cpp_codegen_multiply(L_3, L_5)), NULL);
		V_0 = L_6;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_8 = V_1;
		return L_8;
	}
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m546DD25E1DEFA2B7EECF8D0C5AB7B46F70426138 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___l0;
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_0, NULL);
		float L_2;
		L_2 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.5f))), (0.0174532924f))));
		float L_3;
		L_3 = atanf(((float)(((float)il2cpp_codegen_multiply(L_2, (46.0f)))/(64.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		goto IL_0032;
	}

IL_0032:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), (1.0f), (1.0f), (1.0f), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___l0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2;
		L_2 = GraphicsSettings_get_lightsUseLinearIntensity_m56A1BD6409AAFD86D7DA0F47FB829CD631D65FCB(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Mathf_CorrelatedColorTemperatureToRGB_m92860D984CC8E5F6359CC8959C8BFD927379D45D(L_5, NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cct0, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___lightColor1, const RuntimeMethod* method) 
{
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_0 = ___lightColor1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_1 = L_0;
		float L_2;
		L_2 = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___cct0;
		float L_4 = L_3.___r_0;
		LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_5 = ___lightColor1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_6 = L_5;
		float L_7;
		L_7 = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___cct0;
		float L_9 = L_8.___g_1;
		LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_10 = ___lightColor1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_11 = L_10;
		float L_12;
		L_12 = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___cct0;
		float L_14 = L_13.___b_2;
		LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m168917A3FFE696B6B4F2BE2ACFB5C74AEA57AAE0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___dir1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_3 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_11 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_15 = ___dir1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_30 = ___dir1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_32 = ___dir1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_34 = ___dir1;
		L_34->___penumbraWidthRadian_7 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m43F2AE128B08ACD1BE42D1A48FCE9DA5BD1BFF23 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___point1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_3 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_11 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_15 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_30 = ___point1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_32 = ___point1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_34 = ___point1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_37 = ___point1;
		L_37->___sphereRadius_8 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_38 = ___point1;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m923E63DD2078497852AEC688E199BE6E129B69C4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___spot1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_3 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_11 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_15 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_30 = ___spot1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_32 = ___spot1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_34 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_37 = ___spot1;
		L_37->___sphereRadius_8 = (0.0f);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_38 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = ___l0;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_39, NULL);
		L_38->___coneAngle_9 = ((float)il2cpp_codegen_multiply(L_40, (0.0174532924f)));
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_41 = ___spot1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = ___l0;
		float L_43;
		L_43 = LightmapperUtils_ExtractInnerCone_m546DD25E1DEFA2B7EECF8D0C5AB7B46F70426138(L_42, NULL);
		L_41->___innerConeAngle_10 = L_43;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_44 = ___spot1;
		L_44->___falloff_11 = 3;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_45 = ___spot1;
		L_45->___angularFalloff_12 = 0;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m6CD2C57089AE0B41970C60A597EAFBF3BE27B3A6 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___rect1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_3 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_11 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_15 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_30 = ___rect1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_32 = ___rect1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_34 = ___rect1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_37 = ___rect1;
		L_37->___width_8 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_38 = ___rect1;
		L_38->___height_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_39 = ___rect1;
		L_39->___falloff_10 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m4DB65098D5061C188791D825490B46EEE305DE6D (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___disc1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_3 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m3D10A882381C72E4BC640EFA43BEB204C8E31A92(L_6, NULL);
		L_3->___mode_2 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_11 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___l0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_15 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___l0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___l0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_m5C531A8B05786E5AE7021ACD4B0A03ED11CE2882(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___l0;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___l0;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_mB94629473570EEFB0A92B706C0F18AA17FB05803(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___l0;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_mEC02DC55F36EA834577CE8C4799B0CD58584AB13(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m54994440A9598A4048214988DC9ACA574AA40B69(L_29, (&V_2), NULL);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_30 = ___disc1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_32 = ___disc1;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_34 = ___disc1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___l0;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_37 = ___disc1;
		L_37->___radius_8 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_38 = ___disc1;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___l0, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___cookie1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B2_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B3_1 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B5_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B4_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B6_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B7_1 = NULL;
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_0 = ___cookie1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___l0;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___l0;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___instanceID_0 = G_B3_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_7 = ___cookie1;
		L_7->___scale_1 = (1.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_8 = ___cookie1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___l0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_9, NULL);
		G_B4_0 = L_8;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = ___l0;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		G_B5_0 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = G_B4_0;
			goto IL_0055;
		}
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_0055:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = ___l0;
		NullCheck(L_15);
		float L_16;
		L_16 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_15, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___l0;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		G_B7_1->___sizes_2 = G_B7_0;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_SetDelegate_m71AF5AA8199040B3E901661236D09205092D0D8D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___del0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* G_B3_0 = NULL;
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ___del0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ___del0;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)G_B3_0);
		return;
	}
}
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::GetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* Lightmapping_GetDelegate_m847670CDD1E8DA380930C322A5713587AF3D2396 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::ResetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_ResetDelegate_mEFE29946965EAC2C6A5CDB5A4AF9A1B0069FAE1B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::RequestLights(UnityEngine.Light[],System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_RequestLights_m212529C7EE6B36F03073D4F372B4609E5867B12C (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___lights0, intptr_t ___outLightsPtr1, int32_t ___outLightsCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___outLightsPtr1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		int32_t L_2 = ___outLightsCount2;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59(L_1, L_2, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mA670EEAF3374E154A82DDB43174DA27B4136CB59_RuntimeMethod_var);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_4 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5 = ___lights0;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_6 = V_0;
		NullCheck(L_4);
		RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping__cctor_m759E8C6D97EBF814850F73B24EC5476007DA8BFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = ((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*)il2cpp_codegen_object_new(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var), NULL);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0), (void*)L_1);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_2);
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
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* currentDelegate = reinterpret_cast<RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___requests0, ___lightsOutput1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Open(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___requests0, ___lightsOutput1, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, ___requests0, ___lightsOutput1);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___requests0, ___lightsOutput1);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___requests0, ___lightsOutput1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m44A253B91A8449C4AA3E269C17162C626673F6C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4*)il2cpp_codegen_object_new(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902(L_0, NULL);
		((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) 
{
	DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_tD01A1428DC1015D98A527136034187F732433EA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_tD01A1428DC1015D98A527136034187F732433EA7));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = ___requests0;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_4, NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = V_8;
		LightmapperUtils_Extract_m168917A3FFE696B6B4F2BE2ACFB5C74AEA57AAE0(L_8, (&V_0), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_9, (&V_5), NULL);
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207((&V_6), (&V_0), (&V_5), NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_8;
		LightmapperUtils_Extract_m43F2AE128B08ACD1BE42D1A48FCE9DA5BD1BFF23(L_10, (&V_1), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_11, (&V_5), NULL);
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A((&V_6), (&V_1), (&V_5), NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_8;
		LightmapperUtils_Extract_m923E63DD2078497852AEC688E199BE6E129B69C4(L_12, (&V_2), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_13, (&V_5), NULL);
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B((&V_6), (&V_2), (&V_5), NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = V_8;
		LightmapperUtils_Extract_m6CD2C57089AE0B41970C60A597EAFBF3BE27B3A6(L_14, (&V_3), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_15, (&V_5), NULL);
		LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038((&V_6), (&V_3), (&V_5), NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_8;
		LightmapperUtils_Extract_m4DB65098D5061C188791D825490B46EEE305DE6D(L_16, (&V_4), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_8;
		LightmapperUtils_Extract_mFA23473CE371297DB7005D09ED8FF62D25B41010(L_17, (&V_5), NULL);
		LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632((&V_6), (&V_4), (&V_5), NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_18, NULL);
		LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43((&V_6), L_19, NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, ((&___lightsOutput1))->___m_Buffer_0, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_24 = ___requests0;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF_AdjustorThunk (RuntimeObject* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___other0, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	bool _returnValue;
	_returnValue = CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC_AdjustorThunk (RuntimeObject* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___other0, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7_AdjustorThunk (RuntimeObject* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___other0, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	bool _returnValue;
	_returnValue = TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7(_thisAdjusted, ___other0, method);
	return _returnValue;
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
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::TickRealtimeProbes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_TickRealtimeProbes_m0CD6423541B0FCB022D55498C348A013E06E5F39 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m2CDBD30196F65463B8E86AC97DA2370A4D68762D (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0 (const RuntimeMethod* method) 
{
	typedef bool (*BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0_ftn) ();
	static BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BuiltinRuntimeReflectionSystem_BuiltinUpdate_mBE5DAA71BBDC02A11C21A49284078055C7294DB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* BuiltinRuntimeReflectionSystem_Internal_BuiltinRuntimeReflectionSystem_New_m37D7A68062DA942ACF90E1C41CF749BD948CA91B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* V_0 = NULL;
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_0 = (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE*)il2cpp_codegen_object_new(BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_set_Internal_ScriptableRuntimeReflectionSystemSettings_system_m668B05191322016F7A1AA39FF3A3B9B0BF8EC621 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_0, NULL);
		RuntimeObject* L_2 = ___value0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_4 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_4, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_7 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_7, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
	}

IL_0037:
	{
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_9 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		RuntimeObject* L_10 = ___value0;
		NullCheck(L_9);
		ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline(L_9, L_10, NULL);
		return;
	}
}
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ScriptableRuntimeReflectionSystemSettings_get_Internal_ScriptableRuntimeReflectionSystemSettings_instance_mAE76D73D6D2AED40835CED5D925ED7F8699A8560 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762 (const RuntimeMethod* method) 
{
	typedef void (*ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762_ftn) ();
	static ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_m5A0AEF7B0F924A6DAF5E9762FF44D5E24A9F8762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings__cctor_m96B1BF54CF4E66158F55682A042AF76A9F40130B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924*)il2cpp_codegen_object_new(ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D(L_0, NULL);
		((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
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
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes_mDC08C9639CAF2D13623E82B3A9C51689D2FED2B3 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, bool* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		bool* L_0 = ___result0;
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem::TickRealtimeProbes() */, IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
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
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m40311CC93B197CDA001DB530FA6A7145BDF704A5 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___format0;
		bool L_1 = ___isSRGB1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_mF6A18A9F7496D46903888ED53547C363AF19184C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___format0, ___isSRGB1);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m9C447321AA5B70BA35F3A23DFC772D449D92A315 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___format0;
		bool L_1 = ___isSRGB1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964 (int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m10F2C422C5C6EEF684F56DB801358A954146B964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___format0, ___isSRGB1);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m86331B6F407E9C3648A3D628E2BC4059AC760DD2 (int32_t ___format0, int32_t ___readWrite1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m7BD95E037EC83AD498617F7906B41932CE33288B(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		int32_t L_1 = ___readWrite1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___readWrite1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		bool L_3 = V_0;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		int32_t L_4 = ___format0;
		bool L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = GraphicsFormatUtility_GetGraphicsFormat_m9C447321AA5B70BA35F3A23DFC772D449D92A315(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8 (int32_t ___minimumDepthBits0, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___minimumDepthBits0);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_mF758A2225A636091FBA343397A283528ED220F54 (int32_t ___minimumDepthBits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___minimumDepthBits0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m7B1F1DEB5E33586ECC1C6784C94D51BDAB184AD8(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA (int32_t ___minimumDepthBits0, int32_t ___minimumStencilBits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* G_B24_0 = NULL;
	{
		int32_t L_0 = ___minimumDepthBits0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___minimumStencilBits1;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_0016:
	{
		int32_t L_3 = ___minimumDepthBits0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___minimumStencilBits1;
		G_B8_0 = ((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B8_0 = 1;
	}

IL_0021:
	{
		V_4 = (bool)G_B8_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_7 = ___minimumDepthBits0;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_10 = ___minimumStencilBits1;
		V_6 = (bool)((((int32_t)L_10) > ((int32_t)8))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_mE3B35D143A479910D8CC18D52F262ACD17E81AFA_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___minimumDepthBits0;
		V_7 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		___minimumDepthBits0 = ((int32_t)16);
		goto IL_008f;
	}

IL_0073:
	{
		int32_t L_15 = ___minimumDepthBits0;
		V_8 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		___minimumDepthBits0 = ((int32_t)24);
		goto IL_008f;
	}

IL_0089:
	{
		___minimumDepthBits0 = ((int32_t)32);
	}

IL_008f:
	{
		int32_t L_17 = ___minimumStencilBits1;
		V_9 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		___minimumStencilBits1 = 8;
	}

IL_009c:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_19 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		NullCheck(L_19);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_20 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		NullCheck(L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0), NULL);
		int32_t L_21 = ___minimumStencilBits1;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_22 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		G_B24_0 = L_22;
		goto IL_00c2;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_23 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		G_B24_0 = L_23;
	}

IL_00c2:
	{
		V_0 = G_B24_0;
		int32_t L_24 = ___minimumDepthBits0;
		V_1 = ((int32_t)(L_24/8));
		int32_t L_25 = V_1;
		V_10 = L_25;
		goto IL_00ed;
	}

IL_00cc:
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_26 = V_0;
		int32_t L_27 = V_10;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_11 = L_29;
		int32_t L_30 = V_11;
		bool L_31;
		L_31 = SystemInfo_IsFormatSupported_m0F5051D3999D87A45F6CD5C80E6041F0B0C4C1E7(L_30, 4, NULL);
		V_12 = L_31;
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_33 = V_11;
		V_3 = L_33;
		goto IL_00fe;
	}

IL_00e6:
	{
		int32_t L_34 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ed:
	{
		int32_t L_35 = V_10;
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_36 = V_0;
		NullCheck(L_36);
		V_13 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_13;
		if (L_37)
		{
			goto IL_00cc;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_00fe:
	{
		int32_t L_38 = V_3;
		return L_38;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1 (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1_ftn) (int32_t);
	static GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsSRGBFormat_m702627893B74D5F872332A624D7CBAF78D65EBC1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F_ftn) (int32_t);
	static GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsCompressedTextureFormat_m9FDE191A4DE321B22EB81C114F8FA2F6CADC180F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810 (int32_t ___format0, bool ___wholeImage1, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810_ftn) (int32_t, bool);
	static GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___format0, ___wholeImage1);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_m7ACC154740876AA86DEB68AD574B1B11E32AF3A3 (int32_t ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GraphicsFormatUtility_CanDecompressFormat_mED04A575F2ED1B0B4C81952AA7A117B712DA2810(L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807 (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807_ftn) (int32_t);
	static GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsDepthFormat_m3D8224CDEBB70B7448296A8E1D5812CD84958807_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429 (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429_ftn) (int32_t);
	static GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsStencilFormat_mE2080DBEEDB4D099B1D86561D23781FB6E5F7429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC (int32_t ___format0, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC_ftn) (int32_t);
	static GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsPVRTCFormat_mC62806D7A140997254739739A47FB9716C0A79BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___format0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_m397B4BA9DCEF6DF734F3F4B349A0D60B235A476E (int32_t ___format0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___format0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)28))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___format0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)29))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___format0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)64))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___format0;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)((int32_t)65)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B5_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Experimental.Rendering.GraphicsFormatUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsFormatUtility__cctor_m4A3699EA318A3907272B8FF97CBE4FA92910B9D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_0 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)91));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)93));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0), (void*)L_4);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_5 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)94));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_mCD3C3FF1DC98173ADA46A711673C69ECAE494F22_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___rendererGroup0, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___cullingContext1, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___rendererGroup0, ___cullingContext1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_1;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_2;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m1907912AEAFDF9E549FCE397178EFE93D4691760_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___multiplier0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1 = ___multiplier0;
		float L_2 = __this->___g_1;
		float L_3 = ___multiplier0;
		float L_4 = __this->___b_2;
		float L_5 = ___multiplier0;
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), ((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_4, L_5)), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6(L_0, NULL);
		float L_2 = __this->___g_1;
		float L_3;
		L_3 = Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6(L_2, NULL);
		float L_4 = __this->___b_2;
		float L_5;
		L_5 = Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6(L_4, NULL);
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___r_0;
		float L_1 = __this->___g_1;
		float L_2;
		L_2 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, L_1, NULL);
		float L_3 = __this->___b_2;
		float L_4;
		L_4 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___requests0, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___lightsOutput1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___requests0, ___lightsOutput1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
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
