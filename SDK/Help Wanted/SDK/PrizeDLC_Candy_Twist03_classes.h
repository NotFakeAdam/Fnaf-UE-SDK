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

// BlueprintGeneratedClass PrizeDLC_Candy_Twist03.PrizeDLC_Candy_Twist03_C
// 0x0008 (0x03F8 - 0x03F0)
class APrizeDLC_Candy_Twist03_C : public APrize_Parent_C
{
public:
	class UStaticMeshComponent*                        Candy;                                                    // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrizeDLC_Candy_Twist03.PrizeDLC_Candy_Twist03_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
