
#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Prize_Rare_Plush_ToyBonnie.Prize_Rare_Plush_ToyBonnie_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrize_Rare_Plush_ToyBonnie_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_Rare_Plush_ToyBonnie.Prize_Rare_Plush_ToyBonnie_C.UserConstructionScript");

	APrize_Rare_Plush_ToyBonnie_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif