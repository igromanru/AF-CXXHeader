#ifndef UE4SS_SDK_Deployed_WallClock_HPP
#define UE4SS_SDK_Deployed_WallClock_HPP

class ADeployed_WallClock_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* MinuteNeedle;                                         // 0x0928 (size: 0x8)
    class UStaticMeshComponent* HourNeedle;                                           // 0x0930 (size: 0x8)

    void TargetableByTurrets(bool& Targetable);
    void Targetable By Triggers(bool& Targetable);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void ReceiveBeginPlay();
    void UpdateClockNeedles(double TimeInSeconds);
    void ExecuteUbergraph_Deployed_WallClock(int32 EntryPoint);
}; // Size: 0x938

#endif
