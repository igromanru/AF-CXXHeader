#ifndef UE4SS_SDK_AnimNotify_PlaySoundOverride_HPP
#define UE4SS_SDK_AnimNotify_PlaySoundOverride_HPP

class UAnimNotify_PlaySoundOverride_C : public UAbioticAnimNotify_PlaySound
{
    double Camera Shake Intensity;                                                    // 0x0070 (size: 0x8)
    double Camera Shake Distance;                                                     // 0x0078 (size: 0x8)

    TEnumAsByte<E_4LegFootfalls::Type> Foot Tag to Enum(FGameplayTag Tag);
    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x80

#endif
