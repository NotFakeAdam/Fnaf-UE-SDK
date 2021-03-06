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

// Class SWGVR.SWGGrabbable
// 0x0000 (0x0028 - 0x0028)
class USWGGrabbable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGGrabbable");
		return ptr;
	}


	void OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity);
	void OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	bool AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
};


// Class SWGVR.SWGVRCameraLocator
// 0x0018 (0x0340 - 0x0328)
class ASWGVRCameraLocator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGVRCameraLocator");
		return ptr;
	}

};


// Class SWGVR.SWGVRCharacter
// 0x0350 (0x0A90 - 0x0740)
class ASWGVRCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0740(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnControllerDeviceChanged;                                // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorGrabbed;                                           // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorReleased;                                          // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCameraComponent*                            CameraComp;                                               // 0x0778(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VROriginComp;                                             // 0x0780(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VRCameraAdjuster;                                         // 0x0788(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bPositionalHeadTracking;                                  // 0x0790(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0791(0x0007) MISSED OFFSET
	class UMotionControllerComponent*                  LeftHandComponent;                                        // 0x0798(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMotionControllerComponent*                  RightHandComponent;                                       // 0x07A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMotionControllerComponent*                  PadMotionComponent;                                       // 0x07A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USphereComponent*                            LeftHandTrigger;                                          // 0x07B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RightHandTrigger;                                         // 0x07B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PadTrigger;                                               // 0x07C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LeftAttachPoint;                                          // 0x07C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RightAttachPoint;                                         // 0x07D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PadAttachPoint;                                           // 0x07D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             PadInteractionPointer;                                    // 0x07E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        HandsThatGrab;                                            // 0x07E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	struct FName                                       LeftGrabActionName;                                       // 0x07F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightGrabActionName;                                      // 0x07F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ThrowMagnitude;                                           // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGrabClosest;                                             // 0x0804(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldMultiple;                                            // 0x0805(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        HandsThatInteract;                                        // 0x0806(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0807(0x0001) MISSED OFFSET
	struct FName                                       LeftInteractActionName;                                   // 0x0808(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightInteractActionName;                                  // 0x0810(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHMDTrackingOrigin>                    VRTrackingOrigin;                                         // 0x0818(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEyeOffsetForEyeTracking;                              // 0x0819(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x081A(0x0002) MISSED OFFSET
	float                                              EyeOffset;                                                // 0x081C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHandForPad;                                           // 0x0820(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        HandToUseAsPad;                                           // 0x0821(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0822(0x0002) MISSED OFFSET
	float                                              PadLineTraceDistance;                                     // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpGrabSpeed;                                            // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPerfCounterEnabled;                                      // 0x082C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	float                                              FPSMin;                                                   // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FPSMax;                                                   // 0x0834(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FPSAverageOverTime;                                       // 0x0838(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FPSImmediate;                                             // 0x083C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PerfCounterSeconds;                                       // 0x0840(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PerfCounterImmediateSeconds;                              // 0x0844(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TotalPerfSeconds;                                         // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                FrameCounterForAverage;                                   // 0x084C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               VRModeEnabled;                                            // 0x0850(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x23F];                                     // 0x0851(0x023F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGVRCharacter");
		return ptr;
	}


	void StopFrameCounters();
	void StartFrameCounters();
	void SetVRModeEnabled(bool enable);
	void SetHeldOffset(EVRHandType Hand, const struct FVector& NewOffset, int ItemIndex);
	void SetCameraWorldRotation(const struct FRotator& Rotation);
	void SetCameraWorldLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
	void SetCameraWorldLocation(const struct FVector& Location);
	void SetCameraRelativeRotation(const struct FRotator& Rotation);
	void SetCameraRelativeLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
	void SetCameraRelativeLocation(const struct FVector& Location);
	void ReleaseGrabbable(class AActor* Grabbable, bool bForce, bool bOverrideVelocity, const struct FVector& Velocity);
	void ReleaseAll(EVRHandType Hand, bool bForce, bool bOverrideVelocity, const struct FVector& Velocity);
	void ProcessInterpolatedGrab(const struct FTransform& AttachmentTransform, class AActor* HeldActor, EVRHandType Hand, struct FHeldGrabbableInfo* ActorGrabbablePair);
	void OnTrackedControllerChanged();
	void OnRightEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnRightBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRelease(class AActor* Grabbable, EVRHandType Hand);
	void OnLeftEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnLeftBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHoverEnd(class AActor* HoveredActor, EVRHandType Hand);
	void OnHoverBegin(class AActor* HoveredActor, EVRHandType Hand);
	void OnHeldActorDestroyed(class AActor* DestroyedActor);
	void OnGrabHoverEnd(class AActor* Grabbable, EVRHandType Hand);
	void OnGrabHoverBegin(class AActor* Grabbable, EVRHandType Hand);
	void OnGrab(class AActor* Grabbable, EVRHandType Hand);
	bool IsUsingPad();
	bool IsInVRMode();
	void GrabGrabbable(class AActor* Grabbable, EVRHandType Hand, bool bForce);
	struct FName GetPadTrackingSource();
	struct FVector GetHeldOffset(EVRHandType Hand, int ItemIndex);
	struct FMotionControllerInfo GetHandInfo(EVRHandType Hand);
	EVRHandType GetHandForPad();
	class USceneComponent* GetHandAttachPoint(EVRHandType Hand);
	struct FHeldGrabbableInfo GetGrabbableInfo(class AActor* HeldActor);
	EControllerType GetControllerDeviceType();
	void AddHeldOffset(EVRHandType Hand, const struct FVector& AdditiveValue, int ItemIndex);
};


// Class SWGVR.SWGVRHoverReceiver
// 0x0000 (0x0028 - 0x0028)
class USWGVRHoverReceiver : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGVRHoverReceiver");
		return ptr;
	}


	void OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand);
};


// Class SWGVR.SWGVRInteractive
// 0x0000 (0x0028 - 0x0028)
class USWGVRInteractive : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGVRInteractive");
		return ptr;
	}


	void OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand);
};


// Class SWGVR.SWGVRPlayerControllerBase
// 0x0000 (0x0678 - 0x0678)
class ASWGVRPlayerControllerBase : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGVRPlayerControllerBase");
		return ptr;
	}


	void OnUsingGamepadChanged();
	bool IsUsingGamepad();
};


// Class SWGVR.SWGVRSettings
// 0x0008 (0x0040 - 0x0038)
class USWGVRSettings : public UDeveloperSettings
{
public:
	bool                                               bEnableCameraLocator;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForcePickupTesting;                                      // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForcePickupDebugDisplay;                                 // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDS4Enabled;                                         // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowNonVR;                                              // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGVRSettings");
		return ptr;
	}

};


// Class SWGVR.SWGVRUtil
// 0x0000 (0x0028 - 0x0028)
class USWGVRUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGVR.SWGVRUtil");
		return ptr;
	}


	void STATIC_SwitchOnPlayType(EVRPlayType* VRPlayMode);
	EVRPlayType STATIC_GetPlayType();
	void STATIC_ChangePlayType(EVRPlayType VRPlayMode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
