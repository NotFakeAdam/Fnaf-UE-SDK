#pragma once

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Player_PointLight_Head.Player_PointLight_Head_C
// 0x0018 (0x0340 - 0x0328)
class APlayer_PointLight_Head_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Player_PointLight_Head.Player_PointLight_Head_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Player_PointLight_Head(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
