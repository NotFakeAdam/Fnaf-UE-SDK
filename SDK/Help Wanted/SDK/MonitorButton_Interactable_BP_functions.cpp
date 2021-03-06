
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

// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.CheckForFreddieMask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMonitorButton_Interactable_BP_C::CheckForFreddieMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.CheckForFreddieMask");

	AMonitorButton_Interactable_BP_C_CheckForFreddieMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.SetOfficeManager
// (Public, BlueprintCallable, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::SetOfficeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.SetOfficeManager");

	AMonitorButton_Interactable_BP_C_SetOfficeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.AdjustBtnPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::AdjustBtnPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.AdjustBtnPosition");

	AMonitorButton_Interactable_BP_C_AdjustBtnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ResetBtnPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::ResetBtnPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ResetBtnPosition");

	AMonitorButton_Interactable_BP_C_ResetBtnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.UserConstructionScript");

	AMonitorButton_Interactable_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ReceiveBeginPlay");

	AMonitorButton_Interactable_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMonitorButton_Interactable_BP_C::BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AMonitorButton_Interactable_BP_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_Interactable_BP_C::BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AMonitorButton_Interactable_BP_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_Interactable_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ReceiveTick");

	AMonitorButton_Interactable_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.NonVRRelease
// (BlueprintCallable, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::NonVRRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.NonVRRelease");

	AMonitorButton_Interactable_BP_C_NonVRRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.OnNonVRLineTraceInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_Interactable_BP_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.OnNonVRLineTraceInteract");

	AMonitorButton_Interactable_BP_C_OnNonVRLineTraceInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitComponent = HitComponent;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.Debug_InputEvent
// (BlueprintCallable, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::Debug_InputEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.Debug_InputEvent");

	AMonitorButton_Interactable_BP_C_Debug_InputEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.NonVR_GamePad
// (BlueprintCallable, BlueprintEvent)

void AMonitorButton_Interactable_BP_C::NonVR_GamePad()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.NonVR_GamePad");

	AMonitorButton_Interactable_BP_C_NonVR_GamePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ExecuteUbergraph_MonitorButton_Interactable_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_Interactable_BP_C::ExecuteUbergraph_MonitorButton_Interactable_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_Interactable_BP.MonitorButton_Interactable_BP_C.ExecuteUbergraph_MonitorButton_Interactable_BP");

	AMonitorButton_Interactable_BP_C_ExecuteUbergraph_MonitorButton_Interactable_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
