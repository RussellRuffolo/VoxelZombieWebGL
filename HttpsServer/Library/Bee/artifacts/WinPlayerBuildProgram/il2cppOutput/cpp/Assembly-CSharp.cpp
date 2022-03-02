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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Net.HttpListenerContext>
struct TaskFactory_1_tC0BB9633EDDB72940A75C39F67D074DAFBE019D4;
// System.Threading.Tasks.TaskFactory`1<System.Net.Sockets.TcpClient>
struct TaskFactory_1_t9B6F8EBFF3129A5DE687B7B5B3FED8EF108851AB;
// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>
struct Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Net.Sockets.TcpClient>
struct Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// System.Security.Authentication.AuthenticationException
struct AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8;
// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_tF0DDA5A5A05EDB1A9B42FF58391E36E1AAD01FDF;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Net.CookieCollection
struct CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t02E41C0BEC894A17CFE1A1FE88A2388DFDA05A73;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
struct ExtendedProtectionPolicy_t50F460D31056608D80176DD66F24EE5ACEA54F99;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F;
// System.Net.HttpConnection
struct HttpConnection_tAA1DA73AA1D39D03237022305791474A193E0308;
// System.Net.HttpListener
struct HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01;
// System.Net.HttpListenerContext
struct HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412;
// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1;
// HttpTestServer
struct HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// System.Net.ResponseStream
struct ResponseStream_t8E2B4FE038D63D87A22401FD4ED8267BA284AEDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.ServiceNameStore
struct ServiceNameStore_t58D68EFA9BC0DF88B9FA9940086DCE0DEF08D843;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27;
// SslTcpServer
struct SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TCPTestServer
struct TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// System.Net.Sockets.TcpListener
struct TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82;
// TestServer
struct TestServer_tC93C441B5073572F90A4D01FE7C866A337E43851;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0;
// System.Net.HttpListener/ExtendedProtectionSelector
struct ExtendedProtectionSelector_t92B47BADD9172C82C0FCB8DBE510911774DE632F;
// HttpTestServer/<StartHttpListener>d__5
struct U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// TCPTestServer/<StartAsyncListener>d__5
struct U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherAlgorithmType_tE6ADFA10102C064ED2676C6ACF0281E313F7F9F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExchangeAlgorithmType_tD749C4726985B9B18DDA62264A5F2A6261326330_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashAlgorithmType_t2C8D31F078403890365F86C877EF54AC00993927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslProtocols_t21FADB874FCAEC5039AE593AA3544639C938C77E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral030C2552B6CAF95EAF76628A7C8CBE754AE3C3F5;
IL2CPP_EXTERN_C String_t* _stringLiteral03B02F3ED7301735A583D80CBEB9D1CE3BF7DE58;
IL2CPP_EXTERN_C String_t* _stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9CAE50CA32CE68AA9F00077C1C9A89639E7214;
IL2CPP_EXTERN_C String_t* _stringLiteral29CDA606FB2D4E718EE49BB90715B2F6A53AAD6F;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF455596D6209BD156B301BAB70D22792236598;
IL2CPP_EXTERN_C String_t* _stringLiteral347FAF4BD367FB1326B0472841C29A3D0B06520B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E1C50242DDA5AD6A0D024D04ED10C8EC013A11F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F516D761B70CC4E7CBA57DE085D7BA9790CE19A;
IL2CPP_EXTERN_C String_t* _stringLiteral4008BF2D4CB966E1F12922E12AC8E4F33A44EA85;
IL2CPP_EXTERN_C String_t* _stringLiteral423E80DC51ED94C3711B83EDAC2027048C4CFF44;
IL2CPP_EXTERN_C String_t* _stringLiteral49E61F79FC628011037B6F1067F71A6310836049;
IL2CPP_EXTERN_C String_t* _stringLiteral5175183C935EEAF51A650608FF4FCB0D480F5CA7;
IL2CPP_EXTERN_C String_t* _stringLiteral535131DF0A18C56AD1457187193D25C93C302BBD;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC413BA69220C7D2121629F2A59F0477386E405;
IL2CPP_EXTERN_C String_t* _stringLiteral68A4CC697FA43BC45F63BFB29E690FE45392F0AD;
IL2CPP_EXTERN_C String_t* _stringLiteral6B174832B04B0F5FB27B84068D28462AF0AA0A46;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
IL2CPP_EXTERN_C String_t* _stringLiteral6E3BC3271411B6B3561912AA480394C101561FCA;
IL2CPP_EXTERN_C String_t* _stringLiteral767DAE9C22C37B77539B9ADCBD99D4E259A785D6;
IL2CPP_EXTERN_C String_t* _stringLiteral78FAF08AC1D3A44FA8EF0A68AC2E0862F0344B65;
IL2CPP_EXTERN_C String_t* _stringLiteral7A6A86D68C8C631D4DEEB24F629AFEF6F468F75A;
IL2CPP_EXTERN_C String_t* _stringLiteral80A4ED4AED56B6AC16D23408FB8CFC1CEFE02A17;
IL2CPP_EXTERN_C String_t* _stringLiteral83F8DA18F6A4F400B219A8556529A5C997A6DD72;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC1126BA3C02696F9CB851ED6F40A15660BC1C9;
IL2CPP_EXTERN_C String_t* _stringLiteral8F623B00EE0D156C6CD100745FEA2F291E9F7B87;
IL2CPP_EXTERN_C String_t* _stringLiteral91D44FDED7ECC10DE7E3056F15751168AEA4EE06;
IL2CPP_EXTERN_C String_t* _stringLiteral96C54516FB0BB47158E1C2143F31D36D07D5EAE8;
IL2CPP_EXTERN_C String_t* _stringLiteral9A848F3ECF33F4D9ECFFCACB84A2818EB7C9B1CA;
IL2CPP_EXTERN_C String_t* _stringLiteral9E035E807F262AF3C131FBBCE24D2939D1DA0D81;
IL2CPP_EXTERN_C String_t* _stringLiteralA6421ABDD0A7FBCF912B77F4554289858A338D5C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6EC725F9D920FA3AF57F1603E4B984B41251C65;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD0EC936838D06B1B6E047C43AC617AB1B052F260;
IL2CPP_EXTERN_C String_t* _stringLiteralD64BAFD8753E077D339426D532A5540240EE1767;
IL2CPP_EXTERN_C String_t* _stringLiteralD6B9A18E6AE19A17709E806B73C0F35370A7FC9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD8FA56226D5D0498EF969989D0BBE327D333956E;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4B7E403293A3EB46818379ED599B45D01C96C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE4E32A0F752FFBD66597D5C010665C1BF21A41B6;
IL2CPP_EXTERN_C String_t* _stringLiteralEE8776404133CD14DC91074EA49ABF1AADD2540F;
IL2CPP_EXTERN_C String_t* _stringLiteralEF848D5B26CBE369E2574358C599C461559B6AD5;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8A1CFF0BA9EB61EACCA393170B32558FE5BD83;
IL2CPP_EXTERN_C String_t* _stringLiteralFB81BDCC80DE20811A3919F59156446BD4B3EA50;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mA568597E65AA519FC274A8475B35691CFB3FC8BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m9E38EE9AB65FE7164D75C7D538CA14CF1DC531C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_mF928726D0348746AABF38E63F84D458D9F5CE9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m8122DA50278ED5437D3C7D6DE4904DBC97B74550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mE1099EB90C5A7E408D2CDF47A538D7E91EAED6E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslTcpServer_Listen_mCCADE6A6D71270ABB5442D8183C560467A2346AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslTcpServer_ProcessClient_mB0453C1ED12359E29EE690B6E01A61D31F914CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m049B9772D7BEF1E25A3E1CF7DBA14B1315CD9C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEE9CE0517334D3A098D79692BFFC8F5A93D69A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m21D94DB50821D4F81CD9E32CB1ED0C4D1D13D387_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC  : public RuntimeObject
{
	// System.Text.DecoderFallback System.Text.Decoder::_fallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ____fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::_fallbackBuffer
	DecoderFallbackBuffer_t02E41C0BEC894A17CFE1A1FE88A2388DFDA05A73* ____fallbackBuffer_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.HttpListener
struct HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01  : public RuntimeObject
{
	// Mono.Security.Interface.MonoTlsProvider System.Net.HttpListener::tlsProvider
	MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* ___tlsProvider_0;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpListener::tlsSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.HttpListener::certificate
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate_2;
	// System.Net.AuthenticationSchemes System.Net.HttpListener::auth_schemes
	int32_t ___auth_schemes_3;
	// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::prefixes
	HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* ___prefixes_4;
	// System.Net.AuthenticationSchemeSelector System.Net.HttpListener::auth_selector
	AuthenticationSchemeSelector_tF0DDA5A5A05EDB1A9B42FF58391E36E1AAD01FDF* ___auth_selector_5;
	// System.String System.Net.HttpListener::realm
	String_t* ___realm_6;
	// System.Boolean System.Net.HttpListener::ignore_write_exceptions
	bool ___ignore_write_exceptions_7;
	// System.Boolean System.Net.HttpListener::unsafe_ntlm_auth
	bool ___unsafe_ntlm_auth_8;
	// System.Boolean System.Net.HttpListener::listening
	bool ___listening_9;
	// System.Boolean System.Net.HttpListener::disposed
	bool ___disposed_10;
	// System.Object System.Net.HttpListener::_internalLock
	RuntimeObject* ____internalLock_11;
	// System.Collections.Hashtable System.Net.HttpListener::registry
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___registry_12;
	// System.Collections.ArrayList System.Net.HttpListener::ctx_queue
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___ctx_queue_13;
	// System.Collections.ArrayList System.Net.HttpListener::wait_queue
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___wait_queue_14;
	// System.Collections.Hashtable System.Net.HttpListener::connections
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___connections_15;
	// System.Net.ServiceNameStore System.Net.HttpListener::defaultServiceNames
	ServiceNameStore_t58D68EFA9BC0DF88B9FA9940086DCE0DEF08D843* ___defaultServiceNames_16;
	// System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy System.Net.HttpListener::extendedProtectionPolicy
	ExtendedProtectionPolicy_t50F460D31056608D80176DD66F24EE5ACEA54F99* ___extendedProtectionPolicy_17;
	// System.Net.HttpListener/ExtendedProtectionSelector System.Net.HttpListener::extendedProtectionSelectorDelegate
	ExtendedProtectionSelector_t92B47BADD9172C82C0FCB8DBE510911774DE632F* ___extendedProtectionSelectorDelegate_18;
};

// System.Net.HttpListenerContext
struct HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412  : public RuntimeObject
{
	// System.Net.HttpListenerRequest System.Net.HttpListenerContext::request
	HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* ___request_0;
	// System.Net.HttpListenerResponse System.Net.HttpListenerContext::response
	HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* ___response_1;
	// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::user
	RuntimeObject* ___user_2;
	// System.Net.HttpConnection System.Net.HttpListenerContext::cnc
	HttpConnection_tAA1DA73AA1D39D03237022305791474A193E0308* ___cnc_3;
	// System.String System.Net.HttpListenerContext::error
	String_t* ___error_4;
	// System.Int32 System.Net.HttpListenerContext::err_status
	int32_t ___err_status_5;
	// System.Net.HttpListener System.Net.HttpListenerContext::Listener
	HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___Listener_6;
};

// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> System.Net.HttpListenerPrefixCollection::prefixes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___prefixes_0;
	// System.Net.HttpListener System.Net.HttpListenerPrefixCollection::listener
	HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___listener_1;
};

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8  : public RuntimeObject
{
	// System.String[] System.Net.HttpListenerRequest::accept_types
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___accept_types_0;
	// System.Int64 System.Net.HttpListenerRequest::content_length
	int64_t ___content_length_1;
	// System.Boolean System.Net.HttpListenerRequest::cl_set
	bool ___cl_set_2;
	// System.Net.CookieCollection System.Net.HttpListenerRequest::cookies
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookies_3;
	// System.Net.WebHeaderCollection System.Net.HttpListenerRequest::headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___headers_4;
	// System.String System.Net.HttpListenerRequest::method
	String_t* ___method_5;
	// System.IO.Stream System.Net.HttpListenerRequest::input_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_stream_6;
	// System.Version System.Net.HttpListenerRequest::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_7;
	// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::query_string
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___query_string_8;
	// System.String System.Net.HttpListenerRequest::raw_url
	String_t* ___raw_url_9;
	// System.Uri System.Net.HttpListenerRequest::url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url_10;
	// System.Uri System.Net.HttpListenerRequest::referrer
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___referrer_11;
	// System.String[] System.Net.HttpListenerRequest::user_languages
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___user_languages_12;
	// System.Net.HttpListenerContext System.Net.HttpListenerRequest::context
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___context_13;
	// System.Boolean System.Net.HttpListenerRequest::is_chunked
	bool ___is_chunked_14;
	// System.Boolean System.Net.HttpListenerRequest::ka_set
	bool ___ka_set_15;
	// System.Boolean System.Net.HttpListenerRequest::keep_alive
	bool ___keep_alive_16;
};

struct HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8_StaticFields
{
	// System.Byte[] System.Net.HttpListenerRequest::_100continue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____100continue_17;
	// System.Char[] System.Net.HttpListenerRequest::separators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators_18;
};

// System.Net.HttpListenerResponse
struct HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1  : public RuntimeObject
{
	// System.Boolean System.Net.HttpListenerResponse::disposed
	bool ___disposed_0;
	// System.Text.Encoding System.Net.HttpListenerResponse::content_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerResponse::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerResponse::cl_set
	bool ___cl_set_3;
	// System.String System.Net.HttpListenerResponse::content_type
	String_t* ___content_type_4;
	// System.Net.CookieCollection System.Net.HttpListenerResponse::cookies
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookies_5;
	// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___headers_6;
	// System.Boolean System.Net.HttpListenerResponse::keep_alive
	bool ___keep_alive_7;
	// System.Net.ResponseStream System.Net.HttpListenerResponse::output_stream
	ResponseStream_t8E2B4FE038D63D87A22401FD4ED8267BA284AEDD* ___output_stream_8;
	// System.Version System.Net.HttpListenerResponse::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_9;
	// System.String System.Net.HttpListenerResponse::location
	String_t* ___location_10;
	// System.Int32 System.Net.HttpListenerResponse::status_code
	int32_t ___status_code_11;
	// System.String System.Net.HttpListenerResponse::status_description
	String_t* ___status_description_12;
	// System.Boolean System.Net.HttpListenerResponse::chunked
	bool ___chunked_13;
	// System.Net.HttpListenerContext System.Net.HttpListenerResponse::context
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___context_14;
	// System.Boolean System.Net.HttpListenerResponse::HeadersSent
	bool ___HeadersSent_15;
	// System.Object System.Net.HttpListenerResponse::headers_lock
	RuntimeObject* ___headers_lock_16;
	// System.Boolean System.Net.HttpListenerResponse::force_close_chunked
	bool ___force_close_chunked_17;
};

struct HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1_StaticFields
{
	// System.String System.Net.HttpListenerResponse::tspecials
	String_t* ___tspecials_18;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_8;
};

// SslTcpServer
struct SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A  : public RuntimeObject
{
};

struct SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields
{
	// System.Security.Cryptography.X509Certificates.X509Certificate SslTcpServer::serverCertificate
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___serverCertificate_0;
	// System.Net.Sockets.TcpListener SslTcpServer::listener
	TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* ___listener_1;
	// System.Threading.Thread SslTcpServer::listenerThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___listenerThread_2;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58  : public RuntimeObject
{
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;
};

// System.Net.Sockets.TcpListener
struct TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82  : public RuntimeObject
{
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>
struct TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Sockets.TcpClient>
struct TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>
struct Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___m_result_38;
};

struct Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC0BB9633EDDB72940A75C39F67D074DAFBE019D4* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.Sockets.TcpClient>
struct Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___m_result_38;
};

struct Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t9B6F8EBFF3129A5DE687B7B5B3FED8EF108851AB* ___s_defaultFactory_39;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_10;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____InnerStream_5;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_6;
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

// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::_streamSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____streamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::_ownsSocket
	bool ____ownsSocket_6;
	// System.Boolean System.Net.Sockets.NetworkStream::_readable
	bool ____readable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::_writeable
	bool ____writeable_8;
	// System.Int32 System.Net.Sockets.NetworkStream::_closeTimeout
	int32_t ____closeTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::_cleanedUp
	bool ____cleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentReadTimeout
	int32_t ____currentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentWriteTimeout
	int32_t ____currentWriteTimeout_12;
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

// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8  : public NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7
{
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_CommonHeaders_12;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_13;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___m_InnerCollection_16;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_17;
};

struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8_StaticFields
{
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tD651971044220ED52EACB30E89A49178FA32D91F* ___HInfo_11;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_CommonHeaderNames_14;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_CommonHeaderHints_15;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HttpTrimCharacters_18;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t8D79A380C46398F9D1F442FDEE0A27F77B7D1B4C* ___RfcCharMap_19;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
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

// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// Mono.Net.Security.MobileTlsProvider System.Net.Security.SslStream::provider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___provider_7;
	// Mono.Security.Interface.MonoTlsSettings System.Net.Security.SslStream::settings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___settings_8;
	// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::impl
	MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* ___impl_9;
	// System.Boolean System.Net.Security.SslStream::explicitSettings
	bool ___explicitSettings_10;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D  : public X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4
{
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyRawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyRawData_11;
	// System.Security.Cryptography.Oid modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySignatureAlgorithm
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___lazySignatureAlgorithm_12;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyVersion
	int32_t ___lazyVersion_13;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySubjectName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazySubjectName_14;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyIssuerName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazyIssuerName_15;
	// System.Security.Cryptography.X509Certificates.PublicKey modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPublicKey
	PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___lazyPublicKey_16;
	// System.Security.Cryptography.AsymmetricAlgorithm modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPrivateKey
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___lazyPrivateKey_17;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyExtensions
	X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* ___lazyExtensions_18;
};

// HttpTestServer/<StartHttpListener>d__5
struct U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C  : public RuntimeObject
{
	// System.Int32 HttpTestServer/<StartHttpListener>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder HttpTestServer/<StartHttpListener>d__5::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Net.HttpListener HttpTestServer/<StartHttpListener>d__5::listener
	HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___listener_2;
	// HttpTestServer HttpTestServer/<StartHttpListener>d__5::<>4__this
	HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* ___U3CU3E4__this_3;
	// System.Net.HttpListenerContext HttpTestServer/<StartHttpListener>d__5::<ctx>5__1
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___U3CctxU3E5__1_4;
	// System.Net.HttpListenerRequest HttpTestServer/<StartHttpListener>d__5::<req>5__2
	HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* ___U3CreqU3E5__2_5;
	// System.Net.HttpListenerResponse HttpTestServer/<StartHttpListener>d__5::<resp>5__3
	HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* ___U3CrespU3E5__3_6;
	// System.Net.HttpListenerContext HttpTestServer/<StartHttpListener>d__5::<>s__4
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___U3CU3Es__4_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext> HttpTestServer/<StartHttpListener>d__5::<>u__1
	TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 ___U3CU3Eu__1_8;
};

// TCPTestServer/<StartAsyncListener>d__5
struct U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565  : public RuntimeObject
{
	// System.Int32 TCPTestServer/<StartAsyncListener>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TCPTestServer/<StartAsyncListener>d__5::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Net.Sockets.TcpListener TCPTestServer/<StartAsyncListener>d__5::listener
	TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* ___listener_2;
	// TCPTestServer TCPTestServer/<StartAsyncListener>d__5::<>4__this
	TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C* ___U3CU3E4__this_3;
	// System.Net.Sockets.TcpClient TCPTestServer/<StartAsyncListener>d__5::<client>5__1
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___U3CclientU3E5__1_4;
	// System.Net.Security.SslStream TCPTestServer/<StartAsyncListener>d__5::<sslStream>5__2
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___U3CsslStreamU3E5__2_5;
	// System.Net.Sockets.TcpClient TCPTestServer/<StartAsyncListener>d__5::<>s__3
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___U3CU3Es__3_6;
	// System.String TCPTestServer/<StartAsyncListener>d__5::<messageData>5__4
	String_t* ___U3CmessageDataU3E5__4_7;
	// System.Byte[] TCPTestServer/<StartAsyncListener>d__5::<message>5__5
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CmessageU3E5__5_8;
	// System.Security.Authentication.AuthenticationException TCPTestServer/<StartAsyncListener>d__5::<e>5__6
	AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* ___U3CeU3E5__6_9;
	// System.ArgumentException TCPTestServer/<StartAsyncListener>d__5::<e>5__7
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* ___U3CeU3E5__7_10;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Sockets.TcpClient> TCPTestServer/<StartAsyncListener>d__5::<>u__1
	TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.TaskAwaiter TCPTestServer/<StartAsyncListener>d__5::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_12;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Security.Authentication.AuthenticationException
struct AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9  : public MulticastDelegate_t
{
};

// System.Threading.ThreadAbortException
struct ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// HttpTestServer
struct HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Net.HttpListener HttpTestServer::<HttpListener>k__BackingField
	HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___U3CHttpListenerU3Ek__BackingField_4;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};

// TCPTestServer
struct TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Net.Sockets.TcpListener TCPTestServer::tcpListener
	TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* ___tcpListener_4;
	// System.Threading.Thread TCPTestServer::tcpListenerThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___tcpListenerThread_5;
	// System.Net.Sockets.TcpClient TCPTestServer::connectedTcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___connectedTcpClient_6;
};

struct TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_StaticFields
{
	// System.Security.Cryptography.X509Certificates.X509Certificate2 TCPTestServer::serverCertificate
	X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___serverCertificate_7;
};

// TestServer
struct TestServer_tC93C441B5073572F90A4D01FE7C866A337E43851  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;

// System.Void System.Net.HttpListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListener__ctor_m16577B4C2A3E2D5CA19F2CB38EEEC6DE3DD70463 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void HttpTestServer::set_HttpListener(System.Net.HttpListener)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpTestServer_set_HttpListener_mD3C0E11EE46A1E95E37474D001A7457C49B97D63_inline (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___value0, const RuntimeMethod* method) ;
// System.Net.HttpListener HttpTestServer::get_HttpListener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* HttpTestServer_get_HttpListener_m80F41A12F8DC6D4B8F8B200FCFCA5A7722FC0707_inline (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, const RuntimeMethod* method) ;
// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::get_Prefixes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* HttpListener_get_Prefixes_mBDE4ABFC6DE6A06BBDF436459FFB84276AC7BD21 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerPrefixCollection_Add_mB373ADD97AF3D45A7C6DC3E6E9119A4F1AE84713 (HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* __this, String_t* ___uriPrefix0, const RuntimeMethod* method) ;
// System.Void HttpTestServer::StartHttpListener(System.Net.HttpListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpTestServer_StartHttpListener_mDD8209DC1F8098D1BB6DE065B783F31181F04614 (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___listener0, const RuntimeMethod* method) ;
// System.Void HttpTestServer/<StartHttpListener>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHttpListenerU3Ed__5__ctor_m33A71AC43590308F5146FE19AEB7F9013D0A6ADD (U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<HttpTestServer/<StartHttpListener>d__5>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mE1099EB90C5A7E408D2CDF47A538D7E91EAED6E0 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListener_Start_mFFF59C04274FCAA5F9C86A1908DDBE1FDC48D867 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext> System.Net.HttpListener::GetContextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* HttpListener_GetContextAsync_m839A198FEE991B0D94967BD12F51B88D70BD7AD0 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>::GetAwaiter()
inline TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7 (Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 (*) (Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753 (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>,HttpTestServer/<StartHttpListener>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mA568597E65AA519FC274A8475B35691CFB3FC8BF (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* ___awaiter0, U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244*, U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>::GetResult()
inline HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966 (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* __this, const RuntimeMethod* method)
{
	return ((  HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* (*) (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Net.HttpListenerRequest System.Net.HttpListenerContext::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* HttpListenerContext_get_Request_m12CFD433DD5D32D9A72388BEBE6256C7BABE1808_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) ;
// System.Net.HttpListenerResponse System.Net.HttpListenerContext::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) ;
// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* HttpListenerResponse_get_Headers_m7F5D0CEED5789D7669275BEDB34E70F553D173CE_inline (HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* __this, const RuntimeMethod* method) ;
// System.Uri System.Net.HttpListenerRequest::get_Url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpListenerRequest_get_Url_mAFF6E2EA7A69C8FC3A86DC63CD0F1CBACB3B9831_inline (HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate__ctor_m94CB616FF79458A742A4BBC8750B65ED66953924 (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* __this, String_t* ___fileName0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener__ctor_m6EDEF45E8F8F2872F3828E801806D9FEC3FF003B (TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___localaddr0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718 (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, RuntimeObject* ___parameter0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Start_m919D559B138B311CFFBBE4BF66E326EABD8F8712 (TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* __this, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* TcpListener_AcceptTcpClient_mD7DFF1228EAB3F886B5BBC6175A0856C84F2B419 (TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* __this, const RuntimeMethod* method) ;
// System.Void SslTcpServer::ProcessClient(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_ProcessClient_mB0453C1ED12359E29EE690B6E01A61D31F914CC4 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpListener::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Stop_mBF4B354EB52138AC9A0184F186894EDBAE3BA5FD (TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m8E941E4D8C281AAEE450CDEEFE5CA4B8F77ABDD1 (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_m91391419C92963CB7B2D1F1DAB448843CD07681B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___innerStream0, bool ___leaveInnerStreamOpen1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89 (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Void SslTcpServer::DisplaySecurityLevel(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplaySecurityLevel_mB19EAB0017B7C9DA9BADF60CC7FC44E5C164EA71 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) ;
// System.Void SslTcpServer::DisplaySecurityServices(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplaySecurityServices_m5F2F84B803123782F2BA3020706CC7DC3A120502 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) ;
// System.Void SslTcpServer::DisplayCertificateInformation(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplayCertificateInformation_mC14FA5624AFDC81F9F23D56713059B03C4E474BA (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) ;
// System.Void SslTcpServer::DisplayStreamProperties(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplayStreamProperties_m0D7011F527A803DC0D5FC2FDAAA199F93080B557 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) ;
// System.String SslTcpServer::ReadMessage(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SslTcpServer_ReadMessage_mBF2CA01E6D7485E4287FC24AE2DD8D9182C4AED6 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___sslStream0, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Write_mBE1327B3F8101843A613196264BB925C2DACEC83 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate_get_Subject_m2568DA6469339937B44FCD5C7C69FF02934D075C (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* __this, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m4952CB65659639A21E91047CAAAF4A88B35B73B5 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2__ctor_m14890D5B2E2764429EA43A0446C8844C3E10389B (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, String_t* ___fileName0, String_t* ___password1, int32_t ___keyStorageFlags2, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_Parse_mD7BEF4D6060D8BE776F559C5F81F195A9917CF1C (String_t* ___ipString0, const RuntimeMethod* method) ;
// System.Void TCPTestServer::StartAsyncListener(System.Net.Sockets.TcpListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestServer_StartAsyncListener_m68565CB33EFB97173275E2825155E66BC6145CFE (TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C* __this, TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* ___listener0, const RuntimeMethod* method) ;
// System.Void TCPTestServer/<StartAsyncListener>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsyncListenerU3Ed__5__ctor_m021FE406355C7AFF866EEB41C2FACDCD9C84B934 (U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TCPTestServer/<StartAsyncListener>d__5>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m8122DA50278ED5437D3C7D6DE4904DBC97B74550 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<System.Net.Sockets.TcpClient> System.Net.Sockets.TcpListener::AcceptTcpClientAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE* TcpListener_AcceptTcpClientAsync_m91306DD7A9B12C018F366207E0C6521740EE5289 (TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.Sockets.TcpClient>::GetAwaiter()
inline TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B Task_1_GetAwaiter_m21D94DB50821D4F81CD9E32CB1ED0C4D1D13D387 (Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B (*) (Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Sockets.TcpClient>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEE9CE0517334D3A098D79692BFFC8F5A93D69A87 (TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Sockets.TcpClient>,TCPTestServer/<StartAsyncListener>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m9E38EE9AB65FE7164D75C7D538CA14CF1DC531C8 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B* ___awaiter0, U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B*, U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m39330AED229FA1BA70485D8A3995487EAF512FD4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Sockets.TcpClient>::GetResult()
inline TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* TaskAwaiter_1_GetResult_m049B9772D7BEF1E25A3E1CF7DBA14B1315CD9C50 (TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B* __this, const RuntimeMethod* method)
{
	return ((  TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* (*) (TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TCPTestServer/<StartAsyncListener>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_mF928726D0348746AABF38E63F84D458D9F5CE9F4 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.String TCPTestServer::ReadMessage(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TCPTestServer_ReadMessage_mC517707E893C4E8A34CC08FD76CA196A1961E8A2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___sslStream0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void SslTcpServer::RunServer(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_RunServer_m19EAA267D63C63320CFFB937F987C647D53973FD (String_t* ___certificate0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void SslTcpServer::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_StopServer_m35ACA6EA8FD847FA3013C5FE24D6F03F1A839D43 (const RuntimeMethod* method) ;
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
// System.Net.HttpListener HttpTestServer::get_HttpListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* HttpTestServer_get_HttpListener_m80F41A12F8DC6D4B8F8B200FCFCA5A7722FC0707 (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, const RuntimeMethod* method) 
{
	{
		// private HttpListener HttpListener { get; set; }
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = __this->___U3CHttpListenerU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void HttpTestServer::set_HttpListener(System.Net.HttpListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpTestServer_set_HttpListener_mD3C0E11EE46A1E95E37474D001A7457C49B97D63 (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___value0, const RuntimeMethod* method) 
{
	{
		// private HttpListener HttpListener { get; set; }
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = ___value0;
		__this->___U3CHttpListenerU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHttpListenerU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void HttpTestServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpTestServer_Start_m5BF62E551C0921A5A34A2367A866A567D21B4CD1 (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91D44FDED7ECC10DE7E3056F15751168AEA4EE06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF848D5B26CBE369E2574358C599C461559B6AD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HttpListener = new HttpListener();
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01*)il2cpp_codegen_object_new(HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HttpListener__ctor_m16577B4C2A3E2D5CA19F2CB38EEEC6DE3DD70463(L_0, NULL);
		HttpTestServer_set_HttpListener_mD3C0E11EE46A1E95E37474D001A7457C49B97D63_inline(__this, L_0, NULL);
		// HttpListener.Prefixes.Add("http://*:80/");
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_1;
		L_1 = HttpTestServer_get_HttpListener_m80F41A12F8DC6D4B8F8B200FCFCA5A7722FC0707_inline(__this, NULL);
		NullCheck(L_1);
		HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* L_2;
		L_2 = HttpListener_get_Prefixes_mBDE4ABFC6DE6A06BBDF436459FFB84276AC7BD21(L_1, NULL);
		NullCheck(L_2);
		HttpListenerPrefixCollection_Add_mB373ADD97AF3D45A7C6DC3E6E9119A4F1AE84713(L_2, _stringLiteral91D44FDED7ECC10DE7E3056F15751168AEA4EE06, NULL);
		// HttpListener.Prefixes.Add("http://192.168.0.171:80/");
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_3;
		L_3 = HttpTestServer_get_HttpListener_m80F41A12F8DC6D4B8F8B200FCFCA5A7722FC0707_inline(__this, NULL);
		NullCheck(L_3);
		HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* L_4;
		L_4 = HttpListener_get_Prefixes_mBDE4ABFC6DE6A06BBDF436459FFB84276AC7BD21(L_3, NULL);
		NullCheck(L_4);
		HttpListenerPrefixCollection_Add_mB373ADD97AF3D45A7C6DC3E6E9119A4F1AE84713(L_4, _stringLiteralEF848D5B26CBE369E2574358C599C461559B6AD5, NULL);
		// StartHttpListener(HttpListener);
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_5;
		L_5 = HttpTestServer_get_HttpListener_m80F41A12F8DC6D4B8F8B200FCFCA5A7722FC0707_inline(__this, NULL);
		HttpTestServer_StartHttpListener_mDD8209DC1F8098D1BB6DE065B783F31181F04614(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void HttpTestServer::StartHttpListener(System.Net.HttpListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpTestServer_StartHttpListener_mDD8209DC1F8098D1BB6DE065B783F31181F04614 (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mE1099EB90C5A7E408D2CDF47A538D7E91EAED6E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* V_0 = NULL;
	{
		U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* L_0 = (U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C*)il2cpp_codegen_object_new(U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartHttpListenerU3Ed__5__ctor_m33A71AC43590308F5146FE19AEB7F9013D0A6ADD(L_0, NULL);
		V_0 = L_0;
		U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* L_4 = V_0;
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_5 = ___listener0;
		NullCheck(L_4);
		L_4->___listener_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___listener_2), (void*)L_5);
		U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* L_7 = V_0;
		NullCheck(L_7);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mE1099EB90C5A7E408D2CDF47A538D7E91EAED6E0(L_8, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mE1099EB90C5A7E408D2CDF47A538D7E91EAED6E0_RuntimeMethod_var);
		return;
	}
}
// System.Void HttpTestServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpTestServer__ctor_m1154E7CABFD3D7AFD75C0803E68FEF9BA649D4EC (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HttpTestServer/<StartHttpListener>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHttpListenerU3Ed__5__ctor_m33A71AC43590308F5146FE19AEB7F9013D0A6ADD (U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void HttpTestServer/<StartHttpListener>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHttpListenerU3Ed__5_MoveNext_mC73773833D45F629139342DE872993DC34EDD702 (U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mA568597E65AA519FC274A8475B35691CFB3FC8BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29CDA606FB2D4E718EE49BB90715B2F6A53AAD6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E61F79FC628011037B6F1067F71A6310836049);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral535131DF0A18C56AD1457187193D25C93C302BBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FAF08AC1D3A44FA8EF0A68AC2E0862F0344B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A6A86D68C8C631D4DEEB24F629AFEF6F468F75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F8DA18F6A4F400B219A8556529A5C997A6DD72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96C54516FB0BB47158E1C2143F31D36D07D5EAE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_006d_1;
		}

IL_000e_1:
		{
			// listener.Start();
			HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_2 = __this->___listener_2;
			NullCheck(L_2);
			HttpListener_Start_mFFF59C04274FCAA5F9C86A1908DDBE1FDC48D867(L_2, NULL);
			// Debug.Log("Starting Listener");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral96C54516FB0BB47158E1C2143F31D36D07D5EAE8, NULL);
			goto IL_017a_1;
		}

IL_002b_1:
		{
			// HttpListenerContext ctx = await listener.GetContextAsync();
			HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_3 = __this->___listener_2;
			NullCheck(L_3);
			Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* L_4;
			L_4 = HttpListener_GetContextAsync_m839A198FEE991B0D94967BD12F51B88D70BD7AD0(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 L_5;
			L_5 = Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7(L_4, Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7_RuntimeMethod_var);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753((&V_1), TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0089_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 L_8 = V_1;
			__this->___U3CU3Eu__1_8 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mA568597E65AA519FC274A8475B35691CFB3FC8BF(L_9, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C_mA568597E65AA519FC274A8475B35691CFB3FC8BF_RuntimeMethod_var);
			goto IL_019c;
		}

IL_006d_1:
		{
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 L_10 = __this->___U3CU3Eu__1_8;
			V_1 = L_10;
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* L_11 = (&__this->___U3CU3Eu__1_8);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0089_1:
		{
			HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_13;
			L_13 = TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966((&V_1), TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966_RuntimeMethod_var);
			__this->___U3CU3Es__4_7 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_7), (void*)L_13);
			HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_14 = __this->___U3CU3Es__4_7;
			__this->___U3CctxU3E5__1_4 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CctxU3E5__1_4), (void*)L_14);
			__this->___U3CU3Es__4_7 = (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_7), (void*)(HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412*)NULL);
			// Debug.Log("Context");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0849E26A6A4A2DAE7ACBD20B9787BC3CB5CF6F4D, NULL);
			// HttpListenerRequest req = ctx.Request;
			HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_15 = __this->___U3CctxU3E5__1_4;
			NullCheck(L_15);
			HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* L_16;
			L_16 = HttpListenerContext_get_Request_m12CFD433DD5D32D9A72388BEBE6256C7BABE1808_inline(L_15, NULL);
			__this->___U3CreqU3E5__2_5 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_5), (void*)L_16);
			// HttpListenerResponse resp = ctx.Response;
			HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_17 = __this->___U3CctxU3E5__1_4;
			NullCheck(L_17);
			HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_18;
			L_18 = HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline(L_17, NULL);
			__this->___U3CrespU3E5__3_6 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrespU3E5__3_6), (void*)L_18);
			// resp.Headers.Add("Access-Control-Allow-Origin", "*");
			HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_19 = __this->___U3CrespU3E5__3_6;
			NullCheck(L_19);
			WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* L_20;
			L_20 = HttpListenerResponse_get_Headers_m7F5D0CEED5789D7669275BEDB34E70F553D173CE_inline(L_19, NULL);
			NullCheck(L_20);
			VirtualActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_20, _stringLiteral29CDA606FB2D4E718EE49BB90715B2F6A53AAD6F, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
			// resp.Headers.Add("Access-Control-Allow-Private-Network", "true");
			HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_21 = __this->___U3CrespU3E5__3_6;
			NullCheck(L_21);
			WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* L_22;
			L_22 = HttpListenerResponse_get_Headers_m7F5D0CEED5789D7669275BEDB34E70F553D173CE_inline(L_21, NULL);
			NullCheck(L_22);
			VirtualActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_22, _stringLiteral7A6A86D68C8C631D4DEEB24F629AFEF6F468F75A, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
			// if (req.Url.AbsolutePath == "/get-offer")
			HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* L_23 = __this->___U3CreqU3E5__2_5;
			NullCheck(L_23);
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_24;
			L_24 = HttpListenerRequest_get_Url_mAFF6E2EA7A69C8FC3A86DC63CD0F1CBACB3B9831_inline(L_23, NULL);
			NullCheck(L_24);
			String_t* L_25;
			L_25 = Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA(L_24, NULL);
			bool L_26;
			L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral78FAF08AC1D3A44FA8EF0A68AC2E0862F0344B65, NULL);
			V_3 = L_26;
			bool L_27 = V_3;
			if (!L_27)
			{
				goto IL_0137_1;
			}
		}
		{
			// Debug.Log("Get Offer");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral49E61F79FC628011037B6F1067F71A6310836049, NULL);
		}

IL_0137_1:
		{
			// if (req.Url.AbsolutePath == "/send-answer-get-candidate")
			HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* L_28 = __this->___U3CreqU3E5__2_5;
			NullCheck(L_28);
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_29;
			L_29 = HttpListenerRequest_get_Url_mAFF6E2EA7A69C8FC3A86DC63CD0F1CBACB3B9831_inline(L_28, NULL);
			NullCheck(L_29);
			String_t* L_30;
			L_30 = Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA(L_29, NULL);
			bool L_31;
			L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral83F8DA18F6A4F400B219A8556529A5C997A6DD72, NULL);
			V_4 = L_31;
			bool L_32 = V_4;
			if (!L_32)
			{
				goto IL_0164_1;
			}
		}
		{
			// Debug.Log("Send Answer");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral535131DF0A18C56AD1457187193D25C93C302BBD, NULL);
		}

IL_0164_1:
		{
			__this->___U3CctxU3E5__1_4 = (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CctxU3E5__1_4), (void*)(HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412*)NULL);
			__this->___U3CreqU3E5__2_5 = (HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreqU3E5__2_5), (void*)(HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8*)NULL);
			__this->___U3CrespU3E5__3_6 = (HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrespU3E5__3_6), (void*)(HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1*)NULL);
		}

IL_017a_1:
		{
			// while (true)
			V_5 = (bool)1;
			goto IL_002b_1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0182;
		}
		throw e;
	}

CATCH_0182:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_33 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_33, L_34, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019c;
	}// end catch (depth: 1)

IL_019c:
	{
		return;
	}
}
// System.Void HttpTestServer/<StartHttpListener>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHttpListenerU3Ed__5_SetStateMachine_m9862574426DACBA197F9237EB1A58EB294B73DE3 (U3CStartHttpListenerU3Ed__5_tF620CE57FB207E7030922C9717AB5CB3A573274C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
// System.Void SslTcpServer::RunServer(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_RunServer_m19EAA267D63C63320CFFB937F987C647D53973FD (String_t* ___certificate0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslTcpServer_Listen_mCCADE6A6D71270ABB5442D8183C560467A2346AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE8776404133CD14DC91074EA49ABF1AADD2540F);
		s_Il2CppMethodInitialized = true;
	}
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_0 = NULL;
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* V_1 = NULL;
	bool V_2 = false;
	{
		// serverCertificate = new X509Certificate(certificate, password);
		String_t* L_0 = ___certificate0;
		String_t* L_1 = ___password1;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_2 = (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)il2cpp_codegen_object_new(X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		X509Certificate__ctor_m94CB616FF79458A742A4BBC8750B65ED66953924(L_2, L_0, L_1, NULL);
		((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___serverCertificate_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___serverCertificate_0), (void*)L_2);
		// listener = new TcpListener(IPAddress.Loopback, 443);
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Loopback_1;
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_4 = (TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82*)il2cpp_codegen_object_new(TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TcpListener__ctor_m6EDEF45E8F8F2872F3828E801806D9FEC3FF003B(L_4, L_3, ((int32_t)443), NULL);
		((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listener_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listener_1), (void*)L_4);
		// Thread listenerThread = new Thread(new ParameterizedThreadStart(Listen));
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_5 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_5, NULL, (intptr_t)((void*)SslTcpServer_Listen_mCCADE6A6D71270ABB5442D8183C560467A2346AD_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_6, L_5, NULL);
		V_0 = L_6;
		// listenerThread.Start(listener);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = V_0;
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_8 = ((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listener_1;
		NullCheck(L_7);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_7, L_8, NULL);
		// listener.Start();
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_9 = ((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listener_1;
		NullCheck(L_9);
		TcpListener_Start_m919D559B138B311CFFBBE4BF66E326EABD8F8712(L_9, NULL);
		goto IL_006b;
	}

IL_004c:
	{
		// Console.WriteLine("Waiting for a client to connect...");
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteralEE8776404133CD14DC91074EA49ABF1AADD2540F, NULL);
		// TcpClient client = listener.AcceptTcpClient();
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_10 = ((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listener_1;
		NullCheck(L_10);
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_11;
		L_11 = TcpListener_AcceptTcpClient_mD7DFF1228EAB3F886B5BBC6175A0856C84F2B419(L_10, NULL);
		V_1 = L_11;
		// ProcessClient(client);
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_12 = V_1;
		SslTcpServer_ProcessClient_mB0453C1ED12359E29EE690B6E01A61D31F914CC4(L_12, NULL);
	}

IL_006b:
	{
		// while (true)
		V_2 = (bool)1;
		goto IL_004c;
	}
}
// System.Void SslTcpServer::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_StopServer_m35ACA6EA8FD847FA3013C5FE24D6F03F1A839D43 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listener.Stop();
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_0 = ((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listener_1;
		NullCheck(L_0);
		TcpListener_Stop_mBF4B354EB52138AC9A0184F186894EDBAE3BA5FD(L_0, NULL);
		// listenerThread.Abort();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1 = ((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listenerThread_2;
		NullCheck(L_1);
		Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941(L_1, NULL);
		// listenerThread.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = ((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___listenerThread_2;
		NullCheck(L_2);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(L_2, NULL);
		// }
		return;
	}
}
// System.Void SslTcpServer::Listen(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_Listen_mCCADE6A6D71270ABB5442D8183C560467A2346AD (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslTcpServer_ProcessClient_mB0453C1ED12359E29EE690B6E01A61D31F914CC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral767DAE9C22C37B77539B9ADCBD99D4E259A785D6);
		s_Il2CppMethodInitialized = true;
	}
	TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* V_0 = NULL;
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* V_4 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	Exception_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	Exception_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B13_2 = NULL;
	Exception_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	{
		// TcpListener listener = (TcpListener)obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82*)CastclassClass((RuntimeObject*)L_0, TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82_il2cpp_TypeInfo_var));
		// listener.Start();
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_1 = V_0;
		NullCheck(L_1);
		TcpListener_Start_m919D559B138B311CFFBBE4BF66E326EABD8F8712(L_1, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			goto IL_0042_1;
		}

IL_0012_1:
		{
			// TcpClient client = listener.AcceptTcpClient();
			TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_2 = V_0;
			NullCheck(L_2);
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_3;
			L_3 = TcpListener_AcceptTcpClient_mD7DFF1228EAB3F886B5BBC6175A0856C84F2B419(L_2, NULL);
			V_1 = L_3;
			// Debug.Log("Accepted Client");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral767DAE9C22C37B77539B9ADCBD99D4E259A785D6, NULL);
			goto IL_0028_1;
		}

IL_0027_1:
		{
		}

IL_0028_1:
		{
			// while (!ThreadPool.QueueUserWorkItem
			//            (new WaitCallback(ProcessClient), client)) ;
			WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_4 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_4, NULL, (intptr_t)((void*)SslTcpServer_ProcessClient_mB0453C1ED12359E29EE690B6E01A61D31F914CC4_RuntimeMethod_var), NULL);
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_5 = V_1;
			bool L_6;
			L_6 = ThreadPool_QueueUserWorkItem_m8E941E4D8C281AAEE450CDEEFE5CA4B8F77ABDD1(L_4, L_5, NULL);
			V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_2;
			if (L_7)
			{
				goto IL_0027_1;
			}
		}
		{
		}

IL_0042_1:
		{
			// while (true)
			V_3 = (bool)1;
			goto IL_0012_1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0046:
	{// begin catch(System.Threading.ThreadAbortException)
		{
			// catch (ThreadAbortException e)
			V_4 = ((ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*)IL2CPP_GET_ACTIVE_EXCEPTION(ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4*));
			// Debug.LogError("Thread Abort Exception: " + e.Message + e.InnerException);
			ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_8 = V_4;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
			ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4* L_10 = V_4;
			NullCheck(L_10);
			Exception_t* L_11;
			L_11 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_10, NULL);
			Exception_t* L_12 = L_11;
			G_B8_0 = L_12;
			G_B8_1 = L_9;
			G_B8_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8FA56226D5D0498EF969989D0BBE327D333956E));
			if (L_12)
			{
				G_B9_0 = L_12;
				G_B9_1 = L_9;
				G_B9_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD8FA56226D5D0498EF969989D0BBE327D333956E));
				goto IL_0063;
			}
		}
		{
			G_B10_0 = ((String_t*)(NULL));
			G_B10_1 = G_B8_1;
			G_B10_2 = G_B8_2;
			goto IL_0068;
		}

IL_0063:
		{
			NullCheck(G_B9_0);
			String_t* L_13;
			L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
			G_B10_0 = L_13;
			G_B10_1 = G_B9_1;
			G_B10_2 = G_B9_2;
		}

IL_0068:
		{
			String_t* L_14;
			L_14 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B10_2, G_B10_1, G_B10_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_14, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a6;
		}
	}// end catch (depth: 1)

CATCH_0076:
	{// begin catch(System.Net.Sockets.SocketException)
		{
			// catch (SocketException e)
			V_5 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
			// Debug.LogError("Socket Exception: " + e.Message + e.InnerException);
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_15 = V_5;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_17 = V_5;
			NullCheck(L_17);
			Exception_t* L_18;
			L_18 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_17, NULL);
			Exception_t* L_19 = L_18;
			G_B12_0 = L_19;
			G_B12_1 = L_16;
			G_B12_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E035E807F262AF3C131FBBCE24D2939D1DA0D81));
			if (L_19)
			{
				G_B13_0 = L_19;
				G_B13_1 = L_16;
				G_B13_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E035E807F262AF3C131FBBCE24D2939D1DA0D81));
				goto IL_0093;
			}
		}
		{
			G_B14_0 = ((String_t*)(NULL));
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			goto IL_0098;
		}

IL_0093:
		{
			NullCheck(G_B13_0);
			String_t* L_20;
			L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B13_0);
			G_B14_0 = L_20;
			G_B14_1 = G_B13_1;
			G_B14_2 = G_B13_2;
		}

IL_0098:
		{
			String_t* L_21;
			L_21 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B14_2, G_B14_1, G_B14_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_21, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a6;
		}
	}// end catch (depth: 1)

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void SslTcpServer::ProcessClient(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_ProcessClient_mB0453C1ED12359E29EE690B6E01A61D31F914CC4 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral030C2552B6CAF95EAF76628A7C8CBE754AE3C3F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF455596D6209BD156B301BAB70D22792236598);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral347FAF4BD367FB1326B0472841C29A3D0B06520B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA8A1CFF0BA9EB61EACCA393170B32558FE5BD83);
		s_Il2CppMethodInitialized = true;
	}
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* V_0 = NULL;
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// TcpClient client = (TcpClient) obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)CastclassClass((RuntimeObject*)L_0, TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var));
		// SslStream sslStream = new SslStream(
		//     client.GetStream(), false);
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_1 = V_0;
		NullCheck(L_1);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_2;
		L_2 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_1, NULL);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_3 = (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*)il2cpp_codegen_object_new(SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SslStream__ctor_m91391419C92963CB7B2D1F1DAB448843CD07681B(L_3, L_2, (bool)0, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fc:
			{// begin finally (depth: 1)
				// sslStream.Close();
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_4 = V_1;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_4);
				// client.Close();
				TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_5 = V_0;
				NullCheck(L_5);
				TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// sslStream.AuthenticateAsServer(serverCertificate, false, SslProtocols.Default, true);
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_6 = V_1;
				X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_7 = ((SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_StaticFields*)il2cpp_codegen_static_fields_for(SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A_il2cpp_TypeInfo_var))->___serverCertificate_0;
				NullCheck(L_6);
				VirtualActionInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, bool, int32_t, bool >::Invoke(39 /* System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean) */, L_6, L_7, (bool)0, ((int32_t)240), (bool)1);
				// DisplaySecurityLevel(sslStream);
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_8 = V_1;
				SslTcpServer_DisplaySecurityLevel_mB19EAB0017B7C9DA9BADF60CC7FC44E5C164EA71(L_8, NULL);
				// DisplaySecurityServices(sslStream);
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_9 = V_1;
				SslTcpServer_DisplaySecurityServices_m5F2F84B803123782F2BA3020706CC7DC3A120502(L_9, NULL);
				// DisplayCertificateInformation(sslStream);
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_10 = V_1;
				SslTcpServer_DisplayCertificateInformation_mC14FA5624AFDC81F9F23D56713059B03C4E474BA(L_10, NULL);
				// DisplayStreamProperties(sslStream);
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_11 = V_1;
				SslTcpServer_DisplayStreamProperties_m0D7011F527A803DC0D5FC2FDAAA199F93080B557(L_11, NULL);
				// sslStream.ReadTimeout = 5000;
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_12 = V_1;
				NullCheck(L_12);
				VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void System.IO.Stream::set_ReadTimeout(System.Int32) */, L_12, ((int32_t)5000));
				// sslStream.WriteTimeout = 5000;
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_13 = V_1;
				NullCheck(L_13);
				VirtualActionInvoker1< int32_t >::Invoke(15 /* System.Void System.IO.Stream::set_WriteTimeout(System.Int32) */, L_13, ((int32_t)5000));
				// Console.WriteLine("Waiting for client message...");
				il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
				Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteral030C2552B6CAF95EAF76628A7C8CBE754AE3C3F5, NULL);
				// string messageData = ReadMessage(sslStream);
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_14 = V_1;
				String_t* L_15;
				L_15 = SslTcpServer_ReadMessage_mBF2CA01E6D7485E4287FC24AE2DD8D9182C4AED6(L_14, NULL);
				V_2 = L_15;
				// Console.WriteLine("Received: {0}", messageData);
				String_t* L_16 = V_2;
				Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(_stringLiteralFA8A1CFF0BA9EB61EACCA393170B32558FE5BD83, L_16, NULL);
				// byte[] message = Encoding.UTF8.GetBytes("Hello from the server.<EOF>");
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
				L_17 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				NullCheck(L_17);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
				L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, _stringLiteral2FF455596D6209BD156B301BAB70D22792236598);
				V_3 = L_18;
				// Console.WriteLine("Sending hello message.");
				Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteral347FAF4BD367FB1326B0472841C29A3D0B06520B, NULL);
				// sslStream.Write(message);
				SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_19 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
				NullCheck(L_19);
				SslStream_Write_mBE1327B3F8101843A613196264BB925C2DACEC83(L_19, L_20, NULL);
				goto IL_00fa_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00a1_1;
				}
				throw e;
			}

CATCH_00a1_1:
			{// begin catch(System.Security.Authentication.AuthenticationException)
				{
					// catch (AuthenticationException e)
					V_4 = ((AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8*)IL2CPP_GET_ACTIVE_EXCEPTION(AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8*));
					// Console.WriteLine("Exception: {0}", e.Message);
					AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* L_21 = V_4;
					NullCheck(L_21);
					String_t* L_22;
					L_22 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_21);
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
					Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B9CAE50CA32CE68AA9F00077C1C9A89639E7214)), L_22, NULL);
					// if (e.InnerException != null)
					AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* L_23 = V_4;
					NullCheck(L_23);
					Exception_t* L_24;
					L_24 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_23, NULL);
					V_5 = (bool)((!(((RuntimeObject*)(Exception_t*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_25 = V_5;
					if (!L_25)
					{
						goto IL_00df_1;
					}
				}
				{
					// Console.WriteLine("Inner exception: {0}", e.InnerException.Message);
					AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* L_26 = V_4;
					NullCheck(L_26);
					Exception_t* L_27;
					L_27 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_26, NULL);
					NullCheck(L_27);
					String_t* L_28;
					L_28 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_27);
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
					Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03B02F3ED7301735A583D80CBEB9D1CE3BF7DE58)), L_28, NULL);
				}

IL_00df_1:
				{
					// Console.WriteLine("Authentication failed - closing the connection.");
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
					Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6421ABDD0A7FBCF912B77F4554289858A338D5C)), NULL);
					// sslStream.Close();
					SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_29 = V_1;
					NullCheck(L_29);
					VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_29);
					// client.Close();
					TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_30 = V_0;
					NullCheck(L_30);
					TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_30, NULL);
					// return;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_010d;
				}
			}// end catch (depth: 2)

IL_00fa_1:
			{
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.String SslTcpServer::ReadMessage(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SslTcpServer_ReadMessage_mBF2CA01E6D7485E4287FC24AE2DD8D9182C4AED6 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___sslStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* V_3 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	{
		// byte[] buffer = new byte[2048];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		V_0 = L_0;
		// StringBuilder messageData = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_1 = L_1;
		// int bytes = -1;
		V_2 = (-1);
	}

IL_0014:
	{
		// bytes = sslStream.Read(buffer, 0, buffer.Length);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_2 = ___sslStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_2 = L_5;
		// Decoder decoder = Encoding.UTF8.GetDecoder();
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_6);
		Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* L_7;
		L_7 = VirtualFuncInvoker0< Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* >::Invoke(29 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, L_6);
		V_3 = L_7;
		// char[] chars = new char[decoder.GetCharCount(buffer, 0, bytes)];
		Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_4 = L_12;
		// decoder.GetChars(buffer, 0, bytes, chars, 0);
		Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_4;
		NullCheck(L_13);
		int32_t L_17;
		L_17 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_13, L_14, 0, L_15, L_16, 0);
		// messageData.Append(chars);
		StringBuilder_t* L_18 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_4;
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_18, L_19, NULL);
		// if (messageData.ToString().IndexOf("<EOF>") != -1)
		StringBuilder_t* L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_22, _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0071;
		}
	}
	{
		// break;
		goto IL_007c;
	}

IL_0071:
	{
		// } while (bytes != 0);
		int32_t L_25 = V_2;
		V_6 = (bool)((!(((uint32_t)L_25) <= ((uint32_t)0)))? 1 : 0);
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_0014;
		}
	}

IL_007c:
	{
		// return messageData.ToString();
		StringBuilder_t* L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		V_7 = L_28;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		String_t* L_29 = V_7;
		return L_29;
	}
}
// System.Void SslTcpServer::DisplaySecurityLevel(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplaySecurityLevel_mB19EAB0017B7C9DA9BADF60CC7FC44E5C164EA71 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherAlgorithmType_tE6ADFA10102C064ED2676C6ACF0281E313F7F9F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExchangeAlgorithmType_tD749C4726985B9B18DDA62264A5F2A6261326330_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashAlgorithmType_t2C8D31F078403890365F86C877EF54AC00993927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslProtocols_t21FADB874FCAEC5039AE593AA3544639C938C77E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E1C50242DDA5AD6A0D024D04ED10C8EC013A11F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68A4CC697FA43BC45F63BFB29E690FE45392F0AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6B9A18E6AE19A17709E806B73C0F35370A7FC9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB81BDCC80DE20811A3919F59156446BD4B3EA50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Console.WriteLine("Cipher: {0} strength {1}", stream.CipherAlgorithm, stream.CipherStrength);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_0 = ___stream0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(45 /* System.Security.Authentication.CipherAlgorithmType System.Net.Security.SslStream::get_CipherAlgorithm() */, L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(CipherAlgorithmType_tE6ADFA10102C064ED2676C6ACF0281E313F7F9F8_il2cpp_TypeInfo_var, &L_2);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_4 = ___stream0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(46 /* System.Int32 System.Net.Security.SslStream::get_CipherStrength() */, L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27(_stringLiteral68A4CC697FA43BC45F63BFB29E690FE45392F0AD, L_3, L_7, NULL);
		// Console.WriteLine("Hash: {0} strength {1}", stream.HashAlgorithm, stream.HashStrength);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_8 = ___stream0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(47 /* System.Security.Authentication.HashAlgorithmType System.Net.Security.SslStream::get_HashAlgorithm() */, L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(HashAlgorithmType_t2C8D31F078403890365F86C877EF54AC00993927_il2cpp_TypeInfo_var, &L_10);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_12 = ___stream0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(48 /* System.Int32 System.Net.Security.SslStream::get_HashStrength() */, L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27(_stringLiteralFB81BDCC80DE20811A3919F59156446BD4B3EA50, L_11, L_15, NULL);
		// Console.WriteLine("Key exchange: {0} strength {1}", stream.KeyExchangeAlgorithm, stream.KeyExchangeStrength);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_16 = ___stream0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(49 /* System.Security.Authentication.ExchangeAlgorithmType System.Net.Security.SslStream::get_KeyExchangeAlgorithm() */, L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(ExchangeAlgorithmType_tD749C4726985B9B18DDA62264A5F2A6261326330_il2cpp_TypeInfo_var, &L_18);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_20 = ___stream0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(50 /* System.Int32 System.Net.Security.SslStream::get_KeyExchangeStrength() */, L_20);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27(_stringLiteralD6B9A18E6AE19A17709E806B73C0F35370A7FC9E, L_19, L_23, NULL);
		// Console.WriteLine("Protocol: {0}", stream.SslProtocol);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_24 = ___stream0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Security.Authentication.SslProtocols System.Net.Security.SslStream::get_SslProtocol() */, L_24);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(SslProtocols_t21FADB874FCAEC5039AE593AA3544639C938C77E_il2cpp_TypeInfo_var, &L_26);
		Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(_stringLiteral3E1C50242DDA5AD6A0D024D04ED10C8EC013A11F, L_27, NULL);
		// }
		return;
	}
}
// System.Void SslTcpServer::DisplaySecurityServices(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplaySecurityServices_m5F2F84B803123782F2BA3020706CC7DC3A120502 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F516D761B70CC4E7CBA57DE085D7BA9790CE19A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423E80DC51ED94C3711B83EDAC2027048C4CFF44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64BAFD8753E077D339426D532A5540240EE1767);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Console.WriteLine("Is authenticated: {0} as server? {1}", stream.IsAuthenticated, stream.IsServer);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated() */, L_0);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_4 = ___stream0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Net.Security.AuthenticatedStream::get_IsServer() */, L_4);
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27(_stringLiteralD64BAFD8753E077D339426D532A5540240EE1767, L_3, L_7, NULL);
		// Console.WriteLine("IsSigned: {0}", stream.IsSigned);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_8 = ___stream0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Net.Security.AuthenticatedStream::get_IsSigned() */, L_8);
		bool L_10 = L_9;
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(_stringLiteral423E80DC51ED94C3711B83EDAC2027048C4CFF44, L_11, NULL);
		// Console.WriteLine("Is Encrypted: {0}", stream.IsEncrypted);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_12 = ___stream0;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Net.Security.AuthenticatedStream::get_IsEncrypted() */, L_12);
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(_stringLiteral3F516D761B70CC4E7CBA57DE085D7BA9790CE19A, L_15, NULL);
		// }
		return;
	}
}
// System.Void SslTcpServer::DisplayStreamProperties(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplayStreamProperties_m0D7011F527A803DC0D5FC2FDAAA199F93080B557 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5175183C935EEAF51A650608FF4FCB0D480F5CA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AC1126BA3C02696F9CB851ED6F40A15660BC1C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Console.WriteLine("Can read: {0}, write {1}", stream.CanRead, stream.CanWrite);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_4 = ___stream0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_4);
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m8EA4BDC446722A76375AC8DB04FEDB134E7A9A27(_stringLiteral8AC1126BA3C02696F9CB851ED6F40A15660BC1C9, L_3, L_7, NULL);
		// Console.WriteLine("Can timeout: {0}", stream.CanTimeout);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_8 = ___stream0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanTimeout() */, L_8);
		bool L_10 = L_9;
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(_stringLiteral5175183C935EEAF51A650608FF4FCB0D480F5CA7, L_11, NULL);
		// }
		return;
	}
}
// System.Void SslTcpServer::DisplayCertificateInformation(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer_DisplayCertificateInformation_mC14FA5624AFDC81F9F23D56713059B03C4E474BA (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B174832B04B0F5FB27B84068D28462AF0AA0A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E3BC3271411B6B3561912AA480394C101561FCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A4ED4AED56B6AC16D23408FB8CFC1CEFE02A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F623B00EE0D156C6CD100745FEA2F291E9F7B87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6EC725F9D920FA3AF57F1603E4B984B41251C65);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* V_0 = NULL;
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// Console.WriteLine("Certificate revocation list checked: {0}", stream.CheckCertRevocationStatus);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Net.Security.SslStream::get_CheckCertRevocationStatus() */, L_0);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mD2B60BC2B6457B8B15619B17EEFA74CD662BD724(_stringLiteralA6EC725F9D920FA3AF57F1603E4B984B41251C65, L_3, NULL);
		// X509Certificate localCertificate = stream.LocalCertificate;
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_4 = ___stream0;
		NullCheck(L_4);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_5;
		L_5 = VirtualFuncInvoker0< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* >::Invoke(43 /* System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_LocalCertificate() */, L_4);
		V_0 = L_5;
		// if (stream.LocalCertificate != null)
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_6 = ___stream0;
		NullCheck(L_6);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_7;
		L_7 = VirtualFuncInvoker0< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* >::Invoke(43 /* System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_LocalCertificate() */, L_6);
		V_2 = (bool)((!(((RuntimeObject*)(X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// Console.WriteLine("Local cert was issued to {0} and is valid from {1} until {2}.",
		//     localCertificate.Subject,
		//     localCertificate.GetEffectiveDateString(),
		//     localCertificate.GetExpirationDateString());
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = X509Certificate_get_Subject_m2568DA6469339937B44FCD5C7C69FF02934D075C(L_9, NULL);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString() */, L_11);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString() */, L_13);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m4952CB65659639A21E91047CAAAF4A88B35B73B5(_stringLiteral6B174832B04B0F5FB27B84068D28462AF0AA0A46, L_10, L_12, L_14, NULL);
		goto IL_0059;
	}

IL_004c:
	{
		// Console.WriteLine("Local certificate is null.");
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteral8F623B00EE0D156C6CD100745FEA2F291E9F7B87, NULL);
	}

IL_0059:
	{
		// X509Certificate remoteCertificate = stream.RemoteCertificate;
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_15 = ___stream0;
		NullCheck(L_15);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_16;
		L_16 = VirtualFuncInvoker0< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* >::Invoke(44 /* System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_RemoteCertificate() */, L_15);
		V_1 = L_16;
		// if (stream.RemoteCertificate != null)
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_17 = ___stream0;
		NullCheck(L_17);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_18;
		L_18 = VirtualFuncInvoker0< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* >::Invoke(44 /* System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_RemoteCertificate() */, L_17);
		V_3 = (bool)((!(((RuntimeObject*)(X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_008e;
		}
	}
	{
		// Console.WriteLine("Remote cert was issued to {0} and is valid from {1} until {2}.",
		//     remoteCertificate.Subject,
		//     remoteCertificate.GetEffectiveDateString(),
		//     remoteCertificate.GetExpirationDateString());
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = X509Certificate_get_Subject_m2568DA6469339937B44FCD5C7C69FF02934D075C(L_20, NULL);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString() */, L_22);
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString() */, L_24);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m4952CB65659639A21E91047CAAAF4A88B35B73B5(_stringLiteral6E3BC3271411B6B3561912AA480394C101561FCA, L_21, L_23, L_25, NULL);
		goto IL_009b;
	}

IL_008e:
	{
		// Console.WriteLine("Remote certificate is null.");
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteral80A4ED4AED56B6AC16D23408FB8CFC1CEFE02A17, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void SslTcpServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslTcpServer__ctor_m3D3BABB82C557587CCC8FF4DB31D3832A457ADD1 (SslTcpServer_t8AFA4968E5DCC22C7A721DD07849FA1583959E9A* __this, const RuntimeMethod* method) 
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
// System.Void TCPTestServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestServer_Start_m55D7759F4A67AB552869C842527A09D38170C95E (TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC413BA69220C7D2121629F2A59F0477386E405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4B7E403293A3EB46818379ED599B45D01C96C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4E32A0F752FFBD66597D5C010665C1BF21A41B6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string certPath = "D://Certs/Sat/1/www.crashblox.net.pfx";
		V_0 = _stringLiteral5FC413BA69220C7D2121629F2A59F0477386E405;
		// string certPass = "bXPVRKsUGhbK";
		V_1 = _stringLiteralDE4B7E403293A3EB46818379ED599B45D01C96C1;
		// serverCertificate = new X509Certificate2(certPath, certPass, X509KeyStorageFlags.Exportable);
		String_t* L_0 = V_0;
		String_t* L_1 = V_1;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_2 = (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)il2cpp_codegen_object_new(X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		X509Certificate2__ctor_m14890D5B2E2764429EA43A0446C8844C3E10389B(L_2, L_0, L_1, 4, NULL);
		((TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_StaticFields*)il2cpp_codegen_static_fields_for(TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_il2cpp_TypeInfo_var))->___serverCertificate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_StaticFields*)il2cpp_codegen_static_fields_for(TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_il2cpp_TypeInfo_var))->___serverCertificate_7), (void*)L_2);
		// tcpListener = new TcpListener(IPAddress.Parse("192.168.0.171"), 443);
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3;
		L_3 = IPAddress_Parse_mD7BEF4D6060D8BE776F559C5F81F195A9917CF1C(_stringLiteralE4E32A0F752FFBD66597D5C010665C1BF21A41B6, NULL);
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_4 = (TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82*)il2cpp_codegen_object_new(TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TcpListener__ctor_m6EDEF45E8F8F2872F3828E801806D9FEC3FF003B(L_4, L_3, ((int32_t)443), NULL);
		__this->___tcpListener_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tcpListener_4), (void*)L_4);
		// StartAsyncListener(tcpListener);
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_5 = __this->___tcpListener_4;
		TCPTestServer_StartAsyncListener_m68565CB33EFB97173275E2825155E66BC6145CFE(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void TCPTestServer::StartAsyncListener(System.Net.Sockets.TcpListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestServer_StartAsyncListener_m68565CB33EFB97173275E2825155E66BC6145CFE (TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C* __this, TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m8122DA50278ED5437D3C7D6DE4904DBC97B74550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* V_0 = NULL;
	{
		U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* L_0 = (U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565*)il2cpp_codegen_object_new(U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartAsyncListenerU3Ed__5__ctor_m021FE406355C7AFF866EEB41C2FACDCD9C84B934(L_0, NULL);
		V_0 = L_0;
		U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* L_4 = V_0;
		TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_5 = ___listener0;
		NullCheck(L_4);
		L_4->___listener_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___listener_2), (void*)L_5);
		U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* L_7 = V_0;
		NullCheck(L_7);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m8122DA50278ED5437D3C7D6DE4904DBC97B74550(L_8, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m8122DA50278ED5437D3C7D6DE4904DBC97B74550_RuntimeMethod_var);
		return;
	}
}
// System.String TCPTestServer::ReadMessage(System.Net.Security.SslStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TCPTestServer_ReadMessage_mC517707E893C4E8A34CC08FD76CA196A1961E8A2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___sslStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* V_3 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	{
		// byte[] buffer = new byte[2048];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		V_0 = L_0;
		// StringBuilder messageData = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_1 = L_1;
		// int bytes = -1;
		V_2 = (-1);
	}

IL_0014:
	{
		// bytes = sslStream.Read(buffer, 0, buffer.Length);
		SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_2 = ___sslStream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_2 = L_5;
		// Decoder decoder = Encoding.UTF8.GetDecoder();
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_6);
		Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* L_7;
		L_7 = VirtualFuncInvoker0< Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* >::Invoke(29 /* System.Text.Decoder System.Text.Encoding::GetDecoder() */, L_6);
		V_3 = L_7;
		// char[] chars = new char[decoder.GetCharCount(buffer, 0, bytes)];
		Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_4 = L_12;
		// decoder.GetChars(buffer, 0, bytes, chars, 0);
		Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_4;
		NullCheck(L_13);
		int32_t L_17;
		L_17 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_13, L_14, 0, L_15, L_16, 0);
		// messageData.Append(chars);
		StringBuilder_t* L_18 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_4;
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_18, L_19, NULL);
		// if (messageData.ToString().IndexOf("<EOF>") != -1)
		StringBuilder_t* L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_22, _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0071;
		}
	}
	{
		// break;
		goto IL_007c;
	}

IL_0071:
	{
		// } while (bytes != 0);
		int32_t L_25 = V_2;
		V_6 = (bool)((!(((uint32_t)L_25) <= ((uint32_t)0)))? 1 : 0);
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_0014;
		}
	}

IL_007c:
	{
		// return messageData.ToString();
		StringBuilder_t* L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		V_7 = L_28;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		String_t* L_29 = V_7;
		return L_29;
	}
}
// System.Void TCPTestServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestServer__ctor_m17F8189C4EE113DB1D20E1A7BD99F722A95CCC5C (TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TCPTestServer/<StartAsyncListener>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsyncListenerU3Ed__5__ctor_m021FE406355C7AFF866EEB41C2FACDCD9C84B934 (U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TCPTestServer/<StartAsyncListener>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsyncListenerU3Ed__5_MoveNext_m57B54C7D2E8EEE7F092ADA2A9F5285B13AD1272D (U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m9E38EE9AB65FE7164D75C7D538CA14CF1DC531C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_mF928726D0348746AABF38E63F84D458D9F5CE9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m049B9772D7BEF1E25A3E1CF7DBA14B1315CD9C50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEE9CE0517334D3A098D79692BFFC8F5A93D69A87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m21D94DB50821D4F81CD9E32CB1ED0C4D1D13D387_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF455596D6209BD156B301BAB70D22792236598);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral347FAF4BD367FB1326B0472841C29A3D0B06520B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96C54516FB0BB47158E1C2143F31D36D07D5EAE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A848F3ECF33F4D9ECFFCACB84A2818EB7C9B1CA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* V_4 = NULL;
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_5 = NULL;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0078_1;
		}

IL_0014_1:
		{
			goto IL_00d6_1;
		}

IL_0019_1:
		{
			// listener.Start();
			TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_3 = __this->___listener_2;
			NullCheck(L_3);
			TcpListener_Start_m919D559B138B311CFFBBE4BF66E326EABD8F8712(L_3, NULL);
			// Debug.Log("Starting Listener");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral96C54516FB0BB47158E1C2143F31D36D07D5EAE8, NULL);
			goto IL_02a7_1;
		}

IL_0036_1:
		{
			// TcpClient client = await listener.AcceptTcpClientAsync();
			TcpListener_t306B041DAC7763F1A05DAA9FA9F4BAADEF94EF82* L_4 = __this->___listener_2;
			NullCheck(L_4);
			Task_1_t246B64FBBC477E2F6CADDADAC822AB27A5236EFE* L_5;
			L_5 = TcpListener_AcceptTcpClientAsync_m91306DD7A9B12C018F366207E0C6521740EE5289(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B L_6;
			L_6 = Task_1_GetAwaiter_m21D94DB50821D4F81CD9E32CB1ED0C4D1D13D387(L_5, Task_1_GetAwaiter_m21D94DB50821D4F81CD9E32CB1ED0C4D1D13D387_RuntimeMethod_var);
			V_1 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_mEE9CE0517334D3A098D79692BFFC8F5A93D69A87((&V_1), TaskAwaiter_1_get_IsCompleted_mEE9CE0517334D3A098D79692BFFC8F5A93D69A87_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0094_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B L_9 = V_1;
			__this->___U3CU3Eu__1_11 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_11))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m9E38EE9AB65FE7164D75C7D538CA14CF1DC531C8(L_10, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_m9E38EE9AB65FE7164D75C7D538CA14CF1DC531C8_RuntimeMethod_var);
			goto IL_02c9;
		}

IL_0078_1:
		{
			TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B L_11 = __this->___U3CU3Eu__1_11;
			V_1 = L_11;
			TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B* L_12 = (&__this->___U3CU3Eu__1_11);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tC187B476BFBF9D5A179AEE656706C151F8C43E4B));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0094_1:
		{
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_14;
			L_14 = TaskAwaiter_1_GetResult_m049B9772D7BEF1E25A3E1CF7DBA14B1315CD9C50((&V_1), TaskAwaiter_1_GetResult_m049B9772D7BEF1E25A3E1CF7DBA14B1315CD9C50_RuntimeMethod_var);
			__this->___U3CU3Es__3_6 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_6), (void*)L_14);
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_15 = __this->___U3CU3Es__3_6;
			__this->___U3CclientU3E5__1_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclientU3E5__1_4), (void*)L_15);
			__this->___U3CU3Es__3_6 = (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_6), (void*)(TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)NULL);
			// Debug.Log("Accepted client");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9A848F3ECF33F4D9ECFFCACB84A2818EB7C9B1CA, NULL);
			// SslStream sslStream = new SslStream(client.GetStream(), false);
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_16 = __this->___U3CclientU3E5__1_4;
			NullCheck(L_16);
			NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_17;
			L_17 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_16, NULL);
			SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_18 = (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*)il2cpp_codegen_object_new(SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			SslStream__ctor_m91391419C92963CB7B2D1F1DAB448843CD07681B(L_18, L_17, (bool)0, NULL);
			__this->___U3CsslStreamU3E5__2_5 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsslStreamU3E5__2_5), (void*)L_18);
		}

IL_00d6_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0279_1:
				{// begin finally (depth: 2)
					{
						int32_t L_19 = V_0;
						if ((((int32_t)L_19) >= ((int32_t)0)))
						{
							goto IL_0297_1;
						}
					}
					{
						// sslStream.Close();
						SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_20 = __this->___U3CsslStreamU3E5__2_5;
						NullCheck(L_20);
						VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_20);
						// client.Close();
						TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_21 = __this->___U3CclientU3E5__1_4;
						NullCheck(L_21);
						TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_21, NULL);
					}

IL_0297_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				try
				{// begin try (depth: 3)
					{
						int32_t L_22 = V_0;
						if ((((int32_t)L_22) == ((int32_t)1)))
						{
							goto IL_00dd_3;
						}
					}
					{
						goto IL_00df_3;
					}

IL_00dd_3:
					{
						goto IL_012a_3;
					}

IL_00df_3:
					{
						// await sslStream.AuthenticateAsServerAsync(serverCertificate, false, SslProtocols.Ssl2, true);
						SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_23 = __this->___U3CsslStreamU3E5__2_5;
						X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_24 = ((TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_StaticFields*)il2cpp_codegen_static_fields_for(TCPTestServer_t09094F1B43B60B7A08B92741DAD7C1009F6C968C_il2cpp_TypeInfo_var))->___serverCertificate_7;
						NullCheck(L_23);
						Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_25;
						L_25 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, bool, int32_t, bool >::Invoke(40 /* System.Threading.Tasks.Task System.Net.Security.SslStream::AuthenticateAsServerAsync(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean) */, L_23, L_24, (bool)0, ((int32_t)12), (bool)1);
						NullCheck(L_25);
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_26;
						L_26 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_25, NULL);
						V_3 = L_26;
						bool L_27;
						L_27 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
						if (L_27)
						{
							goto IL_0146_3;
						}
					}
					{
						int32_t L_28 = 1;
						V_0 = L_28;
						__this->___U3CU3E1__state_0 = L_28;
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_29 = V_3;
						__this->___U3CU3Eu__2_12 = L_29;
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_12))->___m_task_0), (void*)NULL);
						V_2 = __this;
						AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
						AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_mF928726D0348746AABF38E63F84D458D9F5CE9F4(L_30, (&V_3), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565_mF928726D0348746AABF38E63F84D458D9F5CE9F4_RuntimeMethod_var);
						goto IL_02c9;
					}

IL_012a_3:
					{
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31 = __this->___U3CU3Eu__2_12;
						V_3 = L_31;
						TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_32 = (&__this->___U3CU3Eu__2_12);
						il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
						int32_t L_33 = (-1);
						V_0 = L_33;
						__this->___U3CU3E1__state_0 = L_33;
					}

IL_0146_3:
					{
						TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
						// sslStream.ReadTimeout = 500000;
						SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_34 = __this->___U3CsslStreamU3E5__2_5;
						NullCheck(L_34);
						VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void System.IO.Stream::set_ReadTimeout(System.Int32) */, L_34, ((int32_t)500000));
						// sslStream.WriteTimeout = 500000;
						SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_35 = __this->___U3CsslStreamU3E5__2_5;
						NullCheck(L_35);
						VirtualActionInvoker1< int32_t >::Invoke(15 /* System.Void System.IO.Stream::set_WriteTimeout(System.Int32) */, L_35, ((int32_t)500000));
						// string messageData = ReadMessage(sslStream);
						SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_36 = __this->___U3CsslStreamU3E5__2_5;
						String_t* L_37;
						L_37 = TCPTestServer_ReadMessage_mC517707E893C4E8A34CC08FD76CA196A1961E8A2(L_36, NULL);
						__this->___U3CmessageDataU3E5__4_7 = L_37;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessageDataU3E5__4_7), (void*)L_37);
						// Debug.Log(messageData);
						String_t* L_38 = __this->___U3CmessageDataU3E5__4_7;
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_38, NULL);
						// byte[] message = Encoding.UTF8.GetBytes("Hello from the server.<EOF>");
						Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_39;
						L_39 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
						NullCheck(L_39);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
						L_40 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_39, _stringLiteral2FF455596D6209BD156B301BAB70D22792236598);
						__this->___U3CmessageU3E5__5_8 = L_40;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessageU3E5__5_8), (void*)L_40);
						// Console.WriteLine("Sending hello message.");
						il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
						Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteral347FAF4BD367FB1326B0472841C29A3D0B06520B, NULL);
						// sslStream.Write(message);
						SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_41 = __this->___U3CsslStreamU3E5__2_5;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___U3CmessageU3E5__5_8;
						NullCheck(L_41);
						SslStream_Write_mBE1327B3F8101843A613196264BB925C2DACEC83(L_41, L_42, NULL);
						__this->___U3CmessageDataU3E5__4_7 = (String_t*)NULL;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessageDataU3E5__4_7), (void*)(String_t*)NULL);
						__this->___U3CmessageU3E5__5_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmessageU3E5__5_8), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
						goto IL_0277_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_01d3_2;
					}
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0225_2;
					}
					throw e;
				}

CATCH_01d3_2:
				{// begin catch(System.Security.Authentication.AuthenticationException)
					// catch (AuthenticationException e)
					V_4 = ((AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8*)IL2CPP_GET_ACTIVE_EXCEPTION(AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8*));
					AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* L_43 = V_4;
					__this->___U3CeU3E5__6_9 = L_43;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__6_9), (void*)L_43);
					// Debug.Log("Authentication Exception: " + e.Message);
					AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* L_44 = __this->___U3CeU3E5__6_9;
					NullCheck(L_44);
					String_t* L_45;
					L_45 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_44);
					String_t* L_46;
					L_46 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4008BF2D4CB966E1F12922E12AC8E4F33A44EA85)), L_45, NULL);
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_46, NULL);
					// Debug.Log(e.InnerException);
					AuthenticationException_tACF49ABE65B7CEABB69DE78FA8AE8B1771CDF6A8* L_47 = __this->___U3CeU3E5__6_9;
					NullCheck(L_47);
					Exception_t* L_48;
					L_48 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_47, NULL);
					Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_48, NULL);
					// sslStream.Close();
					SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_49 = __this->___U3CsslStreamU3E5__2_5;
					NullCheck(L_49);
					VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_49);
					// client.Close();
					TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_50 = __this->___U3CclientU3E5__1_4;
					NullCheck(L_50);
					TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_50, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0277_2;
				}// end catch (depth: 3)

CATCH_0225_2:
				{// begin catch(System.ArgumentException)
					// catch (ArgumentException e)
					V_5 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));
					ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_51 = V_5;
					__this->___U3CeU3E5__7_10 = L_51;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__7_10), (void*)L_51);
					// Debug.Log("Argument Exception: " + e.Message);
					ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_52 = __this->___U3CeU3E5__7_10;
					NullCheck(L_52);
					String_t* L_53;
					L_53 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_52);
					String_t* L_54;
					L_54 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0EC936838D06B1B6E047C43AC617AB1B052F260)), L_53, NULL);
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_54, NULL);
					// Debug.Log(e.InnerException);
					ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_55 = __this->___U3CeU3E5__7_10;
					NullCheck(L_55);
					Exception_t* L_56;
					L_56 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_55, NULL);
					Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_56, NULL);
					// sslStream.Close();
					SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* L_57 = __this->___U3CsslStreamU3E5__2_5;
					NullCheck(L_57);
					VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_57);
					// client.Close();
					TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_58 = __this->___U3CclientU3E5__1_4;
					NullCheck(L_58);
					TcpClient_Close_m03E0ED4E4BA87B3F1ED17585AB1327ED76F5FE89(L_58, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0277_2;
				}// end catch (depth: 3)

IL_0277_2:
				{
					goto IL_0298_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0298_1:
		{
			__this->___U3CclientU3E5__1_4 = (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclientU3E5__1_4), (void*)(TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)NULL);
			__this->___U3CsslStreamU3E5__2_5 = (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsslStreamU3E5__2_5), (void*)(SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27*)NULL);
		}

IL_02a7_1:
		{
			// while (true)
			V_6 = (bool)1;
			goto IL_0036_1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02af;
		}
		throw e;
	}

CATCH_02af:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_59 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_7;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_59, L_60, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02c9;
	}// end catch (depth: 1)

IL_02c9:
	{
		return;
	}
}
// System.Void TCPTestServer/<StartAsyncListener>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsyncListenerU3Ed__5_SetStateMachine_mF196D05C457B4C69DB07D9D023A94A9EE7520F55 (U3CStartAsyncListenerU3Ed__5_t8EB4E914CAE4F5117FEF491527E67FB8D2E68565* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
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
// System.Void TestServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer_Start_m3B35214828413FB8D26FD93617DAD28A6A59B9E0 (TestServer_tC93C441B5073572F90A4D01FE7C866A337E43851* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC413BA69220C7D2121629F2A59F0477386E405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4B7E403293A3EB46818379ED599B45D01C96C1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string certifcateLocation = "D://Certs/Sat/1/www.crashblox.net.pfx";
		V_0 = _stringLiteral5FC413BA69220C7D2121629F2A59F0477386E405;
		// string password = "bXPVRKsUGhbK";
		V_1 = _stringLiteralDE4B7E403293A3EB46818379ED599B45D01C96C1;
		// SslTcpServer.RunServer(certifcateLocation, password);
		String_t* L_0 = V_0;
		String_t* L_1 = V_1;
		SslTcpServer_RunServer_m19EAA267D63C63320CFFB937F987C647D53973FD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TestServer::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer_OnApplicationQuit_m36DDCC0B3F9B55402336E720CF4C6DFF745AE3E2 (TestServer_tC93C441B5073572F90A4D01FE7C866A337E43851* __this, const RuntimeMethod* method) 
{
	{
		// SslTcpServer.StopServer();
		SslTcpServer_StopServer_m35ACA6EA8FD847FA3013C5FE24D6F03F1A839D43(NULL);
		// }
		return;
	}
}
// System.Void TestServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestServer__ctor_m0F8ED81646B3160DD81656AE1B308344DE304161 (TestServer_tC93C441B5073572F90A4D01FE7C866A337E43851* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpTestServer_set_HttpListener_mD3C0E11EE46A1E95E37474D001A7457C49B97D63_inline (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___value0, const RuntimeMethod* method) 
{
	{
		// private HttpListener HttpListener { get; set; }
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = ___value0;
		__this->___U3CHttpListenerU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHttpListenerU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* HttpTestServer_get_HttpListener_m80F41A12F8DC6D4B8F8B200FCFCA5A7722FC0707_inline (HttpTestServer_t1B70D82B4F87F5D807056F1F61049DB91AF1A779* __this, const RuntimeMethod* method) 
{
	{
		// private HttpListener HttpListener { get; set; }
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = __this->___U3CHttpListenerU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* HttpListenerContext_get_Request_m12CFD433DD5D32D9A72388BEBE6256C7BABE1808_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) 
{
	{
		HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* L_0 = __this->___request_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) 
{
	{
		HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_0 = __this->___response_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* HttpListenerResponse_get_Headers_m7F5D0CEED5789D7669275BEDB34E70F553D173CE_inline (HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* __this, const RuntimeMethod* method) 
{
	{
		WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* L_0 = __this->___headers_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpListenerRequest_get_Url_mAFF6E2EA7A69C8FC3A86DC63CD0F1CBACB3B9831_inline (HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* __this, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___url_10;
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
