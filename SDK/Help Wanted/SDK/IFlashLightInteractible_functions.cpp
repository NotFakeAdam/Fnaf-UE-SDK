
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

// Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightEndHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFlashlight_Battery_C*   Flashlight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIFlashLightInteractible_C::OnFlashLightEndHover(class AFlashlight_Battery_C* Flashlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightEndHover");

	UIFlashLightInteractible_C_OnFlashLightEndHover_Params params;
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightBeginHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFlashlight_Battery_C*   Flashlight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIFlashLightInteractible_C::OnFlashLightBeginHover(class AFlashlight_Battery_C* Flashlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightBeginHover");

	UIFlashLightInteractible_C_OnFlashLightBeginHover_Params params;
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
