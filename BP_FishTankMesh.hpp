#ifndef UE4SS_SDK_BP_FishTankMesh_HPP
#define UE4SS_SDK_BP_FishTankMesh_HPP

class UBP_FishTankMesh_C : public USkeletalMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F70 (size: 0x8)
    FGlobalItemRowHandle CurrentRow;                                                  // 0x0F78 (size: 0x10)
    FTextureVariantRowHandle CurrentVariant;                                          // 0x0F88 (size: 0x10)

    void GetFishAnimBP(TSubclassOf<class UFishTankAnimInstance>& OutAnimBP);
    void ClearCurrentMeshMaterials();
    void ClearFishRow();
    void SetFishRow(FGlobalItemRowHandle InFishRow, FTextureVariantRowHandle InVariant);
    void InitFishMesh();
    void ExecuteUbergraph_BP_FishTankMesh(int32 EntryPoint);
}; // Size: 0xF98

#endif
