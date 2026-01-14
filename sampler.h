/*==============================================================================

　　  サンプラー設定のユーティリティー[sampler.h]
														 Author : Kouki Tanaka
														 Date   : 2025/09/18
--------------------------------------------------------------------------------

==============================================================================*/

#ifndef SMAPLER__H
#define SMAPLER__H

#include<d3d11.h>

void Sampler_Initialize(ID3D11Device* pDevice, ID3D11DeviceContext* pContext);
void Sampler_Finalize();

void Sampler_SetFilterPoint();
void Sampler_SetFilterLinear();
void Sampler_SetFilterAnisotropic();


#endif//SMAPLER_H