
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

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMonitorButton_MaintanceButton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.UserConstructionScript");

	AMonitorButton_MaintanceButton_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMonitorButton_MaintanceButton_C::BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AMonitorButton_MaintanceButton_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ResetBtnPosition
// (Public, BlueprintCallable, BlueprintEvent)

void AMonitorButton_MaintanceButton_C::ResetBtnPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ResetBtnPosition");

	AMonitorButton_MaintanceButton_C_ResetBtnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.AdjustBtnPosition
// (Public, BlueprintCallable, BlueprintEvent)

void AMonitorButton_MaintanceButton_C::AdjustBtnPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.AdjustBtnPosition");

	AMonitorButton_MaintanceButton_C_AdjustBtnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_MaintanceButton_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ReceiveTick");

	AMonitorButton_MaintanceButton_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_MaintanceButton_C::BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AMonitorButton_MaintanceButton_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMonitorButton_MaintanceButton_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ReceiveBeginPlay");

	AMonitorButton_MaintanceButton_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NonVRReleaseChild
// (BlueprintCallable, BlueprintEvent)

void AMonitorButton_MaintanceButton_C::NonVRReleaseChild()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NonVRReleaseChild");

	AMonitorButton_MaintanceButton_C_NonVRReleaseChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.OnNonVRLineTraceInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C** MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_MaintanceButton_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C** MotionControllerPawn, class USceneComponent** HitComponent, class AActor** Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.OnNonVRLineTraceInteract");

	AMonitorButton_MaintanceButton_C_OnNonVRLineTraceInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitComponent = HitComponent;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NonVR_GamepadInteraction
// (BlueprintCallable, BlueprintEvent)

void AMonitorButton_MaintanceButton_C::NonVR_GamepadInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NonVR_GamepadInteraction");

	AMonitorButton_MaintanceButton_C_NonVR_GamepadInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NONVR_MaintainceButton_Reset
// (BlueprintCallable, BlueprintEvent)

void AMonitorButton_MaintanceButton_C::NONVR_MaintainceButton_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NONVR_MaintainceButton_Reset");

	AMonitorButton_MaintanceButton_C_NONVR_MaintainceButton_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ExecuteUbergraph_MonitorButton_MaintanceButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorButton_MaintanceButton_C::ExecuteUbergraph_MonitorButton_MaintanceButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ExecuteUbergraph_MonitorButton_MaintanceButton");

	AMonitorButton_MaintanceButton_C_ExecuteUbergraph_MonitorButton_MaintanceButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
