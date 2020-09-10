#pragma once

#include "pch.h"
#include <Windows.h>
#include <dawn/webgpu.h>

#define EXPORT _declspec(dllexport)

extern "C" {
	EXPORT WGPUDevice createDevice(HWND handle, WGPUBackendType type);
	EXPORT WGPUSwapChain createSwapChain(WGPUDevice device);
	EXPORT WGPUTextureFormat getSwapChainFormat(WGPUDevice device);
	EXPORT WGPUProc getProcAddress(WGPUDevice device, const char* procName);
}