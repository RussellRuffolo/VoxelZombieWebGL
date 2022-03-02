#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;

IL2CPP_EXTERN_C RuntimeClass* Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7A1E3DF1BFD27FA828B031F2A96909F13C3F170B 
{
};
struct Il2CppArrayBounds;

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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC  : public MulticastDelegate_t
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_gshared_inline (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;

// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_inline (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method) ;
// System.Action`1<System.Int32> UnityEngine.Canvas::get_externBeginRenderOverlays()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* Canvas_get_externBeginRenderOverlays_mEE7982EF6260C2267F00B766BAED1F744A318E47_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::get_externRenderOverlaysBefore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* Canvas_get_externRenderOverlaysBefore_mDB1B9D5A8CD289970976A34FF7971C4886627899_inline (const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_inline (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Action`1<System.Int32> UnityEngine.Canvas::get_externEndRenderOverlays()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* Canvas_get_externEndRenderOverlays_m675597274F17A6FF2296759473F55F3CD73DFE06_inline (const RuntimeMethod* method) ;
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
// System.Action`1<System.Int32> UnityEngine.Canvas::get_externBeginRenderOverlays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* Canvas_get_externBeginRenderOverlays_mEE7982EF6260C2267F00B766BAED1F744A318E47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::get_externRenderOverlaysBefore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* Canvas_get_externRenderOverlaysBefore_mDB1B9D5A8CD289970976A34FF7971C4886627899 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Action`1<System.Int32> UnityEngine.Canvas::get_externEndRenderOverlays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* Canvas_get_externEndRenderOverlays_m675597274F17A6FF2296759473F55F3CD73DFE06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UnityEngine.Canvas::SendPreWillRenderCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_SendPreWillRenderCanvases_mFA0D8930E72A52042834BCEB887AAB479514E117 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* G_B2_0 = NULL;
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* G_B1_0 = NULL;
	{
		WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___preWillRenderCanvases_4;
		WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* L_1 = L_0;
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
		WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_SendWillRenderCanvases_m785FD743C738A1A8E0D20A6E008CF67CA2D417E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* G_B2_0 = NULL;
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* G_B1_0 = NULL;
	{
		WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___willRenderCanvases_5;
		WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* L_1 = L_0;
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
		WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::BeginRenderExtraOverlays(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_BeginRenderExtraOverlays_m58B648A9A88E142F0869722323617D6082B0D2E6 (int32_t ___displayIndex0, const RuntimeMethod* method) 
{
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0;
		L_0 = Canvas_get_externBeginRenderOverlays_mEE7982EF6260C2267F00B766BAED1F744A318E47_inline(NULL);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int32_t L_2 = ___displayIndex0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::RenderExtraOverlaysBefore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_RenderExtraOverlaysBefore_mFA666777A5315DA0CEA3B32E6B3CD88173E3723A (int32_t ___displayIndex0, int32_t ___sortingOrder1, const RuntimeMethod* method) 
{
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* G_B2_0 = NULL;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* G_B1_0 = NULL;
	{
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_0;
		L_0 = Canvas_get_externRenderOverlaysBefore_mDB1B9D5A8CD289970976A34FF7971C4886627899_inline(NULL);
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		int32_t L_2 = ___displayIndex0;
		int32_t L_3 = ___sortingOrder1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_inline(G_B2_0, L_2, L_3, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::EndRenderExtraOverlays(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_EndRenderExtraOverlays_mFED0E21EDB63FD9374B0902FE38F259D997571AA (int32_t ___displayIndex0, const RuntimeMethod* method) 
{
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0;
		L_0 = Canvas_get_externEndRenderOverlays_m675597274F17A6FF2296759473F55F3CD73DFE06_inline(NULL);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int32_t L_2 = ___displayIndex0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
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
void WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_Multicast(WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* currentDelegate = reinterpret_cast<WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_Open(WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_OpenStaticInvoker(WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_ClosedStaticInvoker(WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WillRenderCanvases__ctor_mD8174C0964F8864D65270FFCAF275BD0BAC8DCF3 (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_Open;
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
	__this->___extra_arg_5 = (intptr_t)&WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_Multicast;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566 (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WillRenderCanvases_Invoke_m47BAAC9AD2F84BF75E0021F436A6286C09A30566_inline (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* Canvas_get_externBeginRenderOverlays_mEE7982EF6260C2267F00B766BAED1F744A318E47_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* Canvas_get_externRenderOverlaysBefore_mDB1B9D5A8CD289970976A34FF7971C4886627899_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* Canvas_get_externEndRenderOverlays_m675597274F17A6FF2296759473F55F3CD73DFE06_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields*)il2cpp_codegen_static_fields_for(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var))->___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_gshared_inline (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
