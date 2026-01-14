/*==============================================================================

   ライトのカメラ(深度バッフアシャドウの) [light_camera.h]
														 Author : Tanaka Kouki
														 Date   : 2025/12/10
--------------------------------------------------------------------------------

==============================================================================*/
#ifndef LIGHT_CAMERA_H
#define LIGHT_CAMERA_H

#include<DirectXMath.h>

void LightCamera_Initialize(const DirectX::XMFLOAT3& worldDirectional, const DirectX::XMFLOAT3& position);
void LightCamera_Finalize();

void LightCamera_SetPosition(const DirectX::XMFLOAT3& position);
void LightCamera_SetFront(const DirectX::XMFLOAT3&Lightont);

const DirectX::XMFLOAT4X4& LightCamera_GetViewMatrix();
const DirectX::XMFLOAT4X4& LightCamera_GetProjectionMatrix();


#endif//LIGHT_CAMERA_H
