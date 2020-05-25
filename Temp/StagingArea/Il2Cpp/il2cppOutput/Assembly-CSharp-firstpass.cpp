#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0;
// admob.AdPosition
struct AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3;
// admob.AdProperties
struct AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049;
// admob.AdSize
struct AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B;
// admob.Admob
struct Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A;
// admob.Admob/AdmobEventHandler
struct AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C;
// admob.Admob/InnerAdmobListener
struct InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E;
// admob.AdmobEvent
struct AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85;
// admob.AdmobListenerProxy
struct AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3;
// admob.IAdmobListener
struct IAdmobListener_t45C7894D8859F0D887ED021FDD5C56F3436C1E62;

IL2CPP_EXTERN_C RuntimeClass* AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdmobListener_t45C7894D8859F0D887ED021FDD5C56F3436C1E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05357A25714AC36B9FD56DF5AB9B0ABB90FD5637;
IL2CPP_EXTERN_C String_t* _stringLiteral0CE5D9871CF5CA9BE9B87AFFB4F166AC1DE3EF6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0FCB52FD939AC2C9188A8BA5BAD8B4C0FC3DC62F;
IL2CPP_EXTERN_C String_t* _stringLiteral18852C78A20B69DE84CABF7F6E73A803C1BBB5C4;
IL2CPP_EXTERN_C String_t* _stringLiteral1AFCC6BD61AB00ECA1D68CA78E3D5ECB8B944E49;
IL2CPP_EXTERN_C String_t* _stringLiteral1B61557EA43DC8D24ACFA27E751DB91BF75BE7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral2AF32D77F8C5B3B0DE1562FEEEA035B4C0D07B9A;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC2515CFC5FDC569B81525B945687D5B2BC5536;
IL2CPP_EXTERN_C String_t* _stringLiteral3383A33F1E997A3527B284CA2576387BAA5D70D8;
IL2CPP_EXTERN_C String_t* _stringLiteral33FAA6CBD84ECD9F4CCA1EA4C826A02C2BF1761A;
IL2CPP_EXTERN_C String_t* _stringLiteral378BDBF2A35AE5ABA9BAD3D55509313A0301E631;
IL2CPP_EXTERN_C String_t* _stringLiteral37F93A070955B8890D976577E68F269920FBC73C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C2B28477F4EBF08ACA9FE131A41717847576BE5;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD160D309BA825C310F87F15067C3953AF7076B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E88918343D504D88E30D6FB253D1FD6C28E3FE0;
IL2CPP_EXTERN_C String_t* _stringLiteral40804CE792BB4A6BA242156DAD17CBE6C9731E14;
IL2CPP_EXTERN_C String_t* _stringLiteral45E3FBD7DF450EC719B5FD79EF7AB3643D7606C7;
IL2CPP_EXTERN_C String_t* _stringLiteral491C56E02090CA825E91F114401096602CECDD4E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2BDD323E052F238CED803CA38EC22F0BABE8F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA362618B1F755EEBAEBAD88AEBC8243F388B21;
IL2CPP_EXTERN_C String_t* _stringLiteral76F5F2C44036F747808FD3F1DA1116FCE312FF90;
IL2CPP_EXTERN_C String_t* _stringLiteral77F5D68655DD996F128271D5FB2D13684CAA1945;
IL2CPP_EXTERN_C String_t* _stringLiteral7938EFA9FA1986BBA2C3BE9C9F300647F86A74F1;
IL2CPP_EXTERN_C String_t* _stringLiteral802A143666A38A5A83884DADB7678F0CA66A453E;
IL2CPP_EXTERN_C String_t* _stringLiteral84136AA40E1600A4D075D8C394B094E013C2E89E;
IL2CPP_EXTERN_C String_t* _stringLiteral85A80AA52B3F94C8D55C145932F3769FDF803388;
IL2CPP_EXTERN_C String_t* _stringLiteral87B00E5D26AF7B56ED8CB571A5EDA49E88880C82;
IL2CPP_EXTERN_C String_t* _stringLiteral8BE05043E17B1EBE5BA800E80C44E0D26EDEF279;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB9E73F47DEB0FE34742A0BE6239BB0407BD42D;
IL2CPP_EXTERN_C String_t* _stringLiteral90292A59A9663462CBB88E462823ED03B505DF06;
IL2CPP_EXTERN_C String_t* _stringLiteralAE61C058287ACFF1C3BC426F22778A87AE7C8FA5;
IL2CPP_EXTERN_C String_t* _stringLiteralB514A99652FFAC1BDC11EC5D61C7643C6A4812CC;
IL2CPP_EXTERN_C String_t* _stringLiteralB79E773D5CF007C02AE4F853761328312CEE671A;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7BC1122F2028654F6CD5101584A449957E29CF;
IL2CPP_EXTERN_C String_t* _stringLiteralBD5E0B2F63582B6BCF362E7519CF137DFB19CFDD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4B13C181FC9E04130F89BB37CF426E719C365DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC881ED997E7D25D71133E9FFFD306140F8E9A6F6;
IL2CPP_EXTERN_C String_t* _stringLiteralDBB369BBB0E4273A3806765A8BB753A96C274CED;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB2A006C3A6B1CF831D33C1BBA04BE8E6DBFC4F;
IL2CPP_EXTERN_C String_t* _stringLiteralDCC3494010FDB90EE173553F38115922D99F4B25;
IL2CPP_EXTERN_C String_t* _stringLiteralE58FAB635C9694951106086A0AD4B94DDE93D590;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB2B83891B201C761049BD121520142E2044003;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AdPosition__cctor_m49042A172C28F5E59D2F911721E798394104B735_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdSize__cctor_mC70BEE01C67865D25C7A0B1391D885DAB1681072_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdmobEvent__cctor_m3DB0CAEDEF17CDAE48C9D2D5677E64CCB51C1CD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdmobListenerProxy__ctor_m5F4F08AEC7D78910FF642D4DFFDA37617965A877_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdmobListenerProxy_onAdmobEvent_m72F679CC1BF91C322FD7227E673B7B198F32FE84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdmobListenerProxy_toString_m250FEA07CE46CAECEB375EAE17DE8FA640DD36B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_Instance_mF9D7A8024F19ACD5E8183E5DCC1981BB86A40584_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_add_bannerEventHandler_m19A707E0E27499B57D9E2E9636DB53F6D5021150_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_add_interstitialEventHandler_m58A10783A6D60E41FF503D2DC1C1E939C4367236_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_add_nativeBannerEventHandler_m7037B9505F2F953F3D0ADE1907D0C32D3E0DB4F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_add_rewardedVideoEventHandler_m717DC8CE0FE9F9D6F6FDAD4CACAB15322F820790_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_initSDK_mCF44EB2449DDAE1960BFA6657AEDBB794017C936_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_isInterstitialReady_m7DF73B8CDBBD0CAFC862BED3AFB64CD64DD12F34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_isRewardedVideoReady_mAC639D4DA97F68852AAD52A3CC5488F42E010E86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_loadInterstitial_mC2C4C304BADAFC590316F0724BF9D491DBADEA74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_loadRewardedVideo_m5DCA93541E42EBCF79014DDA6CC689D8FAFF860D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_preInitAdmob_m4FBCB7E065FD555D3BC6615ACEF9A2894B767AB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_reloadNativeBanner_mA835C48A22474E80C30B5E7B91BD944C97C31FE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_removeAllBanner_m30B2434431313B93480C43DB0642F8016005F9EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_removeBanner_mF3490102BE1B2605FBD1013BCA0C797910157670_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_removeNativeBanner_m04C4772DB835A8392F83B243558985440450B456_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_remove_bannerEventHandler_m93541CAE8F5F45DF233F45A0583740A3916138E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_remove_interstitialEventHandler_m32CBB58C65669C37638F5A53DC78BBA7843DE7E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_remove_nativeBannerEventHandler_mABC40D6863D3F5DE7484E968C77BEF8D38E38A64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_remove_rewardedVideoEventHandler_m651C579D1E3DBDFF609B3837909458D6328AD4DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_showBannerAbsolute_m99F5D6038A70A7971534F6FB534883680A14E113_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_showBannerRelative_m4B143A76C5118FB415C19BD410B6AC50B2B2CA16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_showInterstitial_m58A21172402A3E00B294F6DEA355699DF42820BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_showNativeBannerAbsolute_m10E66AE6EE6CCC4CA9E829D92C4932C124AC5EB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_showNativeBannerRelative_mC9763944515842F97F2B61D94F99C39E42DEB33B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Admob_showRewardedVideo_mFF1487847186589F0D0BC3E53F8E41FAE76161A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InnerAdmobListener_onAdmobEvent_m15404D7E174E64670E60C78A2B9FFB83BDF7108D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// admob.AdPosition
struct  AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3  : public RuntimeObject
{
public:

public:
};

struct AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields
{
public:
	// System.Int32 admob.AdPosition::ABSOLUTE
	int32_t ___ABSOLUTE_0;
	// System.Int32 admob.AdPosition::TOP_LEFT
	int32_t ___TOP_LEFT_1;
	// System.Int32 admob.AdPosition::TOP_CENTER
	int32_t ___TOP_CENTER_2;
	// System.Int32 admob.AdPosition::TOP_RIGHT
	int32_t ___TOP_RIGHT_3;
	// System.Int32 admob.AdPosition::MIDDLE_LEFT
	int32_t ___MIDDLE_LEFT_4;
	// System.Int32 admob.AdPosition::MIDDLE_CENTER
	int32_t ___MIDDLE_CENTER_5;
	// System.Int32 admob.AdPosition::MIDDLE_RIGHT
	int32_t ___MIDDLE_RIGHT_6;
	// System.Int32 admob.AdPosition::BOTTOM_LEFT
	int32_t ___BOTTOM_LEFT_7;
	// System.Int32 admob.AdPosition::BOTTOM_CENTER
	int32_t ___BOTTOM_CENTER_8;
	// System.Int32 admob.AdPosition::BOTTOM_RIGHT
	int32_t ___BOTTOM_RIGHT_9;

public:
	inline static int32_t get_offset_of_ABSOLUTE_0() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___ABSOLUTE_0)); }
	inline int32_t get_ABSOLUTE_0() const { return ___ABSOLUTE_0; }
	inline int32_t* get_address_of_ABSOLUTE_0() { return &___ABSOLUTE_0; }
	inline void set_ABSOLUTE_0(int32_t value)
	{
		___ABSOLUTE_0 = value;
	}

	inline static int32_t get_offset_of_TOP_LEFT_1() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___TOP_LEFT_1)); }
	inline int32_t get_TOP_LEFT_1() const { return ___TOP_LEFT_1; }
	inline int32_t* get_address_of_TOP_LEFT_1() { return &___TOP_LEFT_1; }
	inline void set_TOP_LEFT_1(int32_t value)
	{
		___TOP_LEFT_1 = value;
	}

	inline static int32_t get_offset_of_TOP_CENTER_2() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___TOP_CENTER_2)); }
	inline int32_t get_TOP_CENTER_2() const { return ___TOP_CENTER_2; }
	inline int32_t* get_address_of_TOP_CENTER_2() { return &___TOP_CENTER_2; }
	inline void set_TOP_CENTER_2(int32_t value)
	{
		___TOP_CENTER_2 = value;
	}

	inline static int32_t get_offset_of_TOP_RIGHT_3() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___TOP_RIGHT_3)); }
	inline int32_t get_TOP_RIGHT_3() const { return ___TOP_RIGHT_3; }
	inline int32_t* get_address_of_TOP_RIGHT_3() { return &___TOP_RIGHT_3; }
	inline void set_TOP_RIGHT_3(int32_t value)
	{
		___TOP_RIGHT_3 = value;
	}

	inline static int32_t get_offset_of_MIDDLE_LEFT_4() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___MIDDLE_LEFT_4)); }
	inline int32_t get_MIDDLE_LEFT_4() const { return ___MIDDLE_LEFT_4; }
	inline int32_t* get_address_of_MIDDLE_LEFT_4() { return &___MIDDLE_LEFT_4; }
	inline void set_MIDDLE_LEFT_4(int32_t value)
	{
		___MIDDLE_LEFT_4 = value;
	}

	inline static int32_t get_offset_of_MIDDLE_CENTER_5() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___MIDDLE_CENTER_5)); }
	inline int32_t get_MIDDLE_CENTER_5() const { return ___MIDDLE_CENTER_5; }
	inline int32_t* get_address_of_MIDDLE_CENTER_5() { return &___MIDDLE_CENTER_5; }
	inline void set_MIDDLE_CENTER_5(int32_t value)
	{
		___MIDDLE_CENTER_5 = value;
	}

	inline static int32_t get_offset_of_MIDDLE_RIGHT_6() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___MIDDLE_RIGHT_6)); }
	inline int32_t get_MIDDLE_RIGHT_6() const { return ___MIDDLE_RIGHT_6; }
	inline int32_t* get_address_of_MIDDLE_RIGHT_6() { return &___MIDDLE_RIGHT_6; }
	inline void set_MIDDLE_RIGHT_6(int32_t value)
	{
		___MIDDLE_RIGHT_6 = value;
	}

	inline static int32_t get_offset_of_BOTTOM_LEFT_7() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___BOTTOM_LEFT_7)); }
	inline int32_t get_BOTTOM_LEFT_7() const { return ___BOTTOM_LEFT_7; }
	inline int32_t* get_address_of_BOTTOM_LEFT_7() { return &___BOTTOM_LEFT_7; }
	inline void set_BOTTOM_LEFT_7(int32_t value)
	{
		___BOTTOM_LEFT_7 = value;
	}

	inline static int32_t get_offset_of_BOTTOM_CENTER_8() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___BOTTOM_CENTER_8)); }
	inline int32_t get_BOTTOM_CENTER_8() const { return ___BOTTOM_CENTER_8; }
	inline int32_t* get_address_of_BOTTOM_CENTER_8() { return &___BOTTOM_CENTER_8; }
	inline void set_BOTTOM_CENTER_8(int32_t value)
	{
		___BOTTOM_CENTER_8 = value;
	}

	inline static int32_t get_offset_of_BOTTOM_RIGHT_9() { return static_cast<int32_t>(offsetof(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields, ___BOTTOM_RIGHT_9)); }
	inline int32_t get_BOTTOM_RIGHT_9() const { return ___BOTTOM_RIGHT_9; }
	inline int32_t* get_address_of_BOTTOM_RIGHT_9() { return &___BOTTOM_RIGHT_9; }
	inline void set_BOTTOM_RIGHT_9(int32_t value)
	{
		___BOTTOM_RIGHT_9 = value;
	}
};


// admob.AdProperties
struct  AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049  : public RuntimeObject
{
public:
	// System.Boolean admob.AdProperties::isForChildDirectedTreatment
	bool ___isForChildDirectedTreatment_0;
	// System.Boolean admob.AdProperties::isUnderAgeOfConsent
	bool ___isUnderAgeOfConsent_1;
	// System.Boolean admob.AdProperties::isAppMuted
	bool ___isAppMuted_2;
	// System.Boolean admob.AdProperties::isTesting
	bool ___isTesting_3;
	// System.Boolean admob.AdProperties::nonPersonalizedAdsOnly
	bool ___nonPersonalizedAdsOnly_4;
	// System.Int32 admob.AdProperties::appVolume
	int32_t ___appVolume_5;
	// System.String admob.AdProperties::maxAdContentRating
	String_t* ___maxAdContentRating_6;
	// System.String[] admob.AdProperties::keywords
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___keywords_7;

public:
	inline static int32_t get_offset_of_isForChildDirectedTreatment_0() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___isForChildDirectedTreatment_0)); }
	inline bool get_isForChildDirectedTreatment_0() const { return ___isForChildDirectedTreatment_0; }
	inline bool* get_address_of_isForChildDirectedTreatment_0() { return &___isForChildDirectedTreatment_0; }
	inline void set_isForChildDirectedTreatment_0(bool value)
	{
		___isForChildDirectedTreatment_0 = value;
	}

	inline static int32_t get_offset_of_isUnderAgeOfConsent_1() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___isUnderAgeOfConsent_1)); }
	inline bool get_isUnderAgeOfConsent_1() const { return ___isUnderAgeOfConsent_1; }
	inline bool* get_address_of_isUnderAgeOfConsent_1() { return &___isUnderAgeOfConsent_1; }
	inline void set_isUnderAgeOfConsent_1(bool value)
	{
		___isUnderAgeOfConsent_1 = value;
	}

	inline static int32_t get_offset_of_isAppMuted_2() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___isAppMuted_2)); }
	inline bool get_isAppMuted_2() const { return ___isAppMuted_2; }
	inline bool* get_address_of_isAppMuted_2() { return &___isAppMuted_2; }
	inline void set_isAppMuted_2(bool value)
	{
		___isAppMuted_2 = value;
	}

	inline static int32_t get_offset_of_isTesting_3() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___isTesting_3)); }
	inline bool get_isTesting_3() const { return ___isTesting_3; }
	inline bool* get_address_of_isTesting_3() { return &___isTesting_3; }
	inline void set_isTesting_3(bool value)
	{
		___isTesting_3 = value;
	}

	inline static int32_t get_offset_of_nonPersonalizedAdsOnly_4() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___nonPersonalizedAdsOnly_4)); }
	inline bool get_nonPersonalizedAdsOnly_4() const { return ___nonPersonalizedAdsOnly_4; }
	inline bool* get_address_of_nonPersonalizedAdsOnly_4() { return &___nonPersonalizedAdsOnly_4; }
	inline void set_nonPersonalizedAdsOnly_4(bool value)
	{
		___nonPersonalizedAdsOnly_4 = value;
	}

	inline static int32_t get_offset_of_appVolume_5() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___appVolume_5)); }
	inline int32_t get_appVolume_5() const { return ___appVolume_5; }
	inline int32_t* get_address_of_appVolume_5() { return &___appVolume_5; }
	inline void set_appVolume_5(int32_t value)
	{
		___appVolume_5 = value;
	}

	inline static int32_t get_offset_of_maxAdContentRating_6() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___maxAdContentRating_6)); }
	inline String_t* get_maxAdContentRating_6() const { return ___maxAdContentRating_6; }
	inline String_t** get_address_of_maxAdContentRating_6() { return &___maxAdContentRating_6; }
	inline void set_maxAdContentRating_6(String_t* value)
	{
		___maxAdContentRating_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxAdContentRating_6), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_7() { return static_cast<int32_t>(offsetof(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049, ___keywords_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_keywords_7() const { return ___keywords_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_keywords_7() { return &___keywords_7; }
	inline void set_keywords_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___keywords_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywords_7), (void*)value);
	}
};


// admob.AdSize
struct  AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B  : public RuntimeObject
{
public:
	// System.Int32 admob.AdSize::width
	int32_t ___width_0;
	// System.Int32 admob.AdSize::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};

struct AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields
{
public:
	// admob.AdSize admob.AdSize::BANNER
	AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___BANNER_2;
	// admob.AdSize admob.AdSize::FULL_BANNER
	AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___FULL_BANNER_3;
	// admob.AdSize admob.AdSize::LARGE_BANNER
	AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___LARGE_BANNER_4;
	// admob.AdSize admob.AdSize::LEADERBOARD
	AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___LEADERBOARD_5;
	// admob.AdSize admob.AdSize::MEDIUM_RECTANGLE
	AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___MEDIUM_RECTANGLE_6;
	// admob.AdSize admob.AdSize::WIDE_SKYSCRAPER
	AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___WIDE_SKYSCRAPER_7;
	// admob.AdSize admob.AdSize::SMART_BANNER
	AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___SMART_BANNER_8;

public:
	inline static int32_t get_offset_of_BANNER_2() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields, ___BANNER_2)); }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * get_BANNER_2() const { return ___BANNER_2; }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B ** get_address_of_BANNER_2() { return &___BANNER_2; }
	inline void set_BANNER_2(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * value)
	{
		___BANNER_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BANNER_2), (void*)value);
	}

	inline static int32_t get_offset_of_FULL_BANNER_3() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields, ___FULL_BANNER_3)); }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * get_FULL_BANNER_3() const { return ___FULL_BANNER_3; }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B ** get_address_of_FULL_BANNER_3() { return &___FULL_BANNER_3; }
	inline void set_FULL_BANNER_3(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * value)
	{
		___FULL_BANNER_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FULL_BANNER_3), (void*)value);
	}

	inline static int32_t get_offset_of_LARGE_BANNER_4() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields, ___LARGE_BANNER_4)); }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * get_LARGE_BANNER_4() const { return ___LARGE_BANNER_4; }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B ** get_address_of_LARGE_BANNER_4() { return &___LARGE_BANNER_4; }
	inline void set_LARGE_BANNER_4(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * value)
	{
		___LARGE_BANNER_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LARGE_BANNER_4), (void*)value);
	}

	inline static int32_t get_offset_of_LEADERBOARD_5() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields, ___LEADERBOARD_5)); }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * get_LEADERBOARD_5() const { return ___LEADERBOARD_5; }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B ** get_address_of_LEADERBOARD_5() { return &___LEADERBOARD_5; }
	inline void set_LEADERBOARD_5(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * value)
	{
		___LEADERBOARD_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LEADERBOARD_5), (void*)value);
	}

	inline static int32_t get_offset_of_MEDIUM_RECTANGLE_6() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields, ___MEDIUM_RECTANGLE_6)); }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * get_MEDIUM_RECTANGLE_6() const { return ___MEDIUM_RECTANGLE_6; }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B ** get_address_of_MEDIUM_RECTANGLE_6() { return &___MEDIUM_RECTANGLE_6; }
	inline void set_MEDIUM_RECTANGLE_6(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * value)
	{
		___MEDIUM_RECTANGLE_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MEDIUM_RECTANGLE_6), (void*)value);
	}

	inline static int32_t get_offset_of_WIDE_SKYSCRAPER_7() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields, ___WIDE_SKYSCRAPER_7)); }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * get_WIDE_SKYSCRAPER_7() const { return ___WIDE_SKYSCRAPER_7; }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B ** get_address_of_WIDE_SKYSCRAPER_7() { return &___WIDE_SKYSCRAPER_7; }
	inline void set_WIDE_SKYSCRAPER_7(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * value)
	{
		___WIDE_SKYSCRAPER_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WIDE_SKYSCRAPER_7), (void*)value);
	}

	inline static int32_t get_offset_of_SMART_BANNER_8() { return static_cast<int32_t>(offsetof(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields, ___SMART_BANNER_8)); }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * get_SMART_BANNER_8() const { return ___SMART_BANNER_8; }
	inline AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B ** get_address_of_SMART_BANNER_8() { return &___SMART_BANNER_8; }
	inline void set_SMART_BANNER_8(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * value)
	{
		___SMART_BANNER_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SMART_BANNER_8), (void*)value);
	}
};


// admob.Admob
struct  Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A  : public RuntimeObject
{
public:
	// admob.Admob_AdmobEventHandler admob.Admob::bannerEventHandler
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___bannerEventHandler_0;
	// admob.Admob_AdmobEventHandler admob.Admob::interstitialEventHandler
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___interstitialEventHandler_1;
	// admob.Admob_AdmobEventHandler admob.Admob::rewardedVideoEventHandler
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___rewardedVideoEventHandler_2;
	// admob.Admob_AdmobEventHandler admob.Admob::nativeBannerEventHandler
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___nativeBannerEventHandler_3;
	// UnityEngine.AndroidJavaObject admob.Admob::jadmob
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___jadmob_5;

public:
	inline static int32_t get_offset_of_bannerEventHandler_0() { return static_cast<int32_t>(offsetof(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A, ___bannerEventHandler_0)); }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * get_bannerEventHandler_0() const { return ___bannerEventHandler_0; }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** get_address_of_bannerEventHandler_0() { return &___bannerEventHandler_0; }
	inline void set_bannerEventHandler_0(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * value)
	{
		___bannerEventHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerEventHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_interstitialEventHandler_1() { return static_cast<int32_t>(offsetof(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A, ___interstitialEventHandler_1)); }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * get_interstitialEventHandler_1() const { return ___interstitialEventHandler_1; }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** get_address_of_interstitialEventHandler_1() { return &___interstitialEventHandler_1; }
	inline void set_interstitialEventHandler_1(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * value)
	{
		___interstitialEventHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialEventHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_rewardedVideoEventHandler_2() { return static_cast<int32_t>(offsetof(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A, ___rewardedVideoEventHandler_2)); }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * get_rewardedVideoEventHandler_2() const { return ___rewardedVideoEventHandler_2; }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** get_address_of_rewardedVideoEventHandler_2() { return &___rewardedVideoEventHandler_2; }
	inline void set_rewardedVideoEventHandler_2(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * value)
	{
		___rewardedVideoEventHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardedVideoEventHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_nativeBannerEventHandler_3() { return static_cast<int32_t>(offsetof(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A, ___nativeBannerEventHandler_3)); }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * get_nativeBannerEventHandler_3() const { return ___nativeBannerEventHandler_3; }
	inline AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** get_address_of_nativeBannerEventHandler_3() { return &___nativeBannerEventHandler_3; }
	inline void set_nativeBannerEventHandler_3(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * value)
	{
		___nativeBannerEventHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeBannerEventHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_jadmob_5() { return static_cast<int32_t>(offsetof(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A, ___jadmob_5)); }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * get_jadmob_5() const { return ___jadmob_5; }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D ** get_address_of_jadmob_5() { return &___jadmob_5; }
	inline void set_jadmob_5(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * value)
	{
		___jadmob_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jadmob_5), (void*)value);
	}
};

struct Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_StaticFields
{
public:
	// admob.Admob admob.Admob::_instance
	Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_StaticFields, ____instance_4)); }
	inline Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * get__instance_4() const { return ____instance_4; }
	inline Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// admob.Admob_InnerAdmobListener
struct  InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E  : public RuntimeObject
{
public:
	// admob.Admob admob.Admob_InnerAdmobListener::admobInstance
	Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * ___admobInstance_0;

public:
	inline static int32_t get_offset_of_admobInstance_0() { return static_cast<int32_t>(offsetof(InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E, ___admobInstance_0)); }
	inline Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * get_admobInstance_0() const { return ___admobInstance_0; }
	inline Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A ** get_address_of_admobInstance_0() { return &___admobInstance_0; }
	inline void set_admobInstance_0(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * value)
	{
		___admobInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___admobInstance_0), (void*)value);
	}
};


// admob.AdmobEvent
struct  AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85  : public RuntimeObject
{
public:

public:
};

struct AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields
{
public:
	// System.String admob.AdmobEvent::onAdLoaded
	String_t* ___onAdLoaded_0;
	// System.String admob.AdmobEvent::onAdFailedToLoad
	String_t* ___onAdFailedToLoad_1;
	// System.String admob.AdmobEvent::onAdOpened
	String_t* ___onAdOpened_2;
	// System.String admob.AdmobEvent::adViewWillDismissScreen
	String_t* ___adViewWillDismissScreen_3;
	// System.String admob.AdmobEvent::onAdClosed
	String_t* ___onAdClosed_4;
	// System.String admob.AdmobEvent::onAdLeftApplication
	String_t* ___onAdLeftApplication_5;
	// System.String admob.AdmobEvent::onRewardedVideoStarted
	String_t* ___onRewardedVideoStarted_6;
	// System.String admob.AdmobEvent::onRewardedVideoCompleted
	String_t* ___onRewardedVideoCompleted_7;
	// System.String admob.AdmobEvent::onRewarded
	String_t* ___onRewarded_8;
	// System.String admob.AdmobEvent::onAdClicked
	String_t* ___onAdClicked_9;
	// System.String admob.AdmobEvent::onAdImpression
	String_t* ___onAdImpression_10;
	// System.String admob.AdmobEvent::onVideoUnmute
	String_t* ___onVideoUnmute_11;
	// System.String admob.AdmobEvent::onVideoMute
	String_t* ___onVideoMute_12;
	// System.String admob.AdmobEvent::onVideoEnd
	String_t* ___onVideoEnd_13;
	// System.String admob.AdmobEvent::onVideoPause
	String_t* ___onVideoPause_14;
	// System.String admob.AdmobEvent::onVideoPlay
	String_t* ___onVideoPlay_15;
	// System.String admob.AdmobEvent::onVideoStart
	String_t* ___onVideoStart_16;
	// System.String admob.AdmobEvent::onNativeAdLoaded
	String_t* ___onNativeAdLoaded_17;

public:
	inline static int32_t get_offset_of_onAdLoaded_0() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onAdLoaded_0)); }
	inline String_t* get_onAdLoaded_0() const { return ___onAdLoaded_0; }
	inline String_t** get_address_of_onAdLoaded_0() { return &___onAdLoaded_0; }
	inline void set_onAdLoaded_0(String_t* value)
	{
		___onAdLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_onAdFailedToLoad_1() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onAdFailedToLoad_1)); }
	inline String_t* get_onAdFailedToLoad_1() const { return ___onAdFailedToLoad_1; }
	inline String_t** get_address_of_onAdFailedToLoad_1() { return &___onAdFailedToLoad_1; }
	inline void set_onAdFailedToLoad_1(String_t* value)
	{
		___onAdFailedToLoad_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdFailedToLoad_1), (void*)value);
	}

	inline static int32_t get_offset_of_onAdOpened_2() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onAdOpened_2)); }
	inline String_t* get_onAdOpened_2() const { return ___onAdOpened_2; }
	inline String_t** get_address_of_onAdOpened_2() { return &___onAdOpened_2; }
	inline void set_onAdOpened_2(String_t* value)
	{
		___onAdOpened_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdOpened_2), (void*)value);
	}

	inline static int32_t get_offset_of_adViewWillDismissScreen_3() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___adViewWillDismissScreen_3)); }
	inline String_t* get_adViewWillDismissScreen_3() const { return ___adViewWillDismissScreen_3; }
	inline String_t** get_address_of_adViewWillDismissScreen_3() { return &___adViewWillDismissScreen_3; }
	inline void set_adViewWillDismissScreen_3(String_t* value)
	{
		___adViewWillDismissScreen_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adViewWillDismissScreen_3), (void*)value);
	}

	inline static int32_t get_offset_of_onAdClosed_4() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onAdClosed_4)); }
	inline String_t* get_onAdClosed_4() const { return ___onAdClosed_4; }
	inline String_t** get_address_of_onAdClosed_4() { return &___onAdClosed_4; }
	inline void set_onAdClosed_4(String_t* value)
	{
		___onAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_onAdLeftApplication_5() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onAdLeftApplication_5)); }
	inline String_t* get_onAdLeftApplication_5() const { return ___onAdLeftApplication_5; }
	inline String_t** get_address_of_onAdLeftApplication_5() { return &___onAdLeftApplication_5; }
	inline void set_onAdLeftApplication_5(String_t* value)
	{
		___onAdLeftApplication_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdLeftApplication_5), (void*)value);
	}

	inline static int32_t get_offset_of_onRewardedVideoStarted_6() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onRewardedVideoStarted_6)); }
	inline String_t* get_onRewardedVideoStarted_6() const { return ___onRewardedVideoStarted_6; }
	inline String_t** get_address_of_onRewardedVideoStarted_6() { return &___onRewardedVideoStarted_6; }
	inline void set_onRewardedVideoStarted_6(String_t* value)
	{
		___onRewardedVideoStarted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewardedVideoStarted_6), (void*)value);
	}

	inline static int32_t get_offset_of_onRewardedVideoCompleted_7() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onRewardedVideoCompleted_7)); }
	inline String_t* get_onRewardedVideoCompleted_7() const { return ___onRewardedVideoCompleted_7; }
	inline String_t** get_address_of_onRewardedVideoCompleted_7() { return &___onRewardedVideoCompleted_7; }
	inline void set_onRewardedVideoCompleted_7(String_t* value)
	{
		___onRewardedVideoCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewardedVideoCompleted_7), (void*)value);
	}

	inline static int32_t get_offset_of_onRewarded_8() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onRewarded_8)); }
	inline String_t* get_onRewarded_8() const { return ___onRewarded_8; }
	inline String_t** get_address_of_onRewarded_8() { return &___onRewarded_8; }
	inline void set_onRewarded_8(String_t* value)
	{
		___onRewarded_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewarded_8), (void*)value);
	}

	inline static int32_t get_offset_of_onAdClicked_9() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onAdClicked_9)); }
	inline String_t* get_onAdClicked_9() const { return ___onAdClicked_9; }
	inline String_t** get_address_of_onAdClicked_9() { return &___onAdClicked_9; }
	inline void set_onAdClicked_9(String_t* value)
	{
		___onAdClicked_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdClicked_9), (void*)value);
	}

	inline static int32_t get_offset_of_onAdImpression_10() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onAdImpression_10)); }
	inline String_t* get_onAdImpression_10() const { return ___onAdImpression_10; }
	inline String_t** get_address_of_onAdImpression_10() { return &___onAdImpression_10; }
	inline void set_onAdImpression_10(String_t* value)
	{
		___onAdImpression_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAdImpression_10), (void*)value);
	}

	inline static int32_t get_offset_of_onVideoUnmute_11() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onVideoUnmute_11)); }
	inline String_t* get_onVideoUnmute_11() const { return ___onVideoUnmute_11; }
	inline String_t** get_address_of_onVideoUnmute_11() { return &___onVideoUnmute_11; }
	inline void set_onVideoUnmute_11(String_t* value)
	{
		___onVideoUnmute_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onVideoUnmute_11), (void*)value);
	}

	inline static int32_t get_offset_of_onVideoMute_12() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onVideoMute_12)); }
	inline String_t* get_onVideoMute_12() const { return ___onVideoMute_12; }
	inline String_t** get_address_of_onVideoMute_12() { return &___onVideoMute_12; }
	inline void set_onVideoMute_12(String_t* value)
	{
		___onVideoMute_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onVideoMute_12), (void*)value);
	}

	inline static int32_t get_offset_of_onVideoEnd_13() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onVideoEnd_13)); }
	inline String_t* get_onVideoEnd_13() const { return ___onVideoEnd_13; }
	inline String_t** get_address_of_onVideoEnd_13() { return &___onVideoEnd_13; }
	inline void set_onVideoEnd_13(String_t* value)
	{
		___onVideoEnd_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onVideoEnd_13), (void*)value);
	}

	inline static int32_t get_offset_of_onVideoPause_14() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onVideoPause_14)); }
	inline String_t* get_onVideoPause_14() const { return ___onVideoPause_14; }
	inline String_t** get_address_of_onVideoPause_14() { return &___onVideoPause_14; }
	inline void set_onVideoPause_14(String_t* value)
	{
		___onVideoPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onVideoPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onVideoPlay_15() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onVideoPlay_15)); }
	inline String_t* get_onVideoPlay_15() const { return ___onVideoPlay_15; }
	inline String_t** get_address_of_onVideoPlay_15() { return &___onVideoPlay_15; }
	inline void set_onVideoPlay_15(String_t* value)
	{
		___onVideoPlay_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onVideoPlay_15), (void*)value);
	}

	inline static int32_t get_offset_of_onVideoStart_16() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onVideoStart_16)); }
	inline String_t* get_onVideoStart_16() const { return ___onVideoStart_16; }
	inline String_t** get_address_of_onVideoStart_16() { return &___onVideoStart_16; }
	inline void set_onVideoStart_16(String_t* value)
	{
		___onVideoStart_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onVideoStart_16), (void*)value);
	}

	inline static int32_t get_offset_of_onNativeAdLoaded_17() { return static_cast<int32_t>(offsetof(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields, ___onNativeAdLoaded_17)); }
	inline String_t* get_onNativeAdLoaded_17() const { return ___onNativeAdLoaded_17; }
	inline String_t** get_address_of_onNativeAdLoaded_17() { return &___onNativeAdLoaded_17; }
	inline void set_onNativeAdLoaded_17(String_t* value)
	{
		___onNativeAdLoaded_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNativeAdLoaded_17), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE  : public AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D
{
public:

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D, ___javaInterface_0)); }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// admob.AdmobListenerProxy
struct  AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3  : public AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D
{
public:
	// admob.IAdmobListener admob.AdmobListenerProxy::listener
	RuntimeObject* ___listener_4;

public:
	inline static int32_t get_offset_of_listener_4() { return static_cast<int32_t>(offsetof(AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3, ___listener_4)); }
	inline RuntimeObject* get_listener_4() const { return ___listener_4; }
	inline RuntimeObject** get_address_of_listener_4() { return &___listener_4; }
	inline void set_listener_4(RuntimeObject* value)
	{
		___listener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_4), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// admob.Admob_AdmobEventHandler
struct  AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_mC00F70734976E6B3DD8281EB6EBC457B19762E9F_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void admob.AdSize::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75 (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void admob.Admob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob__ctor_m74E4C88AB289550AA4639830C5C9B19EBD61D763 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method);
// System.Void admob.Admob::preInitAdmob()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_preInitAdmob_m4FBCB7E065FD555D3BC6615ACEF9A2894B767AB1 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8 (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mC00F70734976E6B3DD8281EB6EBC457B19762E9F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void admob.Admob/InnerAdmobListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InnerAdmobListener__ctor_mF88FBB8B1B389A0A325A387D5623902D924BB790 (InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E * __this, const RuntimeMethod* method);
// System.Void admob.AdmobListenerProxy::.ctor(admob.IAdmobListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobListenerProxy__ctor_m5F4F08AEC7D78910FF642D4DFFDA37617965A877 (AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void admob.AdProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdProperties__ctor_mC79F8A9CD307FDA9818C4F055DA6C17452307BE9 (AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * __this, const RuntimeMethod* method);
// System.String admob.AdProperties::toString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdProperties_toString_m08139DE3C3A96633839866EC1773AA534EC06166 (AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * __this, const RuntimeMethod* method);
// System.Int32 admob.AdSize::get_Width()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AdSize_get_Width_mB96D492B67810CBC2F2C3320FF0924A2FA70BDDD_inline (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, const RuntimeMethod* method);
// System.Int32 admob.AdSize::get_Height()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AdSize_get_Height_m86A5E23246088750BF5C2156BCCDAFB67154E54C_inline (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void admob.Admob/AdmobEventHandler::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobEventHandler_Invoke_m92E991BBB23DE9949EEEB0E1F4C9B83638EF7BDC (AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * __this, String_t* ___eventName0, String_t* ___msg1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m159565DEF4041D92C0763D1F4A0684140241CD9A (AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
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
// System.Void admob.AdPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdPosition__ctor_mA4BB28D984C6299943F73111B94D3C834824916F (AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admob.AdPosition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdPosition__cctor_m49042A172C28F5E59D2F911721E798394104B735 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdPosition__cctor_m49042A172C28F5E59D2F911721E798394104B735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int   ABSOLUTE = 0;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_ABSOLUTE_0(0);
		// public static readonly int  TOP_LEFT = 1;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_TOP_LEFT_1(1);
		// public static readonly int TOP_CENTER = 2;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_TOP_CENTER_2(2);
		// public static readonly int TOP_RIGHT = 3;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_TOP_RIGHT_3(3);
		// public static readonly int MIDDLE_LEFT = 4;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_MIDDLE_LEFT_4(4);
		// public static readonly int MIDDLE_CENTER = 5;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_MIDDLE_CENTER_5(5);
		// public static readonly int MIDDLE_RIGHT = 6;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_MIDDLE_RIGHT_6(6);
		// public static readonly int BOTTOM_LEFT = 7;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_BOTTOM_LEFT_7(7);
		// public static readonly int BOTTOM_CENTER = 8;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_BOTTOM_CENTER_8(8);
		// public static readonly int BOTTOM_RIGHT = 9;
		((AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_StaticFields*)il2cpp_codegen_static_fields_for(AdPosition_tD32B55CED91AF8C39B6D8D45F16A4D8899B544A3_il2cpp_TypeInfo_var))->set_BOTTOM_RIGHT_9(((int32_t)9));
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
// System.String admob.AdProperties::toString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdProperties_toString_m08139DE3C3A96633839866EC1773AA534EC06166 (AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * __this, const RuntimeMethod* method)
{
	{
		// string result=JsonUtility.ToJson(this);
		String_t* L_0 = JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573(__this, /*hidden argument*/NULL);
		// return result;
		return L_0;
	}
}
// System.Void admob.AdProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdProperties__ctor_mC79F8A9CD307FDA9818C4F055DA6C17452307BE9 (AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * __this, const RuntimeMethod* method)
{
	{
		// public int appVolume=100;
		__this->set_appVolume_5(((int32_t)100));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void admob.AdSize::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75 (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		// public AdSize(int width, int height) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// }
		return;
	}
}
// System.Int32 admob.AdSize::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdSize_get_Width_mB96D492B67810CBC2F2C3320FF0924A2FA70BDDD (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, const RuntimeMethod* method)
{
	{
		// return width;
		int32_t L_0 = __this->get_width_0();
		return L_0;
	}
}
// System.Int32 admob.AdSize::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdSize_get_Height_m86A5E23246088750BF5C2156BCCDAFB67154E54C (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, const RuntimeMethod* method)
{
	{
		// return height;
		int32_t L_0 = __this->get_height_1();
		return L_0;
	}
}
// System.Void admob.AdSize::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSize__cctor_mC70BEE01C67865D25C7A0B1391D885DAB1681072 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdSize__cctor_mC70BEE01C67865D25C7A0B1391D885DAB1681072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly AdSize BANNER = new AdSize(320, 50);
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_0 = (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B *)il2cpp_codegen_object_new(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var);
		AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75(L_0, ((int32_t)320), ((int32_t)50), /*hidden argument*/NULL);
		((AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var))->set_BANNER_2(L_0);
		// public static readonly AdSize FULL_BANNER = new AdSize(468, 60);
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_1 = (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B *)il2cpp_codegen_object_new(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var);
		AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75(L_1, ((int32_t)468), ((int32_t)60), /*hidden argument*/NULL);
		((AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var))->set_FULL_BANNER_3(L_1);
		// public static readonly AdSize LARGE_BANNER = new AdSize(320, 100);
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_2 = (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B *)il2cpp_codegen_object_new(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var);
		AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75(L_2, ((int32_t)320), ((int32_t)100), /*hidden argument*/NULL);
		((AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var))->set_LARGE_BANNER_4(L_2);
		// public static readonly AdSize LEADERBOARD = new AdSize(728, 90);
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_3 = (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B *)il2cpp_codegen_object_new(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var);
		AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75(L_3, ((int32_t)728), ((int32_t)90), /*hidden argument*/NULL);
		((AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var))->set_LEADERBOARD_5(L_3);
		// public static readonly AdSize MEDIUM_RECTANGLE = new AdSize(300, 250);
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_4 = (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B *)il2cpp_codegen_object_new(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var);
		AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75(L_4, ((int32_t)300), ((int32_t)250), /*hidden argument*/NULL);
		((AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var))->set_MEDIUM_RECTANGLE_6(L_4);
		// public static readonly AdSize WIDE_SKYSCRAPER = new AdSize(160,600);
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_5 = (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B *)il2cpp_codegen_object_new(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var);
		AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75(L_5, ((int32_t)160), ((int32_t)600), /*hidden argument*/NULL);
		((AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var))->set_WIDE_SKYSCRAPER_7(L_5);
		// public static readonly AdSize SMART_BANNER = new AdSize(-1,-2);//32,50,90
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_6 = (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B *)il2cpp_codegen_object_new(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var);
		AdSize__ctor_m497D2D7651D93F310E57B6083EDA29F6A4250A75(L_6, (-1), ((int32_t)-2), /*hidden argument*/NULL);
		((AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B_il2cpp_TypeInfo_var))->set_SMART_BANNER_8(L_6);
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
// System.Void admob.Admob::add_bannerEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_add_bannerEventHandler_m19A707E0E27499B57D9E2E9636DB53F6D5021150 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_add_bannerEventHandler_m19A707E0E27499B57D9E2E9636DB53F6D5021150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_bannerEventHandler_0();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_bannerEventHandler_0();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void admob.Admob::remove_bannerEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_remove_bannerEventHandler_m93541CAE8F5F45DF233F45A0583740A3916138E3 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_remove_bannerEventHandler_m93541CAE8F5F45DF233F45A0583740A3916138E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_bannerEventHandler_0();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_bannerEventHandler_0();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void admob.Admob::add_interstitialEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_add_interstitialEventHandler_m58A10783A6D60E41FF503D2DC1C1E939C4367236 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_add_interstitialEventHandler_m58A10783A6D60E41FF503D2DC1C1E939C4367236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_interstitialEventHandler_1();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_interstitialEventHandler_1();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void admob.Admob::remove_interstitialEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_remove_interstitialEventHandler_m32CBB58C65669C37638F5A53DC78BBA7843DE7E2 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_remove_interstitialEventHandler_m32CBB58C65669C37638F5A53DC78BBA7843DE7E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_interstitialEventHandler_1();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_interstitialEventHandler_1();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void admob.Admob::add_rewardedVideoEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_add_rewardedVideoEventHandler_m717DC8CE0FE9F9D6F6FDAD4CACAB15322F820790 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_add_rewardedVideoEventHandler_m717DC8CE0FE9F9D6F6FDAD4CACAB15322F820790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_rewardedVideoEventHandler_2();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_rewardedVideoEventHandler_2();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void admob.Admob::remove_rewardedVideoEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_remove_rewardedVideoEventHandler_m651C579D1E3DBDFF609B3837909458D6328AD4DA (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_remove_rewardedVideoEventHandler_m651C579D1E3DBDFF609B3837909458D6328AD4DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_rewardedVideoEventHandler_2();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_rewardedVideoEventHandler_2();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void admob.Admob::add_nativeBannerEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_add_nativeBannerEventHandler_m7037B9505F2F953F3D0ADE1907D0C32D3E0DB4F3 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_add_nativeBannerEventHandler_m7037B9505F2F953F3D0ADE1907D0C32D3E0DB4F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_nativeBannerEventHandler_3();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_nativeBannerEventHandler_3();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void admob.Admob::remove_nativeBannerEventHandler(admob.Admob_AdmobEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_remove_nativeBannerEventHandler_mABC40D6863D3F5DE7484E968C77BEF8D38E38A64 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_remove_nativeBannerEventHandler_mABC40D6863D3F5DE7484E968C77BEF8D38E38A64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_0 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_1 = NULL;
	AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * V_2 = NULL;
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_0 = __this->get_nativeBannerEventHandler_3();
		V_0 = L_0;
	}

IL_0007:
	{
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_1 = V_0;
		V_1 = L_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_2 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)CastclassSealed((RuntimeObject*)L_4, AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C_il2cpp_TypeInfo_var));
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C ** L_5 = __this->get_address_of_nativeBannerEventHandler_3();
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_6 = V_2;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_7 = V_1;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_8 = InterlockedCompareExchangeImpl<AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *>((AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C **)L_5, L_6, L_7);
		V_0 = L_8;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_9 = V_0;
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_10 = V_1;
		if ((!(((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_9) == ((RuntimeObject*)(AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// admob.Admob admob.Admob::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * Admob_Instance_mF9D7A8024F19ACD5E8183E5DCC1981BB86A40584 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_Instance_mF9D7A8024F19ACD5E8183E5DCC1981BB86A40584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_0 = ((Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_StaticFields*)il2cpp_codegen_static_fields_for(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_il2cpp_TypeInfo_var))->get__instance_4();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// _instance = new Admob();
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_1 = (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A *)il2cpp_codegen_object_new(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_il2cpp_TypeInfo_var);
		Admob__ctor_m74E4C88AB289550AA4639830C5C9B19EBD61D763(L_1, /*hidden argument*/NULL);
		((Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_StaticFields*)il2cpp_codegen_static_fields_for(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_il2cpp_TypeInfo_var))->set__instance_4(L_1);
		// _instance.preInitAdmob();
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_2 = ((Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_StaticFields*)il2cpp_codegen_static_fields_for(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_il2cpp_TypeInfo_var))->get__instance_4();
		NullCheck(L_2);
		Admob_preInitAdmob_m4FBCB7E065FD555D3BC6615ACEF9A2894B767AB1(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// return _instance;
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_3 = ((Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_StaticFields*)il2cpp_codegen_static_fields_for(Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A_il2cpp_TypeInfo_var))->get__instance_4();
		return L_3;
	}
}
// System.Void admob.Admob::preInitAdmob()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_preInitAdmob_m4FBCB7E065FD555D3BC6615ACEF9A2894B767AB1 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_preInitAdmob_m4FBCB7E065FD555D3BC6615ACEF9A2894B767AB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * V_0 = NULL;
	InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E * V_1 = NULL;
	{
		// if (jadmob == null) {
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		if (L_0)
		{
			goto IL_0055;
		}
	}
	{
		// AndroidJavaClass admobUnityPluginClass = new AndroidJavaClass("com.admob.plugin.AdmobUnityPlugin");
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_1 = (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE *)il2cpp_codegen_object_new(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8(L_1, _stringLiteral378BDBF2A35AE5ABA9BAD3D55509313A0301E631, /*hidden argument*/NULL);
		V_0 = L_1;
		// jadmob = admobUnityPluginClass.CallStatic<AndroidJavaObject>("getInstance");
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_2 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_4 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7(L_2, _stringLiteral40804CE792BB4A6BA242156DAD17CBE6C9731E14, L_3, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m6CAE75FB51C5A02521C239A7232735573C51EAE7_RuntimeMethod_var);
		__this->set_jadmob_5(L_4);
		// InnerAdmobListener innerlistener = new InnerAdmobListener();
		InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E * L_5 = (InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E *)il2cpp_codegen_object_new(InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E_il2cpp_TypeInfo_var);
		InnerAdmobListener__ctor_mF88FBB8B1B389A0A325A387D5623902D924BB790(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		// innerlistener.admobInstance = this;
		InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_admobInstance_0(__this);
		// jadmob.Call("setListener", new object[] {new AdmobListenerProxy(innerlistener) });
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_7 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E * L_10 = V_1;
		AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3 * L_11 = (AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3 *)il2cpp_codegen_object_new(AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3_il2cpp_TypeInfo_var);
		AdmobListenerProxy__ctor_m5F4F08AEC7D78910FF642D4DFFDA37617965A877(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		NullCheck(L_7);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_7, _stringLiteral18852C78A20B69DE84CABF7F6E73A803C1BBB5C4, L_9, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void admob.Admob::removeAllBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_removeAllBanner_m30B2434431313B93480C43DB0642F8016005F9EC (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_removeAllBanner_m30B2434431313B93480C43DB0642F8016005F9EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("removeAllBanner");
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteral45E3FBD7DF450EC719B5FD79EF7AB3643D7606C7, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::initSDK(System.String,admob.AdProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_initSDK_mCF44EB2449DDAE1960BFA6657AEDBB794017C936 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___appid0, AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_initSDK_mCF44EB2449DDAE1960BFA6657AEDBB794017C936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(value==null){
		AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * L_0 = ___value1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// value = new AdProperties();
		AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * L_1 = (AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 *)il2cpp_codegen_object_new(AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049_il2cpp_TypeInfo_var);
		AdProperties__ctor_mC79F8A9CD307FDA9818C4F055DA6C17452307BE9(L_1, /*hidden argument*/NULL);
		___value1 = L_1;
	}

IL_000a:
	{
		// jadmob.Call ("initSDK", new object[]{appid,value.toString()});
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_2 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = ___appid0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		AdProperties_t9E45E4F78180B2A917E7CA77CBE7B92FBEDDE049 * L_7 = ___value1;
		NullCheck(L_7);
		String_t* L_8 = AdProperties_toString_m08139DE3C3A96633839866EC1773AA534EC06166(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_2);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_2, _stringLiteral87B00E5D26AF7B56ED8CB571A5EDA49E88880C82, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::showBannerRelative(System.String,admob.AdSize,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_showBannerRelative_m4B143A76C5118FB415C19BD410B6AC50B2B2CA16 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___admobBannerID0, AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___size1, int32_t ___position2, int32_t ___marginY3, String_t* ___instanceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_showBannerRelative_m4B143A76C5118FB415C19BD410B6AC50B2B2CA16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("showBannerRelative", new object[] {admobBannerID, size.Width,size.Height,position,marginY,instanceName});
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___admobBannerID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_5 = ___size1;
		NullCheck(L_5);
		int32_t L_6 = AdSize_get_Width_mB96D492B67810CBC2F2C3320FF0924A2FA70BDDD_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_4;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_10 = ___size1;
		NullCheck(L_10);
		int32_t L_11 = AdSize_get_Height_m86A5E23246088750BF5C2156BCCDAFB67154E54C_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_9;
		int32_t L_15 = ___position2;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
		int32_t L_19 = ___marginY3;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		String_t* L_23 = ___instanceName4;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_23);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteralB514A99652FFAC1BDC11EC5D61C7643C6A4812CC, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::showBannerAbsolute(System.String,admob.AdSize,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_showBannerAbsolute_m99F5D6038A70A7971534F6FB534883680A14E113 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___admobBannerID0, AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___size1, int32_t ___x2, int32_t ___y3, String_t* ___instanceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_showBannerAbsolute_m99F5D6038A70A7971534F6FB534883680A14E113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("showBannerAbsolute", new object[] {admobBannerID, size.Width, size.Height,x,y ,instanceName});
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___admobBannerID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_5 = ___size1;
		NullCheck(L_5);
		int32_t L_6 = AdSize_get_Width_mB96D492B67810CBC2F2C3320FF0924A2FA70BDDD_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_4;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_10 = ___size1;
		NullCheck(L_10);
		int32_t L_11 = AdSize_get_Height_m86A5E23246088750BF5C2156BCCDAFB67154E54C_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_9;
		int32_t L_15 = ___x2;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
		int32_t L_19 = ___y3;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		String_t* L_23 = ___instanceName4;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_23);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteralE58FAB635C9694951106086A0AD4B94DDE93D590, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::removeBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_removeBanner_mF3490102BE1B2605FBD1013BCA0C797910157670 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___instanceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_removeBanner_mF3490102BE1B2605FBD1013BCA0C797910157670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("removeBanner",instanceName);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___instanceName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteralB79E773D5CF007C02AE4F853761328312CEE671A, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::loadInterstitial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_loadInterstitial_mC2C4C304BADAFC590316F0724BF9D491DBADEA74 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___interstitialID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_loadInterstitial_mC2C4C304BADAFC590316F0724BF9D491DBADEA74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("loadInterstitial",interstitialID);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___interstitialID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteralFBB2B83891B201C761049BD121520142E2044003, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean admob.Admob::isInterstitialReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Admob_isInterstitialReady_m7DF73B8CDBBD0CAFC862BED3AFB64CD64DD12F34 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_isInterstitialReady_m7DF73B8CDBBD0CAFC862BED3AFB64CD64DD12F34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool isReady = jadmob.Call<bool>("isInterstitialReady");
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976(L_0, _stringLiteralDBB369BBB0E4273A3806765A8BB753A96C274CED, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_RuntimeMethod_var);
		// return isReady;
		return L_2;
	}
}
// System.Void admob.Admob::showInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_showInterstitial_m58A21172402A3E00B294F6DEA355699DF42820BF (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_showInterstitial_m58A21172402A3E00B294F6DEA355699DF42820BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("showInterstitial");
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteral8CB9E73F47DEB0FE34742A0BE6239BB0407BD42D, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::loadRewardedVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_loadRewardedVideo_m5DCA93541E42EBCF79014DDA6CC689D8FAFF860D (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___rewardedVideoID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_loadRewardedVideo_m5DCA93541E42EBCF79014DDA6CC689D8FAFF860D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("loadRewardedVideo", new object[] { rewardedVideoID });
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___rewardedVideoID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteralDCB2A006C3A6B1CF831D33C1BBA04BE8E6DBFC4F, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean admob.Admob::isRewardedVideoReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Admob_isRewardedVideoReady_mAC639D4DA97F68852AAD52A3CC5488F42E010E86 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_isRewardedVideoReady_mAC639D4DA97F68852AAD52A3CC5488F42E010E86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool isReady = jadmob.Call<bool>("isRewardedVideoReady");
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976(L_0, _stringLiteral4EA362618B1F755EEBAEBAD88AEBC8243F388B21, L_1, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m57EE1ACB271D15DD0E2DDD6B28805C31799A0976_RuntimeMethod_var);
		// return isReady;
		return L_2;
	}
}
// System.Void admob.Admob::showRewardedVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_showRewardedVideo_mFF1487847186589F0D0BC3E53F8E41FAE76161A1 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_showRewardedVideo_mFF1487847186589F0D0BC3E53F8E41FAE76161A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("showRewardedVideo");
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteral2BC2515CFC5FDC569B81525B945687D5B2BC5536, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::showNativeBannerRelative(System.String,admob.AdSize,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_showNativeBannerRelative_mC9763944515842F97F2B61D94F99C39E42DEB33B (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___nativeBannerID0, AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___size1, int32_t ___position2, int32_t ___marginY3, String_t* ___instanceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_showNativeBannerRelative_mC9763944515842F97F2B61D94F99C39E42DEB33B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("showNativeBannerRelative", new object[] { nativeBannerID,size.Width, size.Height, position, marginY, instanceName });
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___nativeBannerID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_5 = ___size1;
		NullCheck(L_5);
		int32_t L_6 = AdSize_get_Width_mB96D492B67810CBC2F2C3320FF0924A2FA70BDDD_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_4;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_10 = ___size1;
		NullCheck(L_10);
		int32_t L_11 = AdSize_get_Height_m86A5E23246088750BF5C2156BCCDAFB67154E54C_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_9;
		int32_t L_15 = ___position2;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
		int32_t L_19 = ___marginY3;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		String_t* L_23 = ___instanceName4;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_23);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteral90292A59A9663462CBB88E462823ED03B505DF06, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::showNativeBannerAbsolute(System.String,admob.AdSize,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_showNativeBannerAbsolute_m10E66AE6EE6CCC4CA9E829D92C4932C124AC5EB5 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___nativeBannerID0, AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * ___size1, int32_t ___x2, int32_t ___y3, String_t* ___instanceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_showNativeBannerAbsolute_m10E66AE6EE6CCC4CA9E829D92C4932C124AC5EB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("showNativeBannerAbsolute", new object[] {nativeBannerID, size.Width, size.Height, x, y, instanceName });
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___nativeBannerID0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_5 = ___size1;
		NullCheck(L_5);
		int32_t L_6 = AdSize_get_Width_mB96D492B67810CBC2F2C3320FF0924A2FA70BDDD_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_4;
		AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * L_10 = ___size1;
		NullCheck(L_10);
		int32_t L_11 = AdSize_get_Height_m86A5E23246088750BF5C2156BCCDAFB67154E54C_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_9;
		int32_t L_15 = ___x2;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
		int32_t L_19 = ___y3;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		String_t* L_23 = ___instanceName4;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_23);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteralBD5E0B2F63582B6BCF362E7519CF137DFB19CFDD, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::removeNativeBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_removeNativeBanner_m04C4772DB835A8392F83B243558985440450B456 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___instanceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_removeNativeBanner_m04C4772DB835A8392F83B243558985440450B456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("removeNativeBanner", instanceName);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___instanceName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteral1AFCC6BD61AB00ECA1D68CA78E3D5ECB8B944E49, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::reloadNativeBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob_reloadNativeBanner_mA835C48A22474E80C30B5E7B91BD944C97C31FE9 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, String_t* ___instanceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Admob_reloadNativeBanner_mA835C48A22474E80C30B5E7B91BD944C97C31FE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jadmob.Call("reloadNativeBanner", instanceName);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = __this->get_jadmob_5();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___instanceName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_m0FEBE4E59445D8527C88C992AA2D00EEF749AB56(L_0, _stringLiteral2AF32D77F8C5B3B0DE1562FEEEA035B4C0D07B9A, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void admob.Admob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Admob__ctor_m74E4C88AB289550AA4639830C5C9B19EBD61D763 (Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C (AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * __this, String_t* ___eventName0, String_t* ___msg1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___eventName0' to native representation
	char* ____eventName0_marshaled = NULL;
	____eventName0_marshaled = il2cpp_codegen_marshal_string(___eventName0);

	// Marshaling of parameter '___msg1' to native representation
	char* ____msg1_marshaled = NULL;
	____msg1_marshaled = il2cpp_codegen_marshal_string(___msg1);

	// Native function invocation
	il2cppPInvokeFunc(____eventName0_marshaled, ____msg1_marshaled);

	// Marshaling cleanup of parameter '___eventName0' native representation
	il2cpp_codegen_marshal_free(____eventName0_marshaled);
	____eventName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___msg1' native representation
	il2cpp_codegen_marshal_free(____msg1_marshaled);
	____msg1_marshaled = NULL;

}
// System.Void admob.Admob_AdmobEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobEventHandler__ctor_mF5AC7F74C7406C80D040E891989B19AF1C83207F (AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void admob.Admob_AdmobEventHandler::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobEventHandler_Invoke_m92E991BBB23DE9949EEEB0E1F4C9B83638EF7BDC (AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * __this, String_t* ___eventName0, String_t* ___msg1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventName0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventName0, ___msg1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___eventName0, ___msg1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___eventName0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___eventName0, ___msg1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___eventName0, ___msg1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___msg1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___eventName0, ___msg1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___eventName0, ___msg1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___eventName0, ___msg1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___eventName0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventName0, ___msg1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventName0, ___msg1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___eventName0) - 1), ___msg1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___eventName0, ___msg1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult admob.Admob_AdmobEventHandler::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdmobEventHandler_BeginInvoke_m5117CE7E92176FB1C3A239E858C75BB7430A15C1 (AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * __this, String_t* ___eventName0, String_t* ___msg1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___eventName0;
	__d_args[1] = ___msg1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void admob.Admob_AdmobEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobEventHandler_EndInvoke_m157BC1EBF50CA0E900F6F74DF2CD83947E828A3B (AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void admob.Admob_InnerAdmobListener::onAdmobEvent(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InnerAdmobListener_onAdmobEvent_m15404D7E174E64670E60C78A2B9FFB83BDF7108D (InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___paramString2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InnerAdmobListener_onAdmobEvent_m15404D7E174E64670E60C78A2B9FFB83BDF7108D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (adtype == "banner")
		String_t* L_0 = ___adtype0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral37F93A070955B8890D976577E68F269920FBC73C, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// if (admobInstance.bannerEventHandler != null)
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_2 = __this->get_admobInstance_0();
		NullCheck(L_2);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_3 = L_2->get_bannerEventHandler_0();
		if (!L_3)
		{
			goto IL_00b6;
		}
	}
	{
		// admobInstance.bannerEventHandler(eventName, paramString);
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_4 = __this->get_admobInstance_0();
		NullCheck(L_4);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_5 = L_4->get_bannerEventHandler_0();
		String_t* L_6 = ___eventName1;
		String_t* L_7 = ___paramString2;
		NullCheck(L_5);
		AdmobEventHandler_Invoke_m92E991BBB23DE9949EEEB0E1F4C9B83638EF7BDC(L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// else if (adtype == "interstitial")
		String_t* L_8 = ___adtype0;
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteral491C56E02090CA825E91F114401096602CECDD4E, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// if (admobInstance.interstitialEventHandler != null)
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_10 = __this->get_admobInstance_0();
		NullCheck(L_10);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_11 = L_10->get_interstitialEventHandler_1();
		if (!L_11)
		{
			goto IL_00b6;
		}
	}
	{
		// admobInstance.interstitialEventHandler(eventName, paramString);
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_12 = __this->get_admobInstance_0();
		NullCheck(L_12);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_13 = L_12->get_interstitialEventHandler_1();
		String_t* L_14 = ___eventName1;
		String_t* L_15 = ___paramString2;
		NullCheck(L_13);
		AdmobEventHandler_Invoke_m92E991BBB23DE9949EEEB0E1F4C9B83638EF7BDC(L_13, L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005d:
	{
		// else if (adtype == "rewardedVideo")
		String_t* L_16 = ___adtype0;
		bool L_17 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_16, _stringLiteral3CD160D309BA825C310F87F15067C3953AF7076B, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		// if (admobInstance.rewardedVideoEventHandler != null)
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_18 = __this->get_admobInstance_0();
		NullCheck(L_18);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_19 = L_18->get_rewardedVideoEventHandler_2();
		if (!L_19)
		{
			goto IL_00b6;
		}
	}
	{
		// admobInstance.rewardedVideoEventHandler(eventName, paramString);
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_20 = __this->get_admobInstance_0();
		NullCheck(L_20);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_21 = L_20->get_rewardedVideoEventHandler_2();
		String_t* L_22 = ___eventName1;
		String_t* L_23 = ___paramString2;
		NullCheck(L_21);
		AdmobEventHandler_Invoke_m92E991BBB23DE9949EEEB0E1F4C9B83638EF7BDC(L_21, L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008a:
	{
		// else if (adtype == "nativeBanner")
		String_t* L_24 = ___adtype0;
		bool L_25 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_24, _stringLiteral76F5F2C44036F747808FD3F1DA1116FCE312FF90, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		// if(admobInstance.nativeBannerEventHandler!=null)
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_26 = __this->get_admobInstance_0();
		NullCheck(L_26);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_27 = L_26->get_nativeBannerEventHandler_3();
		if (!L_27)
		{
			goto IL_00b6;
		}
	}
	{
		// admobInstance.nativeBannerEventHandler(eventName, paramString);
		Admob_tE00459DACF8DADF0EF3E2582D2E1DEC8EBD5EA8A * L_28 = __this->get_admobInstance_0();
		NullCheck(L_28);
		AdmobEventHandler_t9839CE9FB11285D3E45FCC6F9837B9158C01CD0C * L_29 = L_28->get_nativeBannerEventHandler_3();
		String_t* L_30 = ___eventName1;
		String_t* L_31 = ___paramString2;
		NullCheck(L_29);
		AdmobEventHandler_Invoke_m92E991BBB23DE9949EEEB0E1F4C9B83638EF7BDC(L_29, L_30, L_31, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void admob.Admob_InnerAdmobListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InnerAdmobListener__ctor_mF88FBB8B1B389A0A325A387D5623902D924BB790 (InnerAdmobListener_tC4E25C3B11BCFEC3B9BE4952801F6E08AE39150E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void admob.AdmobEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobEvent__ctor_m6F128357B929B7CF9627D58C5659BEDE6D6D77FF (AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void admob.AdmobEvent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobEvent__cctor_m3DB0CAEDEF17CDAE48C9D2D5677E64CCB51C1CD7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdmobEvent__cctor_m3DB0CAEDEF17CDAE48C9D2D5677E64CCB51C1CD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string onAdLoaded = "onAdLoaded";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onAdLoaded_0(_stringLiteral77F5D68655DD996F128271D5FB2D13684CAA1945);
		// public static readonly string onAdFailedToLoad = "onAdFailedToLoad";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onAdFailedToLoad_1(_stringLiteral0CE5D9871CF5CA9BE9B87AFFB4F166AC1DE3EF6F);
		// public static readonly string onAdOpened = "onAdOpened";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onAdOpened_2(_stringLiteral1B61557EA43DC8D24ACFA27E751DB91BF75BE7DF);
		// public static readonly string adViewWillDismissScreen = "adViewWillDismissScreen";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_adViewWillDismissScreen_3(_stringLiteral33FAA6CBD84ECD9F4CCA1EA4C826A02C2BF1761A);
		// public static readonly string onAdClosed = "onAdClosed";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onAdClosed_4(_stringLiteralBC7BC1122F2028654F6CD5101584A449957E29CF);
		// public static readonly string onAdLeftApplication = "onAdLeftApplication";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onAdLeftApplication_5(_stringLiteral05357A25714AC36B9FD56DF5AB9B0ABB90FD5637);
		// public static readonly string onRewardedVideoStarted = "onRewardedVideoStarted";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onRewardedVideoStarted_6(_stringLiteral85A80AA52B3F94C8D55C145932F3769FDF803388);
		// public static readonly string onRewardedVideoCompleted = "onRewardedVideoCompleted";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onRewardedVideoCompleted_7(_stringLiteral3E88918343D504D88E30D6FB253D1FD6C28E3FE0);
		// public static readonly string onRewarded = "onRewarded";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onRewarded_8(_stringLiteral802A143666A38A5A83884DADB7678F0CA66A453E);
		// public static readonly string onAdClicked = "onAdClicked";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onAdClicked_9(_stringLiteral0FCB52FD939AC2C9188A8BA5BAD8B4C0FC3DC62F);
		// public static readonly string onAdImpression = "onAdImpression";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onAdImpression_10(_stringLiteral84136AA40E1600A4D075D8C394B094E013C2E89E);
		// public static readonly string onVideoUnmute = "onVideoUnmute";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onVideoUnmute_11(_stringLiteralC4B13C181FC9E04130F89BB37CF426E719C365DD);
		// public static readonly string onVideoMute = "onVideoMute";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onVideoMute_12(_stringLiteral8BE05043E17B1EBE5BA800E80C44E0D26EDEF279);
		// public static readonly string onVideoEnd = "onVideoEnd";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onVideoEnd_13(_stringLiteral7938EFA9FA1986BBA2C3BE9C9F300647F86A74F1);
		// public static readonly string onVideoPause = "onVideoPause";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onVideoPause_14(_stringLiteralC881ED997E7D25D71133E9FFFD306140F8E9A6F6);
		// public static readonly string onVideoPlay = "onVideoPlay";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onVideoPlay_15(_stringLiteral3383A33F1E997A3527B284CA2576387BAA5D70D8);
		// public static readonly string onVideoStart = "onVideoStart";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onVideoStart_16(_stringLiteralDCC3494010FDB90EE173553F38115922D99F4B25);
		// public static readonly string onNativeAdLoaded = "onNativeAdLoaded";
		((AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_StaticFields*)il2cpp_codegen_static_fields_for(AdmobEvent_t3EED380C31E1754A4247543BBF5C1C679D6AFF85_il2cpp_TypeInfo_var))->set_onNativeAdLoaded_17(_stringLiteral3C2B28477F4EBF08ACA9FE131A41717847576BE5);
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
// System.Void admob.AdmobListenerProxy::.ctor(admob.IAdmobListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobListenerProxy__ctor_m5F4F08AEC7D78910FF642D4DFFDA37617965A877 (AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdmobListenerProxy__ctor_m5F4F08AEC7D78910FF642D4DFFDA37617965A877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.admob.plugin.IAdmobListener")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m159565DEF4041D92C0763D1F4A0684140241CD9A(__this, _stringLiteralAE61C058287ACFF1C3BC426F22778A87AE7C8FA5, /*hidden argument*/NULL);
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_4(L_0);
		// }
		return;
	}
}
// System.Void admob.AdmobListenerProxy::onAdmobEvent(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdmobListenerProxy_onAdmobEvent_m72F679CC1BF91C322FD7227E673B7B198F32FE84 (AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3 * __this, String_t* ___adtype0, String_t* ___eventName1, String_t* ___paramString2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdmobListenerProxy_onAdmobEvent_m72F679CC1BF91C322FD7227E673B7B198F32FE84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(listener!=null)
		RuntimeObject* L_0 = __this->get_listener_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// listener.onAdmobEvent(adtype,eventName,paramString);
		RuntimeObject* L_1 = __this->get_listener_4();
		String_t* L_2 = ___adtype0;
		String_t* L_3 = ___eventName1;
		String_t* L_4 = ___paramString2;
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(0 /* System.Void admob.IAdmobListener::onAdmobEvent(System.String,System.String,System.String) */, IAdmobListener_t45C7894D8859F0D887ED021FDD5C56F3436C1E62_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.String admob.AdmobListenerProxy::toString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdmobListenerProxy_toString_m250FEA07CE46CAECEB375EAE17DE8FA640DD36B8 (AdmobListenerProxy_tB4E4E8B030E68FE415454D86279975D28A4D3DC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdmobListenerProxy_toString_m250FEA07CE46CAECEB375EAE17DE8FA640DD36B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "AdmobListenerProxy";
		return _stringLiteral4D2BDD323E052F238CED803CA38EC22F0BABE8F6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AdSize_get_Width_mB96D492B67810CBC2F2C3320FF0924A2FA70BDDD_inline (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, const RuntimeMethod* method)
{
	{
		// return width;
		int32_t L_0 = __this->get_width_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AdSize_get_Height_m86A5E23246088750BF5C2156BCCDAFB67154E54C_inline (AdSize_t7252AD2CE9848C848F67B83BF6B4DB358C8E366B * __this, const RuntimeMethod* method)
{
	{
		// return height;
		int32_t L_0 = __this->get_height_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
