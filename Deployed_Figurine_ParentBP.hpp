#ifndef UE4SS_SDK_Deployed_Figurine_ParentBP_HPP
#define UE4SS_SDK_Deployed_Figurine_ParentBP_HPP

class ADeployed_Figurine_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{

    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void TargetableByTurrets(bool& Targetable);
}; // Size: 0x920

#endif
