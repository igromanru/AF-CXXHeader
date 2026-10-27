#ifndef UE4SS_SDK_Deployed_Antelight_HPP
#define UE4SS_SDK_Deployed_Antelight_HPP

class ADeployed_Antelight_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    class USpotLightComponent* SpotLight;                                             // 0x0860 (size: 0x8)
    FLinearColor LightColor;                                                          // 0x0868 (size: 0x10)

    void UserConstructionScript();
}; // Size: 0x878

#endif
