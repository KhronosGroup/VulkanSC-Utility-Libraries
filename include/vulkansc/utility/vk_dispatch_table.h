// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See dispatch_table_generator.py for modifications
// Copyright 2023 The Khronos Group Inc.
// Copyright 2023 Valve Corporation
// Copyright 2023 LunarG, Inc.
//
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <vulkan/vulkan.h>

#include <string.h>

// clang-format off

typedef PFN_vkVoidFunction(VKAPI_PTR *PFN_GetPhysicalDeviceProcAddr)(VkInstance instance, const char *pName);

// Instance function pointer dispatch table
typedef struct VkuInstanceDispatchTable_ {
    PFN_GetPhysicalDeviceProcAddr GetPhysicalDeviceProcAddr;

    PFN_vkCreateInstance CreateInstance;
    PFN_vkDestroyInstance DestroyInstance;
    PFN_vkEnumeratePhysicalDevices EnumeratePhysicalDevices;
    PFN_vkGetPhysicalDeviceFeatures GetPhysicalDeviceFeatures;
    PFN_vkGetPhysicalDeviceFormatProperties GetPhysicalDeviceFormatProperties;
    PFN_vkGetPhysicalDeviceImageFormatProperties GetPhysicalDeviceImageFormatProperties;
    PFN_vkGetPhysicalDeviceProperties GetPhysicalDeviceProperties;
    PFN_vkGetPhysicalDeviceQueueFamilyProperties GetPhysicalDeviceQueueFamilyProperties;
    PFN_vkGetPhysicalDeviceMemoryProperties GetPhysicalDeviceMemoryProperties;
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr;
    PFN_vkCreateDevice CreateDevice;
    PFN_vkEnumerateInstanceExtensionProperties EnumerateInstanceExtensionProperties;
    PFN_vkEnumerateDeviceExtensionProperties EnumerateDeviceExtensionProperties;
    PFN_vkEnumerateInstanceLayerProperties EnumerateInstanceLayerProperties;
    PFN_vkEnumerateDeviceLayerProperties EnumerateDeviceLayerProperties;
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties GetPhysicalDeviceSparseImageFormatProperties;
    PFN_vkEnumerateInstanceVersion EnumerateInstanceVersion;
    PFN_vkEnumeratePhysicalDeviceGroups EnumeratePhysicalDeviceGroups;
    PFN_vkGetPhysicalDeviceFeatures2 GetPhysicalDeviceFeatures2;
    PFN_vkGetPhysicalDeviceProperties2 GetPhysicalDeviceProperties2;
    PFN_vkGetPhysicalDeviceFormatProperties2 GetPhysicalDeviceFormatProperties2;
    PFN_vkGetPhysicalDeviceImageFormatProperties2 GetPhysicalDeviceImageFormatProperties2;
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2 GetPhysicalDeviceQueueFamilyProperties2;
    PFN_vkGetPhysicalDeviceMemoryProperties2 GetPhysicalDeviceMemoryProperties2;
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 GetPhysicalDeviceSparseImageFormatProperties2;
    PFN_vkGetPhysicalDeviceExternalBufferProperties GetPhysicalDeviceExternalBufferProperties;
    PFN_vkGetPhysicalDeviceExternalFenceProperties GetPhysicalDeviceExternalFenceProperties;
    PFN_vkGetPhysicalDeviceExternalSemaphoreProperties GetPhysicalDeviceExternalSemaphoreProperties;
    PFN_vkGetPhysicalDeviceToolProperties GetPhysicalDeviceToolProperties;
    PFN_vkDestroySurfaceKHR DestroySurfaceKHR;
    PFN_vkGetPhysicalDeviceSurfaceSupportKHR GetPhysicalDeviceSurfaceSupportKHR;
    PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR GetPhysicalDeviceSurfaceCapabilitiesKHR;
    PFN_vkGetPhysicalDeviceSurfaceFormatsKHR GetPhysicalDeviceSurfaceFormatsKHR;
    PFN_vkGetPhysicalDeviceSurfacePresentModesKHR GetPhysicalDeviceSurfacePresentModesKHR;
    PFN_vkGetPhysicalDevicePresentRectanglesKHR GetPhysicalDevicePresentRectanglesKHR;
    PFN_vkGetPhysicalDeviceDisplayPropertiesKHR GetPhysicalDeviceDisplayPropertiesKHR;
    PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR GetPhysicalDeviceDisplayPlanePropertiesKHR;
    PFN_vkGetDisplayPlaneSupportedDisplaysKHR GetDisplayPlaneSupportedDisplaysKHR;
    PFN_vkGetDisplayModePropertiesKHR GetDisplayModePropertiesKHR;
    PFN_vkCreateDisplayModeKHR CreateDisplayModeKHR;
    PFN_vkGetDisplayPlaneCapabilitiesKHR GetDisplayPlaneCapabilitiesKHR;
    PFN_vkCreateDisplayPlaneSurfaceKHR CreateDisplayPlaneSurfaceKHR;
#ifdef VK_USE_PLATFORM_XLIB_KHR
    PFN_vkCreateXlibSurfaceKHR CreateXlibSurfaceKHR;
    PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR GetPhysicalDeviceXlibPresentationSupportKHR;
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    PFN_vkCreateXcbSurfaceKHR CreateXcbSurfaceKHR;
    PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR GetPhysicalDeviceXcbPresentationSupportKHR;
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    PFN_vkCreateWaylandSurfaceKHR CreateWaylandSurfaceKHR;
    PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR GetPhysicalDeviceWaylandPresentationSupportKHR;
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkCreateAndroidSurfaceKHR CreateAndroidSurfaceKHR;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCreateWin32SurfaceKHR CreateWin32SurfaceKHR;
    PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR GetPhysicalDeviceWin32PresentationSupportKHR;
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR GetPhysicalDeviceVideoCapabilitiesKHR;
    PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR GetPhysicalDeviceVideoFormatPropertiesKHR;
    PFN_vkGetPhysicalDeviceFeatures2KHR GetPhysicalDeviceFeatures2KHR;
    PFN_vkGetPhysicalDeviceProperties2KHR GetPhysicalDeviceProperties2KHR;
    PFN_vkGetPhysicalDeviceFormatProperties2KHR GetPhysicalDeviceFormatProperties2KHR;
    PFN_vkGetPhysicalDeviceImageFormatProperties2KHR GetPhysicalDeviceImageFormatProperties2KHR;
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR GetPhysicalDeviceQueueFamilyProperties2KHR;
    PFN_vkGetPhysicalDeviceMemoryProperties2KHR GetPhysicalDeviceMemoryProperties2KHR;
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR GetPhysicalDeviceSparseImageFormatProperties2KHR;
    PFN_vkEnumeratePhysicalDeviceGroupsKHR EnumeratePhysicalDeviceGroupsKHR;
    PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR GetPhysicalDeviceExternalBufferPropertiesKHR;
    PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR GetPhysicalDeviceExternalSemaphorePropertiesKHR;
    PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR GetPhysicalDeviceExternalFencePropertiesKHR;
    PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
    PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR GetPhysicalDeviceSurfaceCapabilities2KHR;
    PFN_vkGetPhysicalDeviceSurfaceFormats2KHR GetPhysicalDeviceSurfaceFormats2KHR;
    PFN_vkGetPhysicalDeviceDisplayProperties2KHR GetPhysicalDeviceDisplayProperties2KHR;
    PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR GetPhysicalDeviceDisplayPlaneProperties2KHR;
    PFN_vkGetDisplayModeProperties2KHR GetDisplayModeProperties2KHR;
    PFN_vkGetDisplayPlaneCapabilities2KHR GetDisplayPlaneCapabilities2KHR;
    PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR GetPhysicalDeviceFragmentShadingRatesKHR;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR;
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR GetPhysicalDeviceRefreshableObjectTypesKHR;
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR GetPhysicalDeviceCooperativeMatrixPropertiesKHR;
    PFN_vkCreateDebugReportCallbackEXT CreateDebugReportCallbackEXT;
    PFN_vkDestroyDebugReportCallbackEXT DestroyDebugReportCallbackEXT;
    PFN_vkDebugReportMessageEXT DebugReportMessageEXT;
#ifdef VK_USE_PLATFORM_GGP
    PFN_vkCreateStreamDescriptorSurfaceGGP CreateStreamDescriptorSurfaceGGP;
#endif  // VK_USE_PLATFORM_GGP
    PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV GetPhysicalDeviceExternalImageFormatPropertiesNV;
#ifdef VK_USE_PLATFORM_VI_NN
    PFN_vkCreateViSurfaceNN CreateViSurfaceNN;
#endif  // VK_USE_PLATFORM_VI_NN
    PFN_vkReleaseDisplayEXT ReleaseDisplayEXT;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkAcquireXlibDisplayEXT AcquireXlibDisplayEXT;
    PFN_vkGetRandROutputDisplayEXT GetRandROutputDisplayEXT;
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT GetPhysicalDeviceSurfaceCapabilities2EXT;
#ifdef VK_USE_PLATFORM_IOS_MVK
    PFN_vkCreateIOSSurfaceMVK CreateIOSSurfaceMVK;
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    PFN_vkCreateMacOSSurfaceMVK CreateMacOSSurfaceMVK;
#endif  // VK_USE_PLATFORM_MACOS_MVK
    PFN_vkCreateDebugUtilsMessengerEXT CreateDebugUtilsMessengerEXT;
    PFN_vkDestroyDebugUtilsMessengerEXT DestroyDebugUtilsMessengerEXT;
    PFN_vkSubmitDebugUtilsMessageEXT SubmitDebugUtilsMessageEXT;
    PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT GetPhysicalDeviceMultisamplePropertiesEXT;
    PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT GetPhysicalDeviceCalibrateableTimeDomainsEXT;
#ifdef VK_USE_PLATFORM_FUCHSIA
    PFN_vkCreateImagePipeSurfaceFUCHSIA CreateImagePipeSurfaceFUCHSIA;
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    PFN_vkCreateMetalSurfaceEXT CreateMetalSurfaceEXT;
#endif  // VK_USE_PLATFORM_METAL_EXT
    PFN_vkGetPhysicalDeviceToolPropertiesEXT GetPhysicalDeviceToolPropertiesEXT;
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV GetPhysicalDeviceCooperativeMatrixPropertiesNV;
    PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT GetPhysicalDeviceSurfacePresentModes2EXT;
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCreateHeadlessSurfaceEXT CreateHeadlessSurfaceEXT;
    PFN_vkAcquireDrmDisplayEXT AcquireDrmDisplayEXT;
    PFN_vkGetDrmDisplayEXT GetDrmDisplayEXT;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireWinrtDisplayNV AcquireWinrtDisplayNV;
    PFN_vkGetWinrtDisplayNV GetWinrtDisplayNV;
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    PFN_vkCreateDirectFBSurfaceEXT CreateDirectFBSurfaceEXT;
    PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT GetPhysicalDeviceDirectFBPresentationSupportEXT;
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCI
    PFN_vkGetPhysicalDeviceSciSyncAttributesNV GetPhysicalDeviceSciSyncAttributesNV;
    PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV GetPhysicalDeviceExternalMemorySciBufPropertiesNV;
    PFN_vkGetPhysicalDeviceSciBufAttributesNV GetPhysicalDeviceSciBufAttributesNV;
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkCreateScreenSurfaceQNX CreateScreenSurfaceQNX;
    PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX GetPhysicalDeviceScreenPresentationSupportQNX;
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV GetPhysicalDeviceOpticalFlowImageFormatsNV;
} VkuInstanceDispatchTable;

// Device function pointer dispatch table
typedef struct VkuDeviceDispatchTable_ {
    PFN_vkGetDeviceProcAddr GetDeviceProcAddr;
    PFN_vkDestroyDevice DestroyDevice;
    PFN_vkGetDeviceQueue GetDeviceQueue;
    PFN_vkQueueSubmit QueueSubmit;
    PFN_vkQueueWaitIdle QueueWaitIdle;
    PFN_vkDeviceWaitIdle DeviceWaitIdle;
    PFN_vkAllocateMemory AllocateMemory;
    PFN_vkFreeMemory FreeMemory;
    PFN_vkMapMemory MapMemory;
    PFN_vkUnmapMemory UnmapMemory;
    PFN_vkFlushMappedMemoryRanges FlushMappedMemoryRanges;
    PFN_vkInvalidateMappedMemoryRanges InvalidateMappedMemoryRanges;
    PFN_vkGetDeviceMemoryCommitment GetDeviceMemoryCommitment;
    PFN_vkBindBufferMemory BindBufferMemory;
    PFN_vkBindImageMemory BindImageMemory;
    PFN_vkGetBufferMemoryRequirements GetBufferMemoryRequirements;
    PFN_vkGetImageMemoryRequirements GetImageMemoryRequirements;
    PFN_vkGetImageSparseMemoryRequirements GetImageSparseMemoryRequirements;
    PFN_vkQueueBindSparse QueueBindSparse;
    PFN_vkCreateFence CreateFence;
    PFN_vkDestroyFence DestroyFence;
    PFN_vkResetFences ResetFences;
    PFN_vkGetFenceStatus GetFenceStatus;
    PFN_vkWaitForFences WaitForFences;
    PFN_vkCreateSemaphore CreateSemaphore;
    PFN_vkDestroySemaphore DestroySemaphore;
    PFN_vkCreateEvent CreateEvent;
    PFN_vkDestroyEvent DestroyEvent;
    PFN_vkGetEventStatus GetEventStatus;
    PFN_vkSetEvent SetEvent;
    PFN_vkResetEvent ResetEvent;
    PFN_vkCreateQueryPool CreateQueryPool;
    PFN_vkDestroyQueryPool DestroyQueryPool;
    PFN_vkGetQueryPoolResults GetQueryPoolResults;
    PFN_vkCreateBuffer CreateBuffer;
    PFN_vkDestroyBuffer DestroyBuffer;
    PFN_vkCreateBufferView CreateBufferView;
    PFN_vkDestroyBufferView DestroyBufferView;
    PFN_vkCreateImage CreateImage;
    PFN_vkDestroyImage DestroyImage;
    PFN_vkGetImageSubresourceLayout GetImageSubresourceLayout;
    PFN_vkCreateImageView CreateImageView;
    PFN_vkDestroyImageView DestroyImageView;
    PFN_vkCreateShaderModule CreateShaderModule;
    PFN_vkDestroyShaderModule DestroyShaderModule;
    PFN_vkCreatePipelineCache CreatePipelineCache;
    PFN_vkDestroyPipelineCache DestroyPipelineCache;
    PFN_vkGetPipelineCacheData GetPipelineCacheData;
    PFN_vkMergePipelineCaches MergePipelineCaches;
    PFN_vkCreateGraphicsPipelines CreateGraphicsPipelines;
    PFN_vkCreateComputePipelines CreateComputePipelines;
    PFN_vkDestroyPipeline DestroyPipeline;
    PFN_vkCreatePipelineLayout CreatePipelineLayout;
    PFN_vkDestroyPipelineLayout DestroyPipelineLayout;
    PFN_vkCreateSampler CreateSampler;
    PFN_vkDestroySampler DestroySampler;
    PFN_vkCreateDescriptorSetLayout CreateDescriptorSetLayout;
    PFN_vkDestroyDescriptorSetLayout DestroyDescriptorSetLayout;
    PFN_vkCreateDescriptorPool CreateDescriptorPool;
    PFN_vkDestroyDescriptorPool DestroyDescriptorPool;
    PFN_vkResetDescriptorPool ResetDescriptorPool;
    PFN_vkAllocateDescriptorSets AllocateDescriptorSets;
    PFN_vkFreeDescriptorSets FreeDescriptorSets;
    PFN_vkUpdateDescriptorSets UpdateDescriptorSets;
    PFN_vkCreateFramebuffer CreateFramebuffer;
    PFN_vkDestroyFramebuffer DestroyFramebuffer;
    PFN_vkCreateRenderPass CreateRenderPass;
    PFN_vkDestroyRenderPass DestroyRenderPass;
    PFN_vkGetRenderAreaGranularity GetRenderAreaGranularity;
    PFN_vkCreateCommandPool CreateCommandPool;
    PFN_vkDestroyCommandPool DestroyCommandPool;
    PFN_vkResetCommandPool ResetCommandPool;
    PFN_vkAllocateCommandBuffers AllocateCommandBuffers;
    PFN_vkFreeCommandBuffers FreeCommandBuffers;
    PFN_vkBeginCommandBuffer BeginCommandBuffer;
    PFN_vkEndCommandBuffer EndCommandBuffer;
    PFN_vkResetCommandBuffer ResetCommandBuffer;
    PFN_vkCmdBindPipeline CmdBindPipeline;
    PFN_vkCmdSetViewport CmdSetViewport;
    PFN_vkCmdSetScissor CmdSetScissor;
    PFN_vkCmdSetLineWidth CmdSetLineWidth;
    PFN_vkCmdSetDepthBias CmdSetDepthBias;
    PFN_vkCmdSetBlendConstants CmdSetBlendConstants;
    PFN_vkCmdSetDepthBounds CmdSetDepthBounds;
    PFN_vkCmdSetStencilCompareMask CmdSetStencilCompareMask;
    PFN_vkCmdSetStencilWriteMask CmdSetStencilWriteMask;
    PFN_vkCmdSetStencilReference CmdSetStencilReference;
    PFN_vkCmdBindDescriptorSets CmdBindDescriptorSets;
    PFN_vkCmdBindIndexBuffer CmdBindIndexBuffer;
    PFN_vkCmdBindVertexBuffers CmdBindVertexBuffers;
    PFN_vkCmdDraw CmdDraw;
    PFN_vkCmdDrawIndexed CmdDrawIndexed;
    PFN_vkCmdDrawIndirect CmdDrawIndirect;
    PFN_vkCmdDrawIndexedIndirect CmdDrawIndexedIndirect;
    PFN_vkCmdDispatch CmdDispatch;
    PFN_vkCmdDispatchIndirect CmdDispatchIndirect;
    PFN_vkCmdCopyBuffer CmdCopyBuffer;
    PFN_vkCmdCopyImage CmdCopyImage;
    PFN_vkCmdBlitImage CmdBlitImage;
    PFN_vkCmdCopyBufferToImage CmdCopyBufferToImage;
    PFN_vkCmdCopyImageToBuffer CmdCopyImageToBuffer;
    PFN_vkCmdUpdateBuffer CmdUpdateBuffer;
    PFN_vkCmdFillBuffer CmdFillBuffer;
    PFN_vkCmdClearColorImage CmdClearColorImage;
    PFN_vkCmdClearDepthStencilImage CmdClearDepthStencilImage;
    PFN_vkCmdClearAttachments CmdClearAttachments;
    PFN_vkCmdResolveImage CmdResolveImage;
    PFN_vkCmdSetEvent CmdSetEvent;
    PFN_vkCmdResetEvent CmdResetEvent;
    PFN_vkCmdWaitEvents CmdWaitEvents;
    PFN_vkCmdPipelineBarrier CmdPipelineBarrier;
    PFN_vkCmdBeginQuery CmdBeginQuery;
    PFN_vkCmdEndQuery CmdEndQuery;
    PFN_vkCmdResetQueryPool CmdResetQueryPool;
    PFN_vkCmdWriteTimestamp CmdWriteTimestamp;
    PFN_vkCmdCopyQueryPoolResults CmdCopyQueryPoolResults;
    PFN_vkCmdPushConstants CmdPushConstants;
    PFN_vkCmdBeginRenderPass CmdBeginRenderPass;
    PFN_vkCmdNextSubpass CmdNextSubpass;
    PFN_vkCmdEndRenderPass CmdEndRenderPass;
    PFN_vkCmdExecuteCommands CmdExecuteCommands;
    PFN_vkBindBufferMemory2 BindBufferMemory2;
    PFN_vkBindImageMemory2 BindImageMemory2;
    PFN_vkGetDeviceGroupPeerMemoryFeatures GetDeviceGroupPeerMemoryFeatures;
    PFN_vkCmdSetDeviceMask CmdSetDeviceMask;
    PFN_vkCmdDispatchBase CmdDispatchBase;
    PFN_vkGetImageMemoryRequirements2 GetImageMemoryRequirements2;
    PFN_vkGetBufferMemoryRequirements2 GetBufferMemoryRequirements2;
    PFN_vkGetImageSparseMemoryRequirements2 GetImageSparseMemoryRequirements2;
    PFN_vkTrimCommandPool TrimCommandPool;
    PFN_vkGetDeviceQueue2 GetDeviceQueue2;
    PFN_vkCreateSamplerYcbcrConversion CreateSamplerYcbcrConversion;
    PFN_vkDestroySamplerYcbcrConversion DestroySamplerYcbcrConversion;
    PFN_vkCreateDescriptorUpdateTemplate CreateDescriptorUpdateTemplate;
    PFN_vkDestroyDescriptorUpdateTemplate DestroyDescriptorUpdateTemplate;
    PFN_vkUpdateDescriptorSetWithTemplate UpdateDescriptorSetWithTemplate;
    PFN_vkGetDescriptorSetLayoutSupport GetDescriptorSetLayoutSupport;
    PFN_vkCmdDrawIndirectCount CmdDrawIndirectCount;
    PFN_vkCmdDrawIndexedIndirectCount CmdDrawIndexedIndirectCount;
    PFN_vkCreateRenderPass2 CreateRenderPass2;
    PFN_vkCmdBeginRenderPass2 CmdBeginRenderPass2;
    PFN_vkCmdNextSubpass2 CmdNextSubpass2;
    PFN_vkCmdEndRenderPass2 CmdEndRenderPass2;
    PFN_vkResetQueryPool ResetQueryPool;
    PFN_vkGetSemaphoreCounterValue GetSemaphoreCounterValue;
    PFN_vkWaitSemaphores WaitSemaphores;
    PFN_vkSignalSemaphore SignalSemaphore;
    PFN_vkGetBufferDeviceAddress GetBufferDeviceAddress;
    PFN_vkGetBufferOpaqueCaptureAddress GetBufferOpaqueCaptureAddress;
    PFN_vkGetDeviceMemoryOpaqueCaptureAddress GetDeviceMemoryOpaqueCaptureAddress;
    PFN_vkCreatePrivateDataSlot CreatePrivateDataSlot;
    PFN_vkDestroyPrivateDataSlot DestroyPrivateDataSlot;
    PFN_vkSetPrivateData SetPrivateData;
    PFN_vkGetPrivateData GetPrivateData;
    PFN_vkCmdSetEvent2 CmdSetEvent2;
    PFN_vkCmdResetEvent2 CmdResetEvent2;
    PFN_vkCmdWaitEvents2 CmdWaitEvents2;
    PFN_vkCmdPipelineBarrier2 CmdPipelineBarrier2;
    PFN_vkCmdWriteTimestamp2 CmdWriteTimestamp2;
    PFN_vkQueueSubmit2 QueueSubmit2;
    PFN_vkCmdCopyBuffer2 CmdCopyBuffer2;
    PFN_vkCmdCopyImage2 CmdCopyImage2;
    PFN_vkCmdCopyBufferToImage2 CmdCopyBufferToImage2;
    PFN_vkCmdCopyImageToBuffer2 CmdCopyImageToBuffer2;
    PFN_vkCmdBlitImage2 CmdBlitImage2;
    PFN_vkCmdResolveImage2 CmdResolveImage2;
    PFN_vkCmdBeginRendering CmdBeginRendering;
    PFN_vkCmdEndRendering CmdEndRendering;
    PFN_vkCmdSetCullMode CmdSetCullMode;
    PFN_vkCmdSetFrontFace CmdSetFrontFace;
    PFN_vkCmdSetPrimitiveTopology CmdSetPrimitiveTopology;
    PFN_vkCmdSetViewportWithCount CmdSetViewportWithCount;
    PFN_vkCmdSetScissorWithCount CmdSetScissorWithCount;
    PFN_vkCmdBindVertexBuffers2 CmdBindVertexBuffers2;
    PFN_vkCmdSetDepthTestEnable CmdSetDepthTestEnable;
    PFN_vkCmdSetDepthWriteEnable CmdSetDepthWriteEnable;
    PFN_vkCmdSetDepthCompareOp CmdSetDepthCompareOp;
    PFN_vkCmdSetDepthBoundsTestEnable CmdSetDepthBoundsTestEnable;
    PFN_vkCmdSetStencilTestEnable CmdSetStencilTestEnable;
    PFN_vkCmdSetStencilOp CmdSetStencilOp;
    PFN_vkCmdSetRasterizerDiscardEnable CmdSetRasterizerDiscardEnable;
    PFN_vkCmdSetDepthBiasEnable CmdSetDepthBiasEnable;
    PFN_vkCmdSetPrimitiveRestartEnable CmdSetPrimitiveRestartEnable;
    PFN_vkGetDeviceBufferMemoryRequirements GetDeviceBufferMemoryRequirements;
    PFN_vkGetDeviceImageMemoryRequirements GetDeviceImageMemoryRequirements;
    PFN_vkGetDeviceImageSparseMemoryRequirements GetDeviceImageSparseMemoryRequirements;
    PFN_vkGetCommandPoolMemoryConsumption GetCommandPoolMemoryConsumption;
    PFN_vkGetFaultData GetFaultData;
    PFN_vkCreateSwapchainKHR CreateSwapchainKHR;
    PFN_vkDestroySwapchainKHR DestroySwapchainKHR;
    PFN_vkGetSwapchainImagesKHR GetSwapchainImagesKHR;
    PFN_vkAcquireNextImageKHR AcquireNextImageKHR;
    PFN_vkQueuePresentKHR QueuePresentKHR;
    PFN_vkGetDeviceGroupPresentCapabilitiesKHR GetDeviceGroupPresentCapabilitiesKHR;
    PFN_vkGetDeviceGroupSurfacePresentModesKHR GetDeviceGroupSurfacePresentModesKHR;
    PFN_vkAcquireNextImage2KHR AcquireNextImage2KHR;
    PFN_vkCreateSharedSwapchainsKHR CreateSharedSwapchainsKHR;
    PFN_vkCreateVideoSessionKHR CreateVideoSessionKHR;
    PFN_vkDestroyVideoSessionKHR DestroyVideoSessionKHR;
    PFN_vkGetVideoSessionMemoryRequirementsKHR GetVideoSessionMemoryRequirementsKHR;
    PFN_vkBindVideoSessionMemoryKHR BindVideoSessionMemoryKHR;
    PFN_vkCreateVideoSessionParametersKHR CreateVideoSessionParametersKHR;
    PFN_vkUpdateVideoSessionParametersKHR UpdateVideoSessionParametersKHR;
    PFN_vkDestroyVideoSessionParametersKHR DestroyVideoSessionParametersKHR;
    PFN_vkCmdBeginVideoCodingKHR CmdBeginVideoCodingKHR;
    PFN_vkCmdEndVideoCodingKHR CmdEndVideoCodingKHR;
    PFN_vkCmdControlVideoCodingKHR CmdControlVideoCodingKHR;
    PFN_vkCmdDecodeVideoKHR CmdDecodeVideoKHR;
    PFN_vkCmdBeginRenderingKHR CmdBeginRenderingKHR;
    PFN_vkCmdEndRenderingKHR CmdEndRenderingKHR;
    PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR GetDeviceGroupPeerMemoryFeaturesKHR;
    PFN_vkCmdSetDeviceMaskKHR CmdSetDeviceMaskKHR;
    PFN_vkCmdDispatchBaseKHR CmdDispatchBaseKHR;
    PFN_vkTrimCommandPoolKHR TrimCommandPoolKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleKHR GetMemoryWin32HandleKHR;
    PFN_vkGetMemoryWin32HandlePropertiesKHR GetMemoryWin32HandlePropertiesKHR;
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryFdKHR GetMemoryFdKHR;
    PFN_vkGetMemoryFdPropertiesKHR GetMemoryFdPropertiesKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportSemaphoreWin32HandleKHR ImportSemaphoreWin32HandleKHR;
    PFN_vkGetSemaphoreWin32HandleKHR GetSemaphoreWin32HandleKHR;
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportSemaphoreFdKHR ImportSemaphoreFdKHR;
    PFN_vkGetSemaphoreFdKHR GetSemaphoreFdKHR;
    PFN_vkCmdPushDescriptorSetKHR CmdPushDescriptorSetKHR;
    PFN_vkCmdPushDescriptorSetWithTemplateKHR CmdPushDescriptorSetWithTemplateKHR;
    PFN_vkCreateDescriptorUpdateTemplateKHR CreateDescriptorUpdateTemplateKHR;
    PFN_vkDestroyDescriptorUpdateTemplateKHR DestroyDescriptorUpdateTemplateKHR;
    PFN_vkUpdateDescriptorSetWithTemplateKHR UpdateDescriptorSetWithTemplateKHR;
    PFN_vkCreateRenderPass2KHR CreateRenderPass2KHR;
    PFN_vkCmdBeginRenderPass2KHR CmdBeginRenderPass2KHR;
    PFN_vkCmdNextSubpass2KHR CmdNextSubpass2KHR;
    PFN_vkCmdEndRenderPass2KHR CmdEndRenderPass2KHR;
    PFN_vkGetSwapchainStatusKHR GetSwapchainStatusKHR;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportFenceWin32HandleKHR ImportFenceWin32HandleKHR;
    PFN_vkGetFenceWin32HandleKHR GetFenceWin32HandleKHR;
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportFenceFdKHR ImportFenceFdKHR;
    PFN_vkGetFenceFdKHR GetFenceFdKHR;
    PFN_vkAcquireProfilingLockKHR AcquireProfilingLockKHR;
    PFN_vkReleaseProfilingLockKHR ReleaseProfilingLockKHR;
    PFN_vkGetImageMemoryRequirements2KHR GetImageMemoryRequirements2KHR;
    PFN_vkGetBufferMemoryRequirements2KHR GetBufferMemoryRequirements2KHR;
    PFN_vkGetImageSparseMemoryRequirements2KHR GetImageSparseMemoryRequirements2KHR;
    PFN_vkCreateSamplerYcbcrConversionKHR CreateSamplerYcbcrConversionKHR;
    PFN_vkDestroySamplerYcbcrConversionKHR DestroySamplerYcbcrConversionKHR;
    PFN_vkBindBufferMemory2KHR BindBufferMemory2KHR;
    PFN_vkBindImageMemory2KHR BindImageMemory2KHR;
    PFN_vkGetDescriptorSetLayoutSupportKHR GetDescriptorSetLayoutSupportKHR;
    PFN_vkCmdDrawIndirectCountKHR CmdDrawIndirectCountKHR;
    PFN_vkCmdDrawIndexedIndirectCountKHR CmdDrawIndexedIndirectCountKHR;
    PFN_vkGetSemaphoreCounterValueKHR GetSemaphoreCounterValueKHR;
    PFN_vkWaitSemaphoresKHR WaitSemaphoresKHR;
    PFN_vkSignalSemaphoreKHR SignalSemaphoreKHR;
    PFN_vkCmdSetFragmentShadingRateKHR CmdSetFragmentShadingRateKHR;
    PFN_vkWaitForPresentKHR WaitForPresentKHR;
    PFN_vkGetBufferDeviceAddressKHR GetBufferDeviceAddressKHR;
    PFN_vkGetBufferOpaqueCaptureAddressKHR GetBufferOpaqueCaptureAddressKHR;
    PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR GetDeviceMemoryOpaqueCaptureAddressKHR;
    PFN_vkCreateDeferredOperationKHR CreateDeferredOperationKHR;
    PFN_vkDestroyDeferredOperationKHR DestroyDeferredOperationKHR;
    PFN_vkGetDeferredOperationMaxConcurrencyKHR GetDeferredOperationMaxConcurrencyKHR;
    PFN_vkGetDeferredOperationResultKHR GetDeferredOperationResultKHR;
    PFN_vkDeferredOperationJoinKHR DeferredOperationJoinKHR;
    PFN_vkGetPipelineExecutablePropertiesKHR GetPipelineExecutablePropertiesKHR;
    PFN_vkGetPipelineExecutableStatisticsKHR GetPipelineExecutableStatisticsKHR;
    PFN_vkGetPipelineExecutableInternalRepresentationsKHR GetPipelineExecutableInternalRepresentationsKHR;
    PFN_vkMapMemory2KHR MapMemory2KHR;
    PFN_vkUnmapMemory2KHR UnmapMemory2KHR;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetEncodedVideoSessionParametersKHR GetEncodedVideoSessionParametersKHR;
    PFN_vkCmdEncodeVideoKHR CmdEncodeVideoKHR;
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdRefreshObjectsKHR CmdRefreshObjectsKHR;
    PFN_vkCmdSetEvent2KHR CmdSetEvent2KHR;
    PFN_vkCmdResetEvent2KHR CmdResetEvent2KHR;
    PFN_vkCmdWaitEvents2KHR CmdWaitEvents2KHR;
    PFN_vkCmdPipelineBarrier2KHR CmdPipelineBarrier2KHR;
    PFN_vkCmdWriteTimestamp2KHR CmdWriteTimestamp2KHR;
    PFN_vkQueueSubmit2KHR QueueSubmit2KHR;
    PFN_vkCmdWriteBufferMarker2AMD CmdWriteBufferMarker2AMD;
    PFN_vkGetQueueCheckpointData2NV GetQueueCheckpointData2NV;
    PFN_vkCmdCopyBuffer2KHR CmdCopyBuffer2KHR;
    PFN_vkCmdCopyImage2KHR CmdCopyImage2KHR;
    PFN_vkCmdCopyBufferToImage2KHR CmdCopyBufferToImage2KHR;
    PFN_vkCmdCopyImageToBuffer2KHR CmdCopyImageToBuffer2KHR;
    PFN_vkCmdBlitImage2KHR CmdBlitImage2KHR;
    PFN_vkCmdResolveImage2KHR CmdResolveImage2KHR;
    PFN_vkCmdTraceRaysIndirect2KHR CmdTraceRaysIndirect2KHR;
    PFN_vkGetDeviceBufferMemoryRequirementsKHR GetDeviceBufferMemoryRequirementsKHR;
    PFN_vkGetDeviceImageMemoryRequirementsKHR GetDeviceImageMemoryRequirementsKHR;
    PFN_vkGetDeviceImageSparseMemoryRequirementsKHR GetDeviceImageSparseMemoryRequirementsKHR;
    PFN_vkCmdBindIndexBuffer2KHR CmdBindIndexBuffer2KHR;
    PFN_vkGetRenderingAreaGranularityKHR GetRenderingAreaGranularityKHR;
    PFN_vkGetDeviceImageSubresourceLayoutKHR GetDeviceImageSubresourceLayoutKHR;
    PFN_vkGetImageSubresourceLayout2KHR GetImageSubresourceLayout2KHR;
    PFN_vkDebugMarkerSetObjectTagEXT DebugMarkerSetObjectTagEXT;
    PFN_vkDebugMarkerSetObjectNameEXT DebugMarkerSetObjectNameEXT;
    PFN_vkCmdDebugMarkerBeginEXT CmdDebugMarkerBeginEXT;
    PFN_vkCmdDebugMarkerEndEXT CmdDebugMarkerEndEXT;
    PFN_vkCmdDebugMarkerInsertEXT CmdDebugMarkerInsertEXT;
    PFN_vkCmdBindTransformFeedbackBuffersEXT CmdBindTransformFeedbackBuffersEXT;
    PFN_vkCmdBeginTransformFeedbackEXT CmdBeginTransformFeedbackEXT;
    PFN_vkCmdEndTransformFeedbackEXT CmdEndTransformFeedbackEXT;
    PFN_vkCmdBeginQueryIndexedEXT CmdBeginQueryIndexedEXT;
    PFN_vkCmdEndQueryIndexedEXT CmdEndQueryIndexedEXT;
    PFN_vkCmdDrawIndirectByteCountEXT CmdDrawIndirectByteCountEXT;
    PFN_vkCreateCuModuleNVX CreateCuModuleNVX;
    PFN_vkCreateCuFunctionNVX CreateCuFunctionNVX;
    PFN_vkDestroyCuModuleNVX DestroyCuModuleNVX;
    PFN_vkDestroyCuFunctionNVX DestroyCuFunctionNVX;
    PFN_vkCmdCuLaunchKernelNVX CmdCuLaunchKernelNVX;
    PFN_vkGetImageViewHandleNVX GetImageViewHandleNVX;
    PFN_vkGetImageViewAddressNVX GetImageViewAddressNVX;
    PFN_vkCmdDrawIndirectCountAMD CmdDrawIndirectCountAMD;
    PFN_vkCmdDrawIndexedIndirectCountAMD CmdDrawIndexedIndirectCountAMD;
    PFN_vkGetShaderInfoAMD GetShaderInfoAMD;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleNV GetMemoryWin32HandleNV;
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCmdBeginConditionalRenderingEXT CmdBeginConditionalRenderingEXT;
    PFN_vkCmdEndConditionalRenderingEXT CmdEndConditionalRenderingEXT;
    PFN_vkCmdSetViewportWScalingNV CmdSetViewportWScalingNV;
    PFN_vkDisplayPowerControlEXT DisplayPowerControlEXT;
    PFN_vkRegisterDeviceEventEXT RegisterDeviceEventEXT;
    PFN_vkRegisterDisplayEventEXT RegisterDisplayEventEXT;
    PFN_vkGetSwapchainCounterEXT GetSwapchainCounterEXT;
    PFN_vkGetRefreshCycleDurationGOOGLE GetRefreshCycleDurationGOOGLE;
    PFN_vkGetPastPresentationTimingGOOGLE GetPastPresentationTimingGOOGLE;
    PFN_vkCmdSetDiscardRectangleEXT CmdSetDiscardRectangleEXT;
    PFN_vkCmdSetDiscardRectangleEnableEXT CmdSetDiscardRectangleEnableEXT;
    PFN_vkCmdSetDiscardRectangleModeEXT CmdSetDiscardRectangleModeEXT;
    PFN_vkSetHdrMetadataEXT SetHdrMetadataEXT;
    PFN_vkSetDebugUtilsObjectNameEXT SetDebugUtilsObjectNameEXT;
    PFN_vkSetDebugUtilsObjectTagEXT SetDebugUtilsObjectTagEXT;
    PFN_vkQueueBeginDebugUtilsLabelEXT QueueBeginDebugUtilsLabelEXT;
    PFN_vkQueueEndDebugUtilsLabelEXT QueueEndDebugUtilsLabelEXT;
    PFN_vkQueueInsertDebugUtilsLabelEXT QueueInsertDebugUtilsLabelEXT;
    PFN_vkCmdBeginDebugUtilsLabelEXT CmdBeginDebugUtilsLabelEXT;
    PFN_vkCmdEndDebugUtilsLabelEXT CmdEndDebugUtilsLabelEXT;
    PFN_vkCmdInsertDebugUtilsLabelEXT CmdInsertDebugUtilsLabelEXT;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkGetAndroidHardwareBufferPropertiesANDROID GetAndroidHardwareBufferPropertiesANDROID;
    PFN_vkGetMemoryAndroidHardwareBufferANDROID GetMemoryAndroidHardwareBufferANDROID;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateExecutionGraphPipelinesAMDX CreateExecutionGraphPipelinesAMDX;
    PFN_vkGetExecutionGraphPipelineScratchSizeAMDX GetExecutionGraphPipelineScratchSizeAMDX;
    PFN_vkGetExecutionGraphPipelineNodeIndexAMDX GetExecutionGraphPipelineNodeIndexAMDX;
    PFN_vkCmdInitializeGraphScratchMemoryAMDX CmdInitializeGraphScratchMemoryAMDX;
    PFN_vkCmdDispatchGraphAMDX CmdDispatchGraphAMDX;
    PFN_vkCmdDispatchGraphIndirectAMDX CmdDispatchGraphIndirectAMDX;
    PFN_vkCmdDispatchGraphIndirectCountAMDX CmdDispatchGraphIndirectCountAMDX;
#endif  // VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdSetSampleLocationsEXT CmdSetSampleLocationsEXT;
    PFN_vkGetImageDrmFormatModifierPropertiesEXT GetImageDrmFormatModifierPropertiesEXT;
    PFN_vkCreateValidationCacheEXT CreateValidationCacheEXT;
    PFN_vkDestroyValidationCacheEXT DestroyValidationCacheEXT;
    PFN_vkMergeValidationCachesEXT MergeValidationCachesEXT;
    PFN_vkGetValidationCacheDataEXT GetValidationCacheDataEXT;
    PFN_vkCmdBindShadingRateImageNV CmdBindShadingRateImageNV;
    PFN_vkCmdSetViewportShadingRatePaletteNV CmdSetViewportShadingRatePaletteNV;
    PFN_vkCmdSetCoarseSampleOrderNV CmdSetCoarseSampleOrderNV;
    PFN_vkCreateAccelerationStructureNV CreateAccelerationStructureNV;
    PFN_vkDestroyAccelerationStructureNV DestroyAccelerationStructureNV;
    PFN_vkGetAccelerationStructureMemoryRequirementsNV GetAccelerationStructureMemoryRequirementsNV;
    PFN_vkBindAccelerationStructureMemoryNV BindAccelerationStructureMemoryNV;
    PFN_vkCmdBuildAccelerationStructureNV CmdBuildAccelerationStructureNV;
    PFN_vkCmdCopyAccelerationStructureNV CmdCopyAccelerationStructureNV;
    PFN_vkCmdTraceRaysNV CmdTraceRaysNV;
    PFN_vkCreateRayTracingPipelinesNV CreateRayTracingPipelinesNV;
    PFN_vkGetRayTracingShaderGroupHandlesKHR GetRayTracingShaderGroupHandlesKHR;
    PFN_vkGetRayTracingShaderGroupHandlesNV GetRayTracingShaderGroupHandlesNV;
    PFN_vkGetAccelerationStructureHandleNV GetAccelerationStructureHandleNV;
    PFN_vkCmdWriteAccelerationStructuresPropertiesNV CmdWriteAccelerationStructuresPropertiesNV;
    PFN_vkCompileDeferredNV CompileDeferredNV;
    PFN_vkGetMemoryHostPointerPropertiesEXT GetMemoryHostPointerPropertiesEXT;
    PFN_vkCmdWriteBufferMarkerAMD CmdWriteBufferMarkerAMD;
    PFN_vkGetCalibratedTimestampsEXT GetCalibratedTimestampsEXT;
    PFN_vkCmdDrawMeshTasksNV CmdDrawMeshTasksNV;
    PFN_vkCmdDrawMeshTasksIndirectNV CmdDrawMeshTasksIndirectNV;
    PFN_vkCmdDrawMeshTasksIndirectCountNV CmdDrawMeshTasksIndirectCountNV;
    PFN_vkCmdSetExclusiveScissorEnableNV CmdSetExclusiveScissorEnableNV;
    PFN_vkCmdSetExclusiveScissorNV CmdSetExclusiveScissorNV;
    PFN_vkCmdSetCheckpointNV CmdSetCheckpointNV;
    PFN_vkGetQueueCheckpointDataNV GetQueueCheckpointDataNV;
    PFN_vkInitializePerformanceApiINTEL InitializePerformanceApiINTEL;
    PFN_vkUninitializePerformanceApiINTEL UninitializePerformanceApiINTEL;
    PFN_vkCmdSetPerformanceMarkerINTEL CmdSetPerformanceMarkerINTEL;
    PFN_vkCmdSetPerformanceStreamMarkerINTEL CmdSetPerformanceStreamMarkerINTEL;
    PFN_vkCmdSetPerformanceOverrideINTEL CmdSetPerformanceOverrideINTEL;
    PFN_vkAcquirePerformanceConfigurationINTEL AcquirePerformanceConfigurationINTEL;
    PFN_vkReleasePerformanceConfigurationINTEL ReleasePerformanceConfigurationINTEL;
    PFN_vkQueueSetPerformanceConfigurationINTEL QueueSetPerformanceConfigurationINTEL;
    PFN_vkGetPerformanceParameterINTEL GetPerformanceParameterINTEL;
    PFN_vkSetLocalDimmingAMD SetLocalDimmingAMD;
    PFN_vkGetBufferDeviceAddressEXT GetBufferDeviceAddressEXT;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireFullScreenExclusiveModeEXT AcquireFullScreenExclusiveModeEXT;
    PFN_vkReleaseFullScreenExclusiveModeEXT ReleaseFullScreenExclusiveModeEXT;
    PFN_vkGetDeviceGroupSurfacePresentModes2EXT GetDeviceGroupSurfacePresentModes2EXT;
#endif  // VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCmdSetLineStippleEXT CmdSetLineStippleEXT;
    PFN_vkResetQueryPoolEXT ResetQueryPoolEXT;
    PFN_vkCmdSetCullModeEXT CmdSetCullModeEXT;
    PFN_vkCmdSetFrontFaceEXT CmdSetFrontFaceEXT;
    PFN_vkCmdSetPrimitiveTopologyEXT CmdSetPrimitiveTopologyEXT;
    PFN_vkCmdSetViewportWithCountEXT CmdSetViewportWithCountEXT;
    PFN_vkCmdSetScissorWithCountEXT CmdSetScissorWithCountEXT;
    PFN_vkCmdBindVertexBuffers2EXT CmdBindVertexBuffers2EXT;
    PFN_vkCmdSetDepthTestEnableEXT CmdSetDepthTestEnableEXT;
    PFN_vkCmdSetDepthWriteEnableEXT CmdSetDepthWriteEnableEXT;
    PFN_vkCmdSetDepthCompareOpEXT CmdSetDepthCompareOpEXT;
    PFN_vkCmdSetDepthBoundsTestEnableEXT CmdSetDepthBoundsTestEnableEXT;
    PFN_vkCmdSetStencilTestEnableEXT CmdSetStencilTestEnableEXT;
    PFN_vkCmdSetStencilOpEXT CmdSetStencilOpEXT;
    PFN_vkCopyMemoryToImageEXT CopyMemoryToImageEXT;
    PFN_vkCopyImageToMemoryEXT CopyImageToMemoryEXT;
    PFN_vkCopyImageToImageEXT CopyImageToImageEXT;
    PFN_vkTransitionImageLayoutEXT TransitionImageLayoutEXT;
    PFN_vkGetImageSubresourceLayout2EXT GetImageSubresourceLayout2EXT;
    PFN_vkReleaseSwapchainImagesEXT ReleaseSwapchainImagesEXT;
    PFN_vkGetGeneratedCommandsMemoryRequirementsNV GetGeneratedCommandsMemoryRequirementsNV;
    PFN_vkCmdPreprocessGeneratedCommandsNV CmdPreprocessGeneratedCommandsNV;
    PFN_vkCmdExecuteGeneratedCommandsNV CmdExecuteGeneratedCommandsNV;
    PFN_vkCmdBindPipelineShaderGroupNV CmdBindPipelineShaderGroupNV;
    PFN_vkCreateIndirectCommandsLayoutNV CreateIndirectCommandsLayoutNV;
    PFN_vkDestroyIndirectCommandsLayoutNV DestroyIndirectCommandsLayoutNV;
    PFN_vkCmdSetDepthBias2EXT CmdSetDepthBias2EXT;
    PFN_vkCreatePrivateDataSlotEXT CreatePrivateDataSlotEXT;
    PFN_vkDestroyPrivateDataSlotEXT DestroyPrivateDataSlotEXT;
    PFN_vkSetPrivateDataEXT SetPrivateDataEXT;
    PFN_vkGetPrivateDataEXT GetPrivateDataEXT;
    PFN_vkCreateCudaModuleNV CreateCudaModuleNV;
    PFN_vkGetCudaModuleCacheNV GetCudaModuleCacheNV;
    PFN_vkCreateCudaFunctionNV CreateCudaFunctionNV;
    PFN_vkDestroyCudaModuleNV DestroyCudaModuleNV;
    PFN_vkDestroyCudaFunctionNV DestroyCudaFunctionNV;
    PFN_vkCmdCudaLaunchKernelNV CmdCudaLaunchKernelNV;
#ifdef VK_USE_PLATFORM_METAL_EXT
    PFN_vkExportMetalObjectsEXT ExportMetalObjectsEXT;
#endif  // VK_USE_PLATFORM_METAL_EXT
    PFN_vkGetDescriptorSetLayoutSizeEXT GetDescriptorSetLayoutSizeEXT;
    PFN_vkGetDescriptorSetLayoutBindingOffsetEXT GetDescriptorSetLayoutBindingOffsetEXT;
    PFN_vkGetDescriptorEXT GetDescriptorEXT;
    PFN_vkCmdBindDescriptorBuffersEXT CmdBindDescriptorBuffersEXT;
    PFN_vkCmdSetDescriptorBufferOffsetsEXT CmdSetDescriptorBufferOffsetsEXT;
    PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT CmdBindDescriptorBufferEmbeddedSamplersEXT;
    PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT GetBufferOpaqueCaptureDescriptorDataEXT;
    PFN_vkGetImageOpaqueCaptureDescriptorDataEXT GetImageOpaqueCaptureDescriptorDataEXT;
    PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT GetImageViewOpaqueCaptureDescriptorDataEXT;
    PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT GetSamplerOpaqueCaptureDescriptorDataEXT;
    PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT GetAccelerationStructureOpaqueCaptureDescriptorDataEXT;
    PFN_vkCmdSetFragmentShadingRateEnumNV CmdSetFragmentShadingRateEnumNV;
    PFN_vkGetDeviceFaultInfoEXT GetDeviceFaultInfoEXT;
    PFN_vkCmdSetVertexInputEXT CmdSetVertexInputEXT;
#ifdef VK_USE_PLATFORM_FUCHSIA
    PFN_vkGetMemoryZirconHandleFUCHSIA GetMemoryZirconHandleFUCHSIA;
    PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA GetMemoryZirconHandlePropertiesFUCHSIA;
    PFN_vkImportSemaphoreZirconHandleFUCHSIA ImportSemaphoreZirconHandleFUCHSIA;
    PFN_vkGetSemaphoreZirconHandleFUCHSIA GetSemaphoreZirconHandleFUCHSIA;
    PFN_vkCreateBufferCollectionFUCHSIA CreateBufferCollectionFUCHSIA;
    PFN_vkSetBufferCollectionImageConstraintsFUCHSIA SetBufferCollectionImageConstraintsFUCHSIA;
    PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA SetBufferCollectionBufferConstraintsFUCHSIA;
    PFN_vkDestroyBufferCollectionFUCHSIA DestroyBufferCollectionFUCHSIA;
    PFN_vkGetBufferCollectionPropertiesFUCHSIA GetBufferCollectionPropertiesFUCHSIA;
#endif  // VK_USE_PLATFORM_FUCHSIA
    PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
    PFN_vkCmdSubpassShadingHUAWEI CmdSubpassShadingHUAWEI;
    PFN_vkCmdBindInvocationMaskHUAWEI CmdBindInvocationMaskHUAWEI;
    PFN_vkGetMemoryRemoteAddressNV GetMemoryRemoteAddressNV;
    PFN_vkGetPipelinePropertiesEXT GetPipelinePropertiesEXT;
#ifdef VK_USE_PLATFORM_SCI
    PFN_vkGetFenceSciSyncFenceNV GetFenceSciSyncFenceNV;
    PFN_vkGetFenceSciSyncObjNV GetFenceSciSyncObjNV;
    PFN_vkImportFenceSciSyncFenceNV ImportFenceSciSyncFenceNV;
    PFN_vkImportFenceSciSyncObjNV ImportFenceSciSyncObjNV;
    PFN_vkGetSemaphoreSciSyncObjNV GetSemaphoreSciSyncObjNV;
    PFN_vkImportSemaphoreSciSyncObjNV ImportSemaphoreSciSyncObjNV;
    PFN_vkGetMemorySciBufNV GetMemorySciBufNV;
#endif  // VK_USE_PLATFORM_SCI
    PFN_vkCmdSetPatchControlPointsEXT CmdSetPatchControlPointsEXT;
    PFN_vkCmdSetRasterizerDiscardEnableEXT CmdSetRasterizerDiscardEnableEXT;
    PFN_vkCmdSetDepthBiasEnableEXT CmdSetDepthBiasEnableEXT;
    PFN_vkCmdSetLogicOpEXT CmdSetLogicOpEXT;
    PFN_vkCmdSetPrimitiveRestartEnableEXT CmdSetPrimitiveRestartEnableEXT;
    PFN_vkCmdSetColorWriteEnableEXT CmdSetColorWriteEnableEXT;
    PFN_vkCmdDrawMultiEXT CmdDrawMultiEXT;
    PFN_vkCmdDrawMultiIndexedEXT CmdDrawMultiIndexedEXT;
    PFN_vkCreateMicromapEXT CreateMicromapEXT;
    PFN_vkDestroyMicromapEXT DestroyMicromapEXT;
    PFN_vkCmdBuildMicromapsEXT CmdBuildMicromapsEXT;
    PFN_vkBuildMicromapsEXT BuildMicromapsEXT;
    PFN_vkCopyMicromapEXT CopyMicromapEXT;
    PFN_vkCopyMicromapToMemoryEXT CopyMicromapToMemoryEXT;
    PFN_vkCopyMemoryToMicromapEXT CopyMemoryToMicromapEXT;
    PFN_vkWriteMicromapsPropertiesEXT WriteMicromapsPropertiesEXT;
    PFN_vkCmdCopyMicromapEXT CmdCopyMicromapEXT;
    PFN_vkCmdCopyMicromapToMemoryEXT CmdCopyMicromapToMemoryEXT;
    PFN_vkCmdCopyMemoryToMicromapEXT CmdCopyMemoryToMicromapEXT;
    PFN_vkCmdWriteMicromapsPropertiesEXT CmdWriteMicromapsPropertiesEXT;
    PFN_vkGetDeviceMicromapCompatibilityEXT GetDeviceMicromapCompatibilityEXT;
    PFN_vkGetMicromapBuildSizesEXT GetMicromapBuildSizesEXT;
    PFN_vkCmdDrawClusterHUAWEI CmdDrawClusterHUAWEI;
    PFN_vkCmdDrawClusterIndirectHUAWEI CmdDrawClusterIndirectHUAWEI;
    PFN_vkSetDeviceMemoryPriorityEXT SetDeviceMemoryPriorityEXT;
    PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE GetDescriptorSetLayoutHostMappingInfoVALVE;
    PFN_vkGetDescriptorSetHostMappingVALVE GetDescriptorSetHostMappingVALVE;
    PFN_vkCmdCopyMemoryIndirectNV CmdCopyMemoryIndirectNV;
    PFN_vkCmdCopyMemoryToImageIndirectNV CmdCopyMemoryToImageIndirectNV;
    PFN_vkCmdDecompressMemoryNV CmdDecompressMemoryNV;
    PFN_vkCmdDecompressMemoryIndirectCountNV CmdDecompressMemoryIndirectCountNV;
    PFN_vkGetPipelineIndirectMemoryRequirementsNV GetPipelineIndirectMemoryRequirementsNV;
    PFN_vkCmdUpdatePipelineIndirectBufferNV CmdUpdatePipelineIndirectBufferNV;
    PFN_vkGetPipelineIndirectDeviceAddressNV GetPipelineIndirectDeviceAddressNV;
    PFN_vkCmdSetTessellationDomainOriginEXT CmdSetTessellationDomainOriginEXT;
    PFN_vkCmdSetDepthClampEnableEXT CmdSetDepthClampEnableEXT;
    PFN_vkCmdSetPolygonModeEXT CmdSetPolygonModeEXT;
    PFN_vkCmdSetRasterizationSamplesEXT CmdSetRasterizationSamplesEXT;
    PFN_vkCmdSetSampleMaskEXT CmdSetSampleMaskEXT;
    PFN_vkCmdSetAlphaToCoverageEnableEXT CmdSetAlphaToCoverageEnableEXT;
    PFN_vkCmdSetAlphaToOneEnableEXT CmdSetAlphaToOneEnableEXT;
    PFN_vkCmdSetLogicOpEnableEXT CmdSetLogicOpEnableEXT;
    PFN_vkCmdSetColorBlendEnableEXT CmdSetColorBlendEnableEXT;
    PFN_vkCmdSetColorBlendEquationEXT CmdSetColorBlendEquationEXT;
    PFN_vkCmdSetColorWriteMaskEXT CmdSetColorWriteMaskEXT;
    PFN_vkCmdSetRasterizationStreamEXT CmdSetRasterizationStreamEXT;
    PFN_vkCmdSetConservativeRasterizationModeEXT CmdSetConservativeRasterizationModeEXT;
    PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT CmdSetExtraPrimitiveOverestimationSizeEXT;
    PFN_vkCmdSetDepthClipEnableEXT CmdSetDepthClipEnableEXT;
    PFN_vkCmdSetSampleLocationsEnableEXT CmdSetSampleLocationsEnableEXT;
    PFN_vkCmdSetColorBlendAdvancedEXT CmdSetColorBlendAdvancedEXT;
    PFN_vkCmdSetProvokingVertexModeEXT CmdSetProvokingVertexModeEXT;
    PFN_vkCmdSetLineRasterizationModeEXT CmdSetLineRasterizationModeEXT;
    PFN_vkCmdSetLineStippleEnableEXT CmdSetLineStippleEnableEXT;
    PFN_vkCmdSetDepthClipNegativeOneToOneEXT CmdSetDepthClipNegativeOneToOneEXT;
    PFN_vkCmdSetViewportWScalingEnableNV CmdSetViewportWScalingEnableNV;
    PFN_vkCmdSetViewportSwizzleNV CmdSetViewportSwizzleNV;
    PFN_vkCmdSetCoverageToColorEnableNV CmdSetCoverageToColorEnableNV;
    PFN_vkCmdSetCoverageToColorLocationNV CmdSetCoverageToColorLocationNV;
    PFN_vkCmdSetCoverageModulationModeNV CmdSetCoverageModulationModeNV;
    PFN_vkCmdSetCoverageModulationTableEnableNV CmdSetCoverageModulationTableEnableNV;
    PFN_vkCmdSetCoverageModulationTableNV CmdSetCoverageModulationTableNV;
    PFN_vkCmdSetShadingRateImageEnableNV CmdSetShadingRateImageEnableNV;
    PFN_vkCmdSetRepresentativeFragmentTestEnableNV CmdSetRepresentativeFragmentTestEnableNV;
    PFN_vkCmdSetCoverageReductionModeNV CmdSetCoverageReductionModeNV;
    PFN_vkGetShaderModuleIdentifierEXT GetShaderModuleIdentifierEXT;
    PFN_vkGetShaderModuleCreateInfoIdentifierEXT GetShaderModuleCreateInfoIdentifierEXT;
    PFN_vkCreateOpticalFlowSessionNV CreateOpticalFlowSessionNV;
    PFN_vkDestroyOpticalFlowSessionNV DestroyOpticalFlowSessionNV;
    PFN_vkBindOpticalFlowSessionImageNV BindOpticalFlowSessionImageNV;
    PFN_vkCmdOpticalFlowExecuteNV CmdOpticalFlowExecuteNV;
    PFN_vkCreateShadersEXT CreateShadersEXT;
    PFN_vkDestroyShaderEXT DestroyShaderEXT;
    PFN_vkGetShaderBinaryDataEXT GetShaderBinaryDataEXT;
    PFN_vkCmdBindShadersEXT CmdBindShadersEXT;
    PFN_vkGetFramebufferTilePropertiesQCOM GetFramebufferTilePropertiesQCOM;
    PFN_vkGetDynamicRenderingTilePropertiesQCOM GetDynamicRenderingTilePropertiesQCOM;
#ifdef VK_USE_PLATFORM_SCI
    PFN_vkCreateSemaphoreSciSyncPoolNV CreateSemaphoreSciSyncPoolNV;
    PFN_vkDestroySemaphoreSciSyncPoolNV DestroySemaphoreSciSyncPoolNV;
#endif  // VK_USE_PLATFORM_SCI
    PFN_vkSetLatencySleepModeNV SetLatencySleepModeNV;
    PFN_vkLatencySleepNV LatencySleepNV;
    PFN_vkSetLatencyMarkerNV SetLatencyMarkerNV;
    PFN_vkGetLatencyTimingsNV GetLatencyTimingsNV;
    PFN_vkQueueNotifyOutOfBandNV QueueNotifyOutOfBandNV;
    PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT CmdSetAttachmentFeedbackLoopEnableEXT;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkGetScreenBufferPropertiesQNX GetScreenBufferPropertiesQNX;
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    PFN_vkCreateAccelerationStructureKHR CreateAccelerationStructureKHR;
    PFN_vkDestroyAccelerationStructureKHR DestroyAccelerationStructureKHR;
    PFN_vkCmdBuildAccelerationStructuresKHR CmdBuildAccelerationStructuresKHR;
    PFN_vkCmdBuildAccelerationStructuresIndirectKHR CmdBuildAccelerationStructuresIndirectKHR;
    PFN_vkBuildAccelerationStructuresKHR BuildAccelerationStructuresKHR;
    PFN_vkCopyAccelerationStructureKHR CopyAccelerationStructureKHR;
    PFN_vkCopyAccelerationStructureToMemoryKHR CopyAccelerationStructureToMemoryKHR;
    PFN_vkCopyMemoryToAccelerationStructureKHR CopyMemoryToAccelerationStructureKHR;
    PFN_vkWriteAccelerationStructuresPropertiesKHR WriteAccelerationStructuresPropertiesKHR;
    PFN_vkCmdCopyAccelerationStructureKHR CmdCopyAccelerationStructureKHR;
    PFN_vkCmdCopyAccelerationStructureToMemoryKHR CmdCopyAccelerationStructureToMemoryKHR;
    PFN_vkCmdCopyMemoryToAccelerationStructureKHR CmdCopyMemoryToAccelerationStructureKHR;
    PFN_vkGetAccelerationStructureDeviceAddressKHR GetAccelerationStructureDeviceAddressKHR;
    PFN_vkCmdWriteAccelerationStructuresPropertiesKHR CmdWriteAccelerationStructuresPropertiesKHR;
    PFN_vkGetDeviceAccelerationStructureCompatibilityKHR GetDeviceAccelerationStructureCompatibilityKHR;
    PFN_vkGetAccelerationStructureBuildSizesKHR GetAccelerationStructureBuildSizesKHR;
    PFN_vkCmdTraceRaysKHR CmdTraceRaysKHR;
    PFN_vkCreateRayTracingPipelinesKHR CreateRayTracingPipelinesKHR;
    PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR GetRayTracingCaptureReplayShaderGroupHandlesKHR;
    PFN_vkCmdTraceRaysIndirectKHR CmdTraceRaysIndirectKHR;
    PFN_vkGetRayTracingShaderGroupStackSizeKHR GetRayTracingShaderGroupStackSizeKHR;
    PFN_vkCmdSetRayTracingPipelineStackSizeKHR CmdSetRayTracingPipelineStackSizeKHR;
    PFN_vkCmdDrawMeshTasksEXT CmdDrawMeshTasksEXT;
    PFN_vkCmdDrawMeshTasksIndirectEXT CmdDrawMeshTasksIndirectEXT;
    PFN_vkCmdDrawMeshTasksIndirectCountEXT CmdDrawMeshTasksIndirectCountEXT;
} VkuDeviceDispatchTable;

static inline void vkuInitDeviceDispatchTable(VkDevice device, VkuDeviceDispatchTable *table, PFN_vkGetDeviceProcAddr gdpa) {
    memset(table, 0, sizeof(*table));
    // Device function pointers
    table->GetDeviceProcAddr = gdpa;
    table->DestroyDevice = (PFN_vkDestroyDevice)gdpa(device, "vkDestroyDevice");
    table->GetDeviceQueue = (PFN_vkGetDeviceQueue)gdpa(device, "vkGetDeviceQueue");
    table->QueueSubmit = (PFN_vkQueueSubmit)gdpa(device, "vkQueueSubmit");
    table->QueueWaitIdle = (PFN_vkQueueWaitIdle)gdpa(device, "vkQueueWaitIdle");
    table->DeviceWaitIdle = (PFN_vkDeviceWaitIdle)gdpa(device, "vkDeviceWaitIdle");
    table->AllocateMemory = (PFN_vkAllocateMemory)gdpa(device, "vkAllocateMemory");
    table->FreeMemory = (PFN_vkFreeMemory)gdpa(device, "vkFreeMemory");
    table->MapMemory = (PFN_vkMapMemory)gdpa(device, "vkMapMemory");
    table->UnmapMemory = (PFN_vkUnmapMemory)gdpa(device, "vkUnmapMemory");
    table->FlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)gdpa(device, "vkFlushMappedMemoryRanges");
    table->InvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)gdpa(device, "vkInvalidateMappedMemoryRanges");
    table->GetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)gdpa(device, "vkGetDeviceMemoryCommitment");
    table->BindBufferMemory = (PFN_vkBindBufferMemory)gdpa(device, "vkBindBufferMemory");
    table->BindImageMemory = (PFN_vkBindImageMemory)gdpa(device, "vkBindImageMemory");
    table->GetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)gdpa(device, "vkGetBufferMemoryRequirements");
    table->GetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)gdpa(device, "vkGetImageMemoryRequirements");
    table->GetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)gdpa(device, "vkGetImageSparseMemoryRequirements");
    table->QueueBindSparse = (PFN_vkQueueBindSparse)gdpa(device, "vkQueueBindSparse");
    table->CreateFence = (PFN_vkCreateFence)gdpa(device, "vkCreateFence");
    table->DestroyFence = (PFN_vkDestroyFence)gdpa(device, "vkDestroyFence");
    table->ResetFences = (PFN_vkResetFences)gdpa(device, "vkResetFences");
    table->GetFenceStatus = (PFN_vkGetFenceStatus)gdpa(device, "vkGetFenceStatus");
    table->WaitForFences = (PFN_vkWaitForFences)gdpa(device, "vkWaitForFences");
    table->CreateSemaphore = (PFN_vkCreateSemaphore)gdpa(device, "vkCreateSemaphore");
    table->DestroySemaphore = (PFN_vkDestroySemaphore)gdpa(device, "vkDestroySemaphore");
    table->CreateEvent = (PFN_vkCreateEvent)gdpa(device, "vkCreateEvent");
    table->DestroyEvent = (PFN_vkDestroyEvent)gdpa(device, "vkDestroyEvent");
    table->GetEventStatus = (PFN_vkGetEventStatus)gdpa(device, "vkGetEventStatus");
    table->SetEvent = (PFN_vkSetEvent)gdpa(device, "vkSetEvent");
    table->ResetEvent = (PFN_vkResetEvent)gdpa(device, "vkResetEvent");
    table->CreateQueryPool = (PFN_vkCreateQueryPool)gdpa(device, "vkCreateQueryPool");
    table->DestroyQueryPool = (PFN_vkDestroyQueryPool)gdpa(device, "vkDestroyQueryPool");
    table->GetQueryPoolResults = (PFN_vkGetQueryPoolResults)gdpa(device, "vkGetQueryPoolResults");
    table->CreateBuffer = (PFN_vkCreateBuffer)gdpa(device, "vkCreateBuffer");
    table->DestroyBuffer = (PFN_vkDestroyBuffer)gdpa(device, "vkDestroyBuffer");
    table->CreateBufferView = (PFN_vkCreateBufferView)gdpa(device, "vkCreateBufferView");
    table->DestroyBufferView = (PFN_vkDestroyBufferView)gdpa(device, "vkDestroyBufferView");
    table->CreateImage = (PFN_vkCreateImage)gdpa(device, "vkCreateImage");
    table->DestroyImage = (PFN_vkDestroyImage)gdpa(device, "vkDestroyImage");
    table->GetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)gdpa(device, "vkGetImageSubresourceLayout");
    table->CreateImageView = (PFN_vkCreateImageView)gdpa(device, "vkCreateImageView");
    table->DestroyImageView = (PFN_vkDestroyImageView)gdpa(device, "vkDestroyImageView");
    table->CreateShaderModule = (PFN_vkCreateShaderModule)gdpa(device, "vkCreateShaderModule");
    table->DestroyShaderModule = (PFN_vkDestroyShaderModule)gdpa(device, "vkDestroyShaderModule");
    table->CreatePipelineCache = (PFN_vkCreatePipelineCache)gdpa(device, "vkCreatePipelineCache");
    table->DestroyPipelineCache = (PFN_vkDestroyPipelineCache)gdpa(device, "vkDestroyPipelineCache");
    table->GetPipelineCacheData = (PFN_vkGetPipelineCacheData)gdpa(device, "vkGetPipelineCacheData");
    table->MergePipelineCaches = (PFN_vkMergePipelineCaches)gdpa(device, "vkMergePipelineCaches");
    table->CreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)gdpa(device, "vkCreateGraphicsPipelines");
    table->CreateComputePipelines = (PFN_vkCreateComputePipelines)gdpa(device, "vkCreateComputePipelines");
    table->DestroyPipeline = (PFN_vkDestroyPipeline)gdpa(device, "vkDestroyPipeline");
    table->CreatePipelineLayout = (PFN_vkCreatePipelineLayout)gdpa(device, "vkCreatePipelineLayout");
    table->DestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)gdpa(device, "vkDestroyPipelineLayout");
    table->CreateSampler = (PFN_vkCreateSampler)gdpa(device, "vkCreateSampler");
    table->DestroySampler = (PFN_vkDestroySampler)gdpa(device, "vkDestroySampler");
    table->CreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)gdpa(device, "vkCreateDescriptorSetLayout");
    table->DestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)gdpa(device, "vkDestroyDescriptorSetLayout");
    table->CreateDescriptorPool = (PFN_vkCreateDescriptorPool)gdpa(device, "vkCreateDescriptorPool");
    table->DestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)gdpa(device, "vkDestroyDescriptorPool");
    table->ResetDescriptorPool = (PFN_vkResetDescriptorPool)gdpa(device, "vkResetDescriptorPool");
    table->AllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)gdpa(device, "vkAllocateDescriptorSets");
    table->FreeDescriptorSets = (PFN_vkFreeDescriptorSets)gdpa(device, "vkFreeDescriptorSets");
    table->UpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)gdpa(device, "vkUpdateDescriptorSets");
    table->CreateFramebuffer = (PFN_vkCreateFramebuffer)gdpa(device, "vkCreateFramebuffer");
    table->DestroyFramebuffer = (PFN_vkDestroyFramebuffer)gdpa(device, "vkDestroyFramebuffer");
    table->CreateRenderPass = (PFN_vkCreateRenderPass)gdpa(device, "vkCreateRenderPass");
    table->DestroyRenderPass = (PFN_vkDestroyRenderPass)gdpa(device, "vkDestroyRenderPass");
    table->GetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)gdpa(device, "vkGetRenderAreaGranularity");
    table->CreateCommandPool = (PFN_vkCreateCommandPool)gdpa(device, "vkCreateCommandPool");
    table->DestroyCommandPool = (PFN_vkDestroyCommandPool)gdpa(device, "vkDestroyCommandPool");
    table->ResetCommandPool = (PFN_vkResetCommandPool)gdpa(device, "vkResetCommandPool");
    table->AllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)gdpa(device, "vkAllocateCommandBuffers");
    table->FreeCommandBuffers = (PFN_vkFreeCommandBuffers)gdpa(device, "vkFreeCommandBuffers");
    table->BeginCommandBuffer = (PFN_vkBeginCommandBuffer)gdpa(device, "vkBeginCommandBuffer");
    table->EndCommandBuffer = (PFN_vkEndCommandBuffer)gdpa(device, "vkEndCommandBuffer");
    table->ResetCommandBuffer = (PFN_vkResetCommandBuffer)gdpa(device, "vkResetCommandBuffer");
    table->CmdBindPipeline = (PFN_vkCmdBindPipeline)gdpa(device, "vkCmdBindPipeline");
    table->CmdSetViewport = (PFN_vkCmdSetViewport)gdpa(device, "vkCmdSetViewport");
    table->CmdSetScissor = (PFN_vkCmdSetScissor)gdpa(device, "vkCmdSetScissor");
    table->CmdSetLineWidth = (PFN_vkCmdSetLineWidth)gdpa(device, "vkCmdSetLineWidth");
    table->CmdSetDepthBias = (PFN_vkCmdSetDepthBias)gdpa(device, "vkCmdSetDepthBias");
    table->CmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)gdpa(device, "vkCmdSetBlendConstants");
    table->CmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)gdpa(device, "vkCmdSetDepthBounds");
    table->CmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)gdpa(device, "vkCmdSetStencilCompareMask");
    table->CmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)gdpa(device, "vkCmdSetStencilWriteMask");
    table->CmdSetStencilReference = (PFN_vkCmdSetStencilReference)gdpa(device, "vkCmdSetStencilReference");
    table->CmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)gdpa(device, "vkCmdBindDescriptorSets");
    table->CmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)gdpa(device, "vkCmdBindIndexBuffer");
    table->CmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)gdpa(device, "vkCmdBindVertexBuffers");
    table->CmdDraw = (PFN_vkCmdDraw)gdpa(device, "vkCmdDraw");
    table->CmdDrawIndexed = (PFN_vkCmdDrawIndexed)gdpa(device, "vkCmdDrawIndexed");
    table->CmdDrawIndirect = (PFN_vkCmdDrawIndirect)gdpa(device, "vkCmdDrawIndirect");
    table->CmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)gdpa(device, "vkCmdDrawIndexedIndirect");
    table->CmdDispatch = (PFN_vkCmdDispatch)gdpa(device, "vkCmdDispatch");
    table->CmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)gdpa(device, "vkCmdDispatchIndirect");
    table->CmdCopyBuffer = (PFN_vkCmdCopyBuffer)gdpa(device, "vkCmdCopyBuffer");
    table->CmdCopyImage = (PFN_vkCmdCopyImage)gdpa(device, "vkCmdCopyImage");
    table->CmdBlitImage = (PFN_vkCmdBlitImage)gdpa(device, "vkCmdBlitImage");
    table->CmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)gdpa(device, "vkCmdCopyBufferToImage");
    table->CmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)gdpa(device, "vkCmdCopyImageToBuffer");
    table->CmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)gdpa(device, "vkCmdUpdateBuffer");
    table->CmdFillBuffer = (PFN_vkCmdFillBuffer)gdpa(device, "vkCmdFillBuffer");
    table->CmdClearColorImage = (PFN_vkCmdClearColorImage)gdpa(device, "vkCmdClearColorImage");
    table->CmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)gdpa(device, "vkCmdClearDepthStencilImage");
    table->CmdClearAttachments = (PFN_vkCmdClearAttachments)gdpa(device, "vkCmdClearAttachments");
    table->CmdResolveImage = (PFN_vkCmdResolveImage)gdpa(device, "vkCmdResolveImage");
    table->CmdSetEvent = (PFN_vkCmdSetEvent)gdpa(device, "vkCmdSetEvent");
    table->CmdResetEvent = (PFN_vkCmdResetEvent)gdpa(device, "vkCmdResetEvent");
    table->CmdWaitEvents = (PFN_vkCmdWaitEvents)gdpa(device, "vkCmdWaitEvents");
    table->CmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)gdpa(device, "vkCmdPipelineBarrier");
    table->CmdBeginQuery = (PFN_vkCmdBeginQuery)gdpa(device, "vkCmdBeginQuery");
    table->CmdEndQuery = (PFN_vkCmdEndQuery)gdpa(device, "vkCmdEndQuery");
    table->CmdResetQueryPool = (PFN_vkCmdResetQueryPool)gdpa(device, "vkCmdResetQueryPool");
    table->CmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)gdpa(device, "vkCmdWriteTimestamp");
    table->CmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)gdpa(device, "vkCmdCopyQueryPoolResults");
    table->CmdPushConstants = (PFN_vkCmdPushConstants)gdpa(device, "vkCmdPushConstants");
    table->CmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)gdpa(device, "vkCmdBeginRenderPass");
    table->CmdNextSubpass = (PFN_vkCmdNextSubpass)gdpa(device, "vkCmdNextSubpass");
    table->CmdEndRenderPass = (PFN_vkCmdEndRenderPass)gdpa(device, "vkCmdEndRenderPass");
    table->CmdExecuteCommands = (PFN_vkCmdExecuteCommands)gdpa(device, "vkCmdExecuteCommands");
    table->BindBufferMemory2 = (PFN_vkBindBufferMemory2)gdpa(device, "vkBindBufferMemory2");
    table->BindImageMemory2 = (PFN_vkBindImageMemory2)gdpa(device, "vkBindImageMemory2");
    table->GetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)gdpa(device, "vkGetDeviceGroupPeerMemoryFeatures");
    table->CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)gdpa(device, "vkCmdSetDeviceMask");
    table->CmdDispatchBase = (PFN_vkCmdDispatchBase)gdpa(device, "vkCmdDispatchBase");
    table->GetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)gdpa(device, "vkGetImageMemoryRequirements2");
    table->GetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)gdpa(device, "vkGetBufferMemoryRequirements2");
    table->GetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)gdpa(device, "vkGetImageSparseMemoryRequirements2");
    table->TrimCommandPool = (PFN_vkTrimCommandPool)gdpa(device, "vkTrimCommandPool");
    table->GetDeviceQueue2 = (PFN_vkGetDeviceQueue2)gdpa(device, "vkGetDeviceQueue2");
    table->CreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)gdpa(device, "vkCreateSamplerYcbcrConversion");
    table->DestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)gdpa(device, "vkDestroySamplerYcbcrConversion");
    table->CreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)gdpa(device, "vkCreateDescriptorUpdateTemplate");
    table->DestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)gdpa(device, "vkDestroyDescriptorUpdateTemplate");
    table->UpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)gdpa(device, "vkUpdateDescriptorSetWithTemplate");
    table->GetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)gdpa(device, "vkGetDescriptorSetLayoutSupport");
    table->CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)gdpa(device, "vkCmdDrawIndirectCount");
    table->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)gdpa(device, "vkCmdDrawIndexedIndirectCount");
    table->CreateRenderPass2 = (PFN_vkCreateRenderPass2)gdpa(device, "vkCreateRenderPass2");
    table->CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)gdpa(device, "vkCmdBeginRenderPass2");
    table->CmdNextSubpass2 = (PFN_vkCmdNextSubpass2)gdpa(device, "vkCmdNextSubpass2");
    table->CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)gdpa(device, "vkCmdEndRenderPass2");
    table->ResetQueryPool = (PFN_vkResetQueryPool)gdpa(device, "vkResetQueryPool");
    table->GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)gdpa(device, "vkGetSemaphoreCounterValue");
    table->WaitSemaphores = (PFN_vkWaitSemaphores)gdpa(device, "vkWaitSemaphores");
    table->SignalSemaphore = (PFN_vkSignalSemaphore)gdpa(device, "vkSignalSemaphore");
    table->GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)gdpa(device, "vkGetBufferDeviceAddress");
    table->GetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)gdpa(device, "vkGetBufferOpaqueCaptureAddress");
    table->GetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)gdpa(device, "vkGetDeviceMemoryOpaqueCaptureAddress");
    table->CreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)gdpa(device, "vkCreatePrivateDataSlot");
    table->DestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)gdpa(device, "vkDestroyPrivateDataSlot");
    table->SetPrivateData = (PFN_vkSetPrivateData)gdpa(device, "vkSetPrivateData");
    table->GetPrivateData = (PFN_vkGetPrivateData)gdpa(device, "vkGetPrivateData");
    table->CmdSetEvent2 = (PFN_vkCmdSetEvent2)gdpa(device, "vkCmdSetEvent2");
    table->CmdResetEvent2 = (PFN_vkCmdResetEvent2)gdpa(device, "vkCmdResetEvent2");
    table->CmdWaitEvents2 = (PFN_vkCmdWaitEvents2)gdpa(device, "vkCmdWaitEvents2");
    table->CmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)gdpa(device, "vkCmdPipelineBarrier2");
    table->CmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)gdpa(device, "vkCmdWriteTimestamp2");
    table->QueueSubmit2 = (PFN_vkQueueSubmit2)gdpa(device, "vkQueueSubmit2");
    table->CmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)gdpa(device, "vkCmdCopyBuffer2");
    table->CmdCopyImage2 = (PFN_vkCmdCopyImage2)gdpa(device, "vkCmdCopyImage2");
    table->CmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)gdpa(device, "vkCmdCopyBufferToImage2");
    table->CmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)gdpa(device, "vkCmdCopyImageToBuffer2");
    table->CmdBlitImage2 = (PFN_vkCmdBlitImage2)gdpa(device, "vkCmdBlitImage2");
    table->CmdResolveImage2 = (PFN_vkCmdResolveImage2)gdpa(device, "vkCmdResolveImage2");
    table->CmdBeginRendering = (PFN_vkCmdBeginRendering)gdpa(device, "vkCmdBeginRendering");
    table->CmdEndRendering = (PFN_vkCmdEndRendering)gdpa(device, "vkCmdEndRendering");
    table->CmdSetCullMode = (PFN_vkCmdSetCullMode)gdpa(device, "vkCmdSetCullMode");
    table->CmdSetFrontFace = (PFN_vkCmdSetFrontFace)gdpa(device, "vkCmdSetFrontFace");
    table->CmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)gdpa(device, "vkCmdSetPrimitiveTopology");
    table->CmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)gdpa(device, "vkCmdSetViewportWithCount");
    table->CmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)gdpa(device, "vkCmdSetScissorWithCount");
    table->CmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)gdpa(device, "vkCmdBindVertexBuffers2");
    table->CmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)gdpa(device, "vkCmdSetDepthTestEnable");
    table->CmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)gdpa(device, "vkCmdSetDepthWriteEnable");
    table->CmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)gdpa(device, "vkCmdSetDepthCompareOp");
    table->CmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)gdpa(device, "vkCmdSetDepthBoundsTestEnable");
    table->CmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)gdpa(device, "vkCmdSetStencilTestEnable");
    table->CmdSetStencilOp = (PFN_vkCmdSetStencilOp)gdpa(device, "vkCmdSetStencilOp");
    table->CmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)gdpa(device, "vkCmdSetRasterizerDiscardEnable");
    table->CmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)gdpa(device, "vkCmdSetDepthBiasEnable");
    table->CmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)gdpa(device, "vkCmdSetPrimitiveRestartEnable");
    table->GetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)gdpa(device, "vkGetDeviceBufferMemoryRequirements");
    table->GetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)gdpa(device, "vkGetDeviceImageMemoryRequirements");
    table->GetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)gdpa(device, "vkGetDeviceImageSparseMemoryRequirements");
    table->GetCommandPoolMemoryConsumption = (PFN_vkGetCommandPoolMemoryConsumption)gdpa(device, "vkGetCommandPoolMemoryConsumption");
    table->GetFaultData = (PFN_vkGetFaultData)gdpa(device, "vkGetFaultData");
    table->CreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)gdpa(device, "vkCreateSwapchainKHR");
    table->DestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)gdpa(device, "vkDestroySwapchainKHR");
    table->GetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)gdpa(device, "vkGetSwapchainImagesKHR");
    table->AcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)gdpa(device, "vkAcquireNextImageKHR");
    table->QueuePresentKHR = (PFN_vkQueuePresentKHR)gdpa(device, "vkQueuePresentKHR");
    table->GetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)gdpa(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
    table->GetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)gdpa(device, "vkGetDeviceGroupSurfacePresentModesKHR");
    table->AcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)gdpa(device, "vkAcquireNextImage2KHR");
    table->CreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)gdpa(device, "vkCreateSharedSwapchainsKHR");
    table->CreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)gdpa(device, "vkCreateVideoSessionKHR");
    table->DestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)gdpa(device, "vkDestroyVideoSessionKHR");
    table->GetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)gdpa(device, "vkGetVideoSessionMemoryRequirementsKHR");
    table->BindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)gdpa(device, "vkBindVideoSessionMemoryKHR");
    table->CreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)gdpa(device, "vkCreateVideoSessionParametersKHR");
    table->UpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)gdpa(device, "vkUpdateVideoSessionParametersKHR");
    table->DestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)gdpa(device, "vkDestroyVideoSessionParametersKHR");
    table->CmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)gdpa(device, "vkCmdBeginVideoCodingKHR");
    table->CmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)gdpa(device, "vkCmdEndVideoCodingKHR");
    table->CmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)gdpa(device, "vkCmdControlVideoCodingKHR");
    table->CmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)gdpa(device, "vkCmdDecodeVideoKHR");
    table->CmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)gdpa(device, "vkCmdBeginRenderingKHR");
    table->CmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)gdpa(device, "vkCmdEndRenderingKHR");
    table->GetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)gdpa(device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
    table->CmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)gdpa(device, "vkCmdSetDeviceMaskKHR");
    table->CmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)gdpa(device, "vkCmdDispatchBaseKHR");
    table->TrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)gdpa(device, "vkTrimCommandPoolKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)gdpa(device, "vkGetMemoryWin32HandleKHR");
    table->GetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)gdpa(device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
    table->GetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)gdpa(device, "vkGetMemoryFdKHR");
    table->GetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)gdpa(device, "vkGetMemoryFdPropertiesKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->ImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)gdpa(device, "vkImportSemaphoreWin32HandleKHR");
    table->GetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)gdpa(device, "vkGetSemaphoreWin32HandleKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
    table->ImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)gdpa(device, "vkImportSemaphoreFdKHR");
    table->GetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)gdpa(device, "vkGetSemaphoreFdKHR");
    table->CmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)gdpa(device, "vkCmdPushDescriptorSetKHR");
    table->CmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)gdpa(device, "vkCmdPushDescriptorSetWithTemplateKHR");
    table->CreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)gdpa(device, "vkCreateDescriptorUpdateTemplateKHR");
    table->DestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)gdpa(device, "vkDestroyDescriptorUpdateTemplateKHR");
    table->UpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)gdpa(device, "vkUpdateDescriptorSetWithTemplateKHR");
    table->CreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)gdpa(device, "vkCreateRenderPass2KHR");
    table->CmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)gdpa(device, "vkCmdBeginRenderPass2KHR");
    table->CmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)gdpa(device, "vkCmdNextSubpass2KHR");
    table->CmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)gdpa(device, "vkCmdEndRenderPass2KHR");
    table->GetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)gdpa(device, "vkGetSwapchainStatusKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->ImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)gdpa(device, "vkImportFenceWin32HandleKHR");
    table->GetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)gdpa(device, "vkGetFenceWin32HandleKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
    table->ImportFenceFdKHR = (PFN_vkImportFenceFdKHR)gdpa(device, "vkImportFenceFdKHR");
    table->GetFenceFdKHR = (PFN_vkGetFenceFdKHR)gdpa(device, "vkGetFenceFdKHR");
    table->AcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)gdpa(device, "vkAcquireProfilingLockKHR");
    table->ReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)gdpa(device, "vkReleaseProfilingLockKHR");
    table->GetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)gdpa(device, "vkGetImageMemoryRequirements2KHR");
    table->GetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)gdpa(device, "vkGetBufferMemoryRequirements2KHR");
    table->GetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)gdpa(device, "vkGetImageSparseMemoryRequirements2KHR");
    table->CreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)gdpa(device, "vkCreateSamplerYcbcrConversionKHR");
    table->DestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)gdpa(device, "vkDestroySamplerYcbcrConversionKHR");
    table->BindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)gdpa(device, "vkBindBufferMemory2KHR");
    table->BindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)gdpa(device, "vkBindImageMemory2KHR");
    table->GetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)gdpa(device, "vkGetDescriptorSetLayoutSupportKHR");
    table->CmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)gdpa(device, "vkCmdDrawIndirectCountKHR");
    table->CmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)gdpa(device, "vkCmdDrawIndexedIndirectCountKHR");
    table->GetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)gdpa(device, "vkGetSemaphoreCounterValueKHR");
    table->WaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)gdpa(device, "vkWaitSemaphoresKHR");
    table->SignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)gdpa(device, "vkSignalSemaphoreKHR");
    table->CmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)gdpa(device, "vkCmdSetFragmentShadingRateKHR");
    table->WaitForPresentKHR = (PFN_vkWaitForPresentKHR)gdpa(device, "vkWaitForPresentKHR");
    table->GetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)gdpa(device, "vkGetBufferDeviceAddressKHR");
    table->GetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)gdpa(device, "vkGetBufferOpaqueCaptureAddressKHR");
    table->GetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)gdpa(device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
    table->CreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)gdpa(device, "vkCreateDeferredOperationKHR");
    table->DestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)gdpa(device, "vkDestroyDeferredOperationKHR");
    table->GetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)gdpa(device, "vkGetDeferredOperationMaxConcurrencyKHR");
    table->GetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)gdpa(device, "vkGetDeferredOperationResultKHR");
    table->DeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)gdpa(device, "vkDeferredOperationJoinKHR");
    table->GetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)gdpa(device, "vkGetPipelineExecutablePropertiesKHR");
    table->GetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)gdpa(device, "vkGetPipelineExecutableStatisticsKHR");
    table->GetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)gdpa(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
    table->MapMemory2KHR = (PFN_vkMapMemory2KHR)gdpa(device, "vkMapMemory2KHR");
    table->UnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)gdpa(device, "vkUnmapMemory2KHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetEncodedVideoSessionParametersKHR = (PFN_vkGetEncodedVideoSessionParametersKHR)gdpa(device, "vkGetEncodedVideoSessionParametersKHR");
    table->CmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)gdpa(device, "vkCmdEncodeVideoKHR");
#endif  // VK_ENABLE_BETA_EXTENSIONS
    table->CmdRefreshObjectsKHR = (PFN_vkCmdRefreshObjectsKHR)gdpa(device, "vkCmdRefreshObjectsKHR");
    table->CmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)gdpa(device, "vkCmdSetEvent2KHR");
    table->CmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)gdpa(device, "vkCmdResetEvent2KHR");
    table->CmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)gdpa(device, "vkCmdWaitEvents2KHR");
    table->CmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)gdpa(device, "vkCmdPipelineBarrier2KHR");
    table->CmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)gdpa(device, "vkCmdWriteTimestamp2KHR");
    table->QueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)gdpa(device, "vkQueueSubmit2KHR");
    table->CmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)gdpa(device, "vkCmdWriteBufferMarker2AMD");
    table->GetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)gdpa(device, "vkGetQueueCheckpointData2NV");
    table->CmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)gdpa(device, "vkCmdCopyBuffer2KHR");
    table->CmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)gdpa(device, "vkCmdCopyImage2KHR");
    table->CmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)gdpa(device, "vkCmdCopyBufferToImage2KHR");
    table->CmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)gdpa(device, "vkCmdCopyImageToBuffer2KHR");
    table->CmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)gdpa(device, "vkCmdBlitImage2KHR");
    table->CmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)gdpa(device, "vkCmdResolveImage2KHR");
    table->CmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)gdpa(device, "vkCmdTraceRaysIndirect2KHR");
    table->GetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)gdpa(device, "vkGetDeviceBufferMemoryRequirementsKHR");
    table->GetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)gdpa(device, "vkGetDeviceImageMemoryRequirementsKHR");
    table->GetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)gdpa(device, "vkGetDeviceImageSparseMemoryRequirementsKHR");
    table->CmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)gdpa(device, "vkCmdBindIndexBuffer2KHR");
    table->GetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR)gdpa(device, "vkGetRenderingAreaGranularityKHR");
    table->GetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR)gdpa(device, "vkGetDeviceImageSubresourceLayoutKHR");
    table->GetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)gdpa(device, "vkGetImageSubresourceLayout2KHR");
    table->DebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)gdpa(device, "vkDebugMarkerSetObjectTagEXT");
    table->DebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)gdpa(device, "vkDebugMarkerSetObjectNameEXT");
    table->CmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)gdpa(device, "vkCmdDebugMarkerBeginEXT");
    table->CmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)gdpa(device, "vkCmdDebugMarkerEndEXT");
    table->CmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)gdpa(device, "vkCmdDebugMarkerInsertEXT");
    table->CmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)gdpa(device, "vkCmdBindTransformFeedbackBuffersEXT");
    table->CmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)gdpa(device, "vkCmdBeginTransformFeedbackEXT");
    table->CmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)gdpa(device, "vkCmdEndTransformFeedbackEXT");
    table->CmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)gdpa(device, "vkCmdBeginQueryIndexedEXT");
    table->CmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)gdpa(device, "vkCmdEndQueryIndexedEXT");
    table->CmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)gdpa(device, "vkCmdDrawIndirectByteCountEXT");
    table->CreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)gdpa(device, "vkCreateCuModuleNVX");
    table->CreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)gdpa(device, "vkCreateCuFunctionNVX");
    table->DestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)gdpa(device, "vkDestroyCuModuleNVX");
    table->DestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)gdpa(device, "vkDestroyCuFunctionNVX");
    table->CmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)gdpa(device, "vkCmdCuLaunchKernelNVX");
    table->GetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)gdpa(device, "vkGetImageViewHandleNVX");
    table->GetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)gdpa(device, "vkGetImageViewAddressNVX");
    table->CmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)gdpa(device, "vkCmdDrawIndirectCountAMD");
    table->CmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)gdpa(device, "vkCmdDrawIndexedIndirectCountAMD");
    table->GetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)gdpa(device, "vkGetShaderInfoAMD");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)gdpa(device, "vkGetMemoryWin32HandleNV");
#endif  // VK_USE_PLATFORM_WIN32_KHR
    table->CmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)gdpa(device, "vkCmdBeginConditionalRenderingEXT");
    table->CmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)gdpa(device, "vkCmdEndConditionalRenderingEXT");
    table->CmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)gdpa(device, "vkCmdSetViewportWScalingNV");
    table->DisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)gdpa(device, "vkDisplayPowerControlEXT");
    table->RegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)gdpa(device, "vkRegisterDeviceEventEXT");
    table->RegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)gdpa(device, "vkRegisterDisplayEventEXT");
    table->GetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)gdpa(device, "vkGetSwapchainCounterEXT");
    table->GetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)gdpa(device, "vkGetRefreshCycleDurationGOOGLE");
    table->GetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)gdpa(device, "vkGetPastPresentationTimingGOOGLE");
    table->CmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)gdpa(device, "vkCmdSetDiscardRectangleEXT");
    table->CmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT)gdpa(device, "vkCmdSetDiscardRectangleEnableEXT");
    table->CmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT)gdpa(device, "vkCmdSetDiscardRectangleModeEXT");
    table->SetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)gdpa(device, "vkSetHdrMetadataEXT");
    table->SetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)gdpa(device, "vkSetDebugUtilsObjectNameEXT");
    table->SetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)gdpa(device, "vkSetDebugUtilsObjectTagEXT");
    table->QueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)gdpa(device, "vkQueueBeginDebugUtilsLabelEXT");
    table->QueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)gdpa(device, "vkQueueEndDebugUtilsLabelEXT");
    table->QueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)gdpa(device, "vkQueueInsertDebugUtilsLabelEXT");
    table->CmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)gdpa(device, "vkCmdBeginDebugUtilsLabelEXT");
    table->CmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)gdpa(device, "vkCmdEndDebugUtilsLabelEXT");
    table->CmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)gdpa(device, "vkCmdInsertDebugUtilsLabelEXT");
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    table->GetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)gdpa(device, "vkGetAndroidHardwareBufferPropertiesANDROID");
    table->GetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)gdpa(device, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->CreateExecutionGraphPipelinesAMDX = (PFN_vkCreateExecutionGraphPipelinesAMDX)gdpa(device, "vkCreateExecutionGraphPipelinesAMDX");
    table->GetExecutionGraphPipelineScratchSizeAMDX = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX)gdpa(device, "vkGetExecutionGraphPipelineScratchSizeAMDX");
    table->GetExecutionGraphPipelineNodeIndexAMDX = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX)gdpa(device, "vkGetExecutionGraphPipelineNodeIndexAMDX");
    table->CmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)gdpa(device, "vkCmdInitializeGraphScratchMemoryAMDX");
    table->CmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX)gdpa(device, "vkCmdDispatchGraphAMDX");
    table->CmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX)gdpa(device, "vkCmdDispatchGraphIndirectAMDX");
    table->CmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX)gdpa(device, "vkCmdDispatchGraphIndirectCountAMDX");
#endif  // VK_ENABLE_BETA_EXTENSIONS
    table->CmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)gdpa(device, "vkCmdSetSampleLocationsEXT");
    table->GetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)gdpa(device, "vkGetImageDrmFormatModifierPropertiesEXT");
    table->CreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)gdpa(device, "vkCreateValidationCacheEXT");
    table->DestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)gdpa(device, "vkDestroyValidationCacheEXT");
    table->MergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)gdpa(device, "vkMergeValidationCachesEXT");
    table->GetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)gdpa(device, "vkGetValidationCacheDataEXT");
    table->CmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)gdpa(device, "vkCmdBindShadingRateImageNV");
    table->CmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)gdpa(device, "vkCmdSetViewportShadingRatePaletteNV");
    table->CmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)gdpa(device, "vkCmdSetCoarseSampleOrderNV");
    table->CreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)gdpa(device, "vkCreateAccelerationStructureNV");
    table->DestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)gdpa(device, "vkDestroyAccelerationStructureNV");
    table->GetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)gdpa(device, "vkGetAccelerationStructureMemoryRequirementsNV");
    table->BindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)gdpa(device, "vkBindAccelerationStructureMemoryNV");
    table->CmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)gdpa(device, "vkCmdBuildAccelerationStructureNV");
    table->CmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)gdpa(device, "vkCmdCopyAccelerationStructureNV");
    table->CmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)gdpa(device, "vkCmdTraceRaysNV");
    table->CreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)gdpa(device, "vkCreateRayTracingPipelinesNV");
    table->GetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)gdpa(device, "vkGetRayTracingShaderGroupHandlesKHR");
    table->GetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)gdpa(device, "vkGetRayTracingShaderGroupHandlesNV");
    table->GetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)gdpa(device, "vkGetAccelerationStructureHandleNV");
    table->CmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)gdpa(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
    table->CompileDeferredNV = (PFN_vkCompileDeferredNV)gdpa(device, "vkCompileDeferredNV");
    table->GetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)gdpa(device, "vkGetMemoryHostPointerPropertiesEXT");
    table->CmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)gdpa(device, "vkCmdWriteBufferMarkerAMD");
    table->GetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)gdpa(device, "vkGetCalibratedTimestampsEXT");
    table->CmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)gdpa(device, "vkCmdDrawMeshTasksNV");
    table->CmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)gdpa(device, "vkCmdDrawMeshTasksIndirectNV");
    table->CmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)gdpa(device, "vkCmdDrawMeshTasksIndirectCountNV");
    table->CmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV)gdpa(device, "vkCmdSetExclusiveScissorEnableNV");
    table->CmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)gdpa(device, "vkCmdSetExclusiveScissorNV");
    table->CmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)gdpa(device, "vkCmdSetCheckpointNV");
    table->GetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)gdpa(device, "vkGetQueueCheckpointDataNV");
    table->InitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)gdpa(device, "vkInitializePerformanceApiINTEL");
    table->UninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)gdpa(device, "vkUninitializePerformanceApiINTEL");
    table->CmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)gdpa(device, "vkCmdSetPerformanceMarkerINTEL");
    table->CmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)gdpa(device, "vkCmdSetPerformanceStreamMarkerINTEL");
    table->CmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)gdpa(device, "vkCmdSetPerformanceOverrideINTEL");
    table->AcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)gdpa(device, "vkAcquirePerformanceConfigurationINTEL");
    table->ReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)gdpa(device, "vkReleasePerformanceConfigurationINTEL");
    table->QueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)gdpa(device, "vkQueueSetPerformanceConfigurationINTEL");
    table->GetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)gdpa(device, "vkGetPerformanceParameterINTEL");
    table->SetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)gdpa(device, "vkSetLocalDimmingAMD");
    table->GetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)gdpa(device, "vkGetBufferDeviceAddressEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->AcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)gdpa(device, "vkAcquireFullScreenExclusiveModeEXT");
    table->ReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)gdpa(device, "vkReleaseFullScreenExclusiveModeEXT");
    table->GetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)gdpa(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif  // VK_USE_PLATFORM_WIN32_KHR
    table->CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)gdpa(device, "vkCmdSetLineStippleEXT");
    table->ResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)gdpa(device, "vkResetQueryPoolEXT");
    table->CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)gdpa(device, "vkCmdSetCullModeEXT");
    table->CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)gdpa(device, "vkCmdSetFrontFaceEXT");
    table->CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)gdpa(device, "vkCmdSetPrimitiveTopologyEXT");
    table->CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)gdpa(device, "vkCmdSetViewportWithCountEXT");
    table->CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)gdpa(device, "vkCmdSetScissorWithCountEXT");
    table->CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)gdpa(device, "vkCmdBindVertexBuffers2EXT");
    table->CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)gdpa(device, "vkCmdSetDepthTestEnableEXT");
    table->CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)gdpa(device, "vkCmdSetDepthWriteEnableEXT");
    table->CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)gdpa(device, "vkCmdSetDepthCompareOpEXT");
    table->CmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)gdpa(device, "vkCmdSetDepthBoundsTestEnableEXT");
    table->CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)gdpa(device, "vkCmdSetStencilTestEnableEXT");
    table->CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)gdpa(device, "vkCmdSetStencilOpEXT");
    table->CopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT)gdpa(device, "vkCopyMemoryToImageEXT");
    table->CopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT)gdpa(device, "vkCopyImageToMemoryEXT");
    table->CopyImageToImageEXT = (PFN_vkCopyImageToImageEXT)gdpa(device, "vkCopyImageToImageEXT");
    table->TransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)gdpa(device, "vkTransitionImageLayoutEXT");
    table->GetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)gdpa(device, "vkGetImageSubresourceLayout2EXT");
    table->ReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT)gdpa(device, "vkReleaseSwapchainImagesEXT");
    table->GetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)gdpa(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
    table->CmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)gdpa(device, "vkCmdPreprocessGeneratedCommandsNV");
    table->CmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)gdpa(device, "vkCmdExecuteGeneratedCommandsNV");
    table->CmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)gdpa(device, "vkCmdBindPipelineShaderGroupNV");
    table->CreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)gdpa(device, "vkCreateIndirectCommandsLayoutNV");
    table->DestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)gdpa(device, "vkDestroyIndirectCommandsLayoutNV");
    table->CmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT)gdpa(device, "vkCmdSetDepthBias2EXT");
    table->CreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)gdpa(device, "vkCreatePrivateDataSlotEXT");
    table->DestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)gdpa(device, "vkDestroyPrivateDataSlotEXT");
    table->SetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)gdpa(device, "vkSetPrivateDataEXT");
    table->GetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)gdpa(device, "vkGetPrivateDataEXT");
    table->CreateCudaModuleNV = (PFN_vkCreateCudaModuleNV)gdpa(device, "vkCreateCudaModuleNV");
    table->GetCudaModuleCacheNV = (PFN_vkGetCudaModuleCacheNV)gdpa(device, "vkGetCudaModuleCacheNV");
    table->CreateCudaFunctionNV = (PFN_vkCreateCudaFunctionNV)gdpa(device, "vkCreateCudaFunctionNV");
    table->DestroyCudaModuleNV = (PFN_vkDestroyCudaModuleNV)gdpa(device, "vkDestroyCudaModuleNV");
    table->DestroyCudaFunctionNV = (PFN_vkDestroyCudaFunctionNV)gdpa(device, "vkDestroyCudaFunctionNV");
    table->CmdCudaLaunchKernelNV = (PFN_vkCmdCudaLaunchKernelNV)gdpa(device, "vkCmdCudaLaunchKernelNV");
#ifdef VK_USE_PLATFORM_METAL_EXT
    table->ExportMetalObjectsEXT = (PFN_vkExportMetalObjectsEXT)gdpa(device, "vkExportMetalObjectsEXT");
#endif  // VK_USE_PLATFORM_METAL_EXT
    table->GetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT)gdpa(device, "vkGetDescriptorSetLayoutSizeEXT");
    table->GetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT)gdpa(device, "vkGetDescriptorSetLayoutBindingOffsetEXT");
    table->GetDescriptorEXT = (PFN_vkGetDescriptorEXT)gdpa(device, "vkGetDescriptorEXT");
    table->CmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT)gdpa(device, "vkCmdBindDescriptorBuffersEXT");
    table->CmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)gdpa(device, "vkCmdSetDescriptorBufferOffsetsEXT");
    table->CmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)gdpa(device, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
    table->GetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT)gdpa(device, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
    table->GetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT)gdpa(device, "vkGetImageOpaqueCaptureDescriptorDataEXT");
    table->GetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT)gdpa(device, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
    table->GetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT)gdpa(device, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
    table->GetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT)gdpa(device, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
    table->CmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)gdpa(device, "vkCmdSetFragmentShadingRateEnumNV");
    table->GetDeviceFaultInfoEXT = (PFN_vkGetDeviceFaultInfoEXT)gdpa(device, "vkGetDeviceFaultInfoEXT");
    table->CmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)gdpa(device, "vkCmdSetVertexInputEXT");
#ifdef VK_USE_PLATFORM_FUCHSIA
    table->GetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)gdpa(device, "vkGetMemoryZirconHandleFUCHSIA");
    table->GetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)gdpa(device, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
    table->ImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)gdpa(device, "vkImportSemaphoreZirconHandleFUCHSIA");
    table->GetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)gdpa(device, "vkGetSemaphoreZirconHandleFUCHSIA");
    table->CreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)gdpa(device, "vkCreateBufferCollectionFUCHSIA");
    table->SetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)gdpa(device, "vkSetBufferCollectionImageConstraintsFUCHSIA");
    table->SetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)gdpa(device, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
    table->DestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)gdpa(device, "vkDestroyBufferCollectionFUCHSIA");
    table->GetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)gdpa(device, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif  // VK_USE_PLATFORM_FUCHSIA
    table->GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)gdpa(device, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
    table->CmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)gdpa(device, "vkCmdSubpassShadingHUAWEI");
    table->CmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)gdpa(device, "vkCmdBindInvocationMaskHUAWEI");
    table->GetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)gdpa(device, "vkGetMemoryRemoteAddressNV");
    table->GetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT)gdpa(device, "vkGetPipelinePropertiesEXT");
#ifdef VK_USE_PLATFORM_SCI
    table->GetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV)gdpa(device, "vkGetFenceSciSyncFenceNV");
    table->GetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV)gdpa(device, "vkGetFenceSciSyncObjNV");
    table->ImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV)gdpa(device, "vkImportFenceSciSyncFenceNV");
    table->ImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV)gdpa(device, "vkImportFenceSciSyncObjNV");
    table->GetSemaphoreSciSyncObjNV = (PFN_vkGetSemaphoreSciSyncObjNV)gdpa(device, "vkGetSemaphoreSciSyncObjNV");
    table->ImportSemaphoreSciSyncObjNV = (PFN_vkImportSemaphoreSciSyncObjNV)gdpa(device, "vkImportSemaphoreSciSyncObjNV");
    table->GetMemorySciBufNV = (PFN_vkGetMemorySciBufNV)gdpa(device, "vkGetMemorySciBufNV");
#endif  // VK_USE_PLATFORM_SCI
    table->CmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)gdpa(device, "vkCmdSetPatchControlPointsEXT");
    table->CmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)gdpa(device, "vkCmdSetRasterizerDiscardEnableEXT");
    table->CmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)gdpa(device, "vkCmdSetDepthBiasEnableEXT");
    table->CmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)gdpa(device, "vkCmdSetLogicOpEXT");
    table->CmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)gdpa(device, "vkCmdSetPrimitiveRestartEnableEXT");
    table->CmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)gdpa(device, "vkCmdSetColorWriteEnableEXT");
    table->CmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)gdpa(device, "vkCmdDrawMultiEXT");
    table->CmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)gdpa(device, "vkCmdDrawMultiIndexedEXT");
    table->CreateMicromapEXT = (PFN_vkCreateMicromapEXT)gdpa(device, "vkCreateMicromapEXT");
    table->DestroyMicromapEXT = (PFN_vkDestroyMicromapEXT)gdpa(device, "vkDestroyMicromapEXT");
    table->CmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT)gdpa(device, "vkCmdBuildMicromapsEXT");
    table->BuildMicromapsEXT = (PFN_vkBuildMicromapsEXT)gdpa(device, "vkBuildMicromapsEXT");
    table->CopyMicromapEXT = (PFN_vkCopyMicromapEXT)gdpa(device, "vkCopyMicromapEXT");
    table->CopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT)gdpa(device, "vkCopyMicromapToMemoryEXT");
    table->CopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT)gdpa(device, "vkCopyMemoryToMicromapEXT");
    table->WriteMicromapsPropertiesEXT = (PFN_vkWriteMicromapsPropertiesEXT)gdpa(device, "vkWriteMicromapsPropertiesEXT");
    table->CmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT)gdpa(device, "vkCmdCopyMicromapEXT");
    table->CmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)gdpa(device, "vkCmdCopyMicromapToMemoryEXT");
    table->CmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)gdpa(device, "vkCmdCopyMemoryToMicromapEXT");
    table->CmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT)gdpa(device, "vkCmdWriteMicromapsPropertiesEXT");
    table->GetDeviceMicromapCompatibilityEXT = (PFN_vkGetDeviceMicromapCompatibilityEXT)gdpa(device, "vkGetDeviceMicromapCompatibilityEXT");
    table->GetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT)gdpa(device, "vkGetMicromapBuildSizesEXT");
    table->CmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI)gdpa(device, "vkCmdDrawClusterHUAWEI");
    table->CmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI)gdpa(device, "vkCmdDrawClusterIndirectHUAWEI");
    table->SetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)gdpa(device, "vkSetDeviceMemoryPriorityEXT");
    table->GetDescriptorSetLayoutHostMappingInfoVALVE = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE)gdpa(device, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
    table->GetDescriptorSetHostMappingVALVE = (PFN_vkGetDescriptorSetHostMappingVALVE)gdpa(device, "vkGetDescriptorSetHostMappingVALVE");
    table->CmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)gdpa(device, "vkCmdCopyMemoryIndirectNV");
    table->CmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV)gdpa(device, "vkCmdCopyMemoryToImageIndirectNV");
    table->CmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV)gdpa(device, "vkCmdDecompressMemoryNV");
    table->CmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV)gdpa(device, "vkCmdDecompressMemoryIndirectCountNV");
    table->GetPipelineIndirectMemoryRequirementsNV = (PFN_vkGetPipelineIndirectMemoryRequirementsNV)gdpa(device, "vkGetPipelineIndirectMemoryRequirementsNV");
    table->CmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV)gdpa(device, "vkCmdUpdatePipelineIndirectBufferNV");
    table->GetPipelineIndirectDeviceAddressNV = (PFN_vkGetPipelineIndirectDeviceAddressNV)gdpa(device, "vkGetPipelineIndirectDeviceAddressNV");
    table->CmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT)gdpa(device, "vkCmdSetTessellationDomainOriginEXT");
    table->CmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)gdpa(device, "vkCmdSetDepthClampEnableEXT");
    table->CmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT)gdpa(device, "vkCmdSetPolygonModeEXT");
    table->CmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT)gdpa(device, "vkCmdSetRasterizationSamplesEXT");
    table->CmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT)gdpa(device, "vkCmdSetSampleMaskEXT");
    table->CmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT)gdpa(device, "vkCmdSetAlphaToCoverageEnableEXT");
    table->CmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)gdpa(device, "vkCmdSetAlphaToOneEnableEXT");
    table->CmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT)gdpa(device, "vkCmdSetLogicOpEnableEXT");
    table->CmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)gdpa(device, "vkCmdSetColorBlendEnableEXT");
    table->CmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT)gdpa(device, "vkCmdSetColorBlendEquationEXT");
    table->CmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)gdpa(device, "vkCmdSetColorWriteMaskEXT");
    table->CmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT)gdpa(device, "vkCmdSetRasterizationStreamEXT");
    table->CmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT)gdpa(device, "vkCmdSetConservativeRasterizationModeEXT");
    table->CmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)gdpa(device, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
    table->CmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)gdpa(device, "vkCmdSetDepthClipEnableEXT");
    table->CmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT)gdpa(device, "vkCmdSetSampleLocationsEnableEXT");
    table->CmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT)gdpa(device, "vkCmdSetColorBlendAdvancedEXT");
    table->CmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT)gdpa(device, "vkCmdSetProvokingVertexModeEXT");
    table->CmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT)gdpa(device, "vkCmdSetLineRasterizationModeEXT");
    table->CmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)gdpa(device, "vkCmdSetLineStippleEnableEXT");
    table->CmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)gdpa(device, "vkCmdSetDepthClipNegativeOneToOneEXT");
    table->CmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV)gdpa(device, "vkCmdSetViewportWScalingEnableNV");
    table->CmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)gdpa(device, "vkCmdSetViewportSwizzleNV");
    table->CmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV)gdpa(device, "vkCmdSetCoverageToColorEnableNV");
    table->CmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV)gdpa(device, "vkCmdSetCoverageToColorLocationNV");
    table->CmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV)gdpa(device, "vkCmdSetCoverageModulationModeNV");
    table->CmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV)gdpa(device, "vkCmdSetCoverageModulationTableEnableNV");
    table->CmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV)gdpa(device, "vkCmdSetCoverageModulationTableNV");
    table->CmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV)gdpa(device, "vkCmdSetShadingRateImageEnableNV");
    table->CmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)gdpa(device, "vkCmdSetRepresentativeFragmentTestEnableNV");
    table->CmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV)gdpa(device, "vkCmdSetCoverageReductionModeNV");
    table->GetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT)gdpa(device, "vkGetShaderModuleIdentifierEXT");
    table->GetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT)gdpa(device, "vkGetShaderModuleCreateInfoIdentifierEXT");
    table->CreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV)gdpa(device, "vkCreateOpticalFlowSessionNV");
    table->DestroyOpticalFlowSessionNV = (PFN_vkDestroyOpticalFlowSessionNV)gdpa(device, "vkDestroyOpticalFlowSessionNV");
    table->BindOpticalFlowSessionImageNV = (PFN_vkBindOpticalFlowSessionImageNV)gdpa(device, "vkBindOpticalFlowSessionImageNV");
    table->CmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)gdpa(device, "vkCmdOpticalFlowExecuteNV");
    table->CreateShadersEXT = (PFN_vkCreateShadersEXT)gdpa(device, "vkCreateShadersEXT");
    table->DestroyShaderEXT = (PFN_vkDestroyShaderEXT)gdpa(device, "vkDestroyShaderEXT");
    table->GetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT)gdpa(device, "vkGetShaderBinaryDataEXT");
    table->CmdBindShadersEXT = (PFN_vkCmdBindShadersEXT)gdpa(device, "vkCmdBindShadersEXT");
    table->GetFramebufferTilePropertiesQCOM = (PFN_vkGetFramebufferTilePropertiesQCOM)gdpa(device, "vkGetFramebufferTilePropertiesQCOM");
    table->GetDynamicRenderingTilePropertiesQCOM = (PFN_vkGetDynamicRenderingTilePropertiesQCOM)gdpa(device, "vkGetDynamicRenderingTilePropertiesQCOM");
#ifdef VK_USE_PLATFORM_SCI
    table->CreateSemaphoreSciSyncPoolNV = (PFN_vkCreateSemaphoreSciSyncPoolNV)gdpa(device, "vkCreateSemaphoreSciSyncPoolNV");
    table->DestroySemaphoreSciSyncPoolNV = (PFN_vkDestroySemaphoreSciSyncPoolNV)gdpa(device, "vkDestroySemaphoreSciSyncPoolNV");
#endif  // VK_USE_PLATFORM_SCI
    table->SetLatencySleepModeNV = (PFN_vkSetLatencySleepModeNV)gdpa(device, "vkSetLatencySleepModeNV");
    table->LatencySleepNV = (PFN_vkLatencySleepNV)gdpa(device, "vkLatencySleepNV");
    table->SetLatencyMarkerNV = (PFN_vkSetLatencyMarkerNV)gdpa(device, "vkSetLatencyMarkerNV");
    table->GetLatencyTimingsNV = (PFN_vkGetLatencyTimingsNV)gdpa(device, "vkGetLatencyTimingsNV");
    table->QueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV)gdpa(device, "vkQueueNotifyOutOfBandNV");
    table->CmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)gdpa(device, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    table->GetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX)gdpa(device, "vkGetScreenBufferPropertiesQNX");
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    table->CreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)gdpa(device, "vkCreateAccelerationStructureKHR");
    table->DestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)gdpa(device, "vkDestroyAccelerationStructureKHR");
    table->CmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)gdpa(device, "vkCmdBuildAccelerationStructuresKHR");
    table->CmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)gdpa(device, "vkCmdBuildAccelerationStructuresIndirectKHR");
    table->BuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)gdpa(device, "vkBuildAccelerationStructuresKHR");
    table->CopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)gdpa(device, "vkCopyAccelerationStructureKHR");
    table->CopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)gdpa(device, "vkCopyAccelerationStructureToMemoryKHR");
    table->CopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)gdpa(device, "vkCopyMemoryToAccelerationStructureKHR");
    table->WriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)gdpa(device, "vkWriteAccelerationStructuresPropertiesKHR");
    table->CmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)gdpa(device, "vkCmdCopyAccelerationStructureKHR");
    table->CmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)gdpa(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
    table->CmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)gdpa(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
    table->GetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)gdpa(device, "vkGetAccelerationStructureDeviceAddressKHR");
    table->CmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)gdpa(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
    table->GetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)gdpa(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
    table->GetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)gdpa(device, "vkGetAccelerationStructureBuildSizesKHR");
    table->CmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)gdpa(device, "vkCmdTraceRaysKHR");
    table->CreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)gdpa(device, "vkCreateRayTracingPipelinesKHR");
    table->GetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)gdpa(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
    table->CmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)gdpa(device, "vkCmdTraceRaysIndirectKHR");
    table->GetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)gdpa(device, "vkGetRayTracingShaderGroupStackSizeKHR");
    table->CmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)gdpa(device, "vkCmdSetRayTracingPipelineStackSizeKHR");
    table->CmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT)gdpa(device, "vkCmdDrawMeshTasksEXT");
    table->CmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT)gdpa(device, "vkCmdDrawMeshTasksIndirectEXT");
    table->CmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)gdpa(device, "vkCmdDrawMeshTasksIndirectCountEXT");
}

static inline void vkuInitInstanceDispatchTable(VkInstance instance, VkuInstanceDispatchTable *table, PFN_vkGetInstanceProcAddr gipa) {
    memset(table, 0, sizeof(*table));
    // Instance function pointers
    table->GetInstanceProcAddr = gipa;
    table->GetPhysicalDeviceProcAddr = (PFN_GetPhysicalDeviceProcAddr)gipa(instance, "vk_layerGetPhysicalDeviceProcAddr");
    table->DestroyInstance = (PFN_vkDestroyInstance)gipa(instance, "vkDestroyInstance");
    table->EnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)gipa(instance, "vkEnumeratePhysicalDevices");
    table->GetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)gipa(instance, "vkGetPhysicalDeviceFeatures");
    table->GetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)gipa(instance, "vkGetPhysicalDeviceFormatProperties");
    table->GetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)gipa(instance, "vkGetPhysicalDeviceImageFormatProperties");
    table->GetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)gipa(instance, "vkGetPhysicalDeviceProperties");
    table->GetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)gipa(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
    table->GetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)gipa(instance, "vkGetPhysicalDeviceMemoryProperties");
    table->EnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)gipa(instance, "vkEnumerateDeviceExtensionProperties");
    table->EnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)gipa(instance, "vkEnumerateDeviceLayerProperties");
    table->GetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)gipa(instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
    table->EnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)gipa(instance, "vkEnumeratePhysicalDeviceGroups");
    table->GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)gipa(instance, "vkGetPhysicalDeviceFeatures2");
    table->GetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)gipa(instance, "vkGetPhysicalDeviceProperties2");
    table->GetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)gipa(instance, "vkGetPhysicalDeviceFormatProperties2");
    table->GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)gipa(instance, "vkGetPhysicalDeviceImageFormatProperties2");
    table->GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)gipa(instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
    table->GetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)gipa(instance, "vkGetPhysicalDeviceMemoryProperties2");
    table->GetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)gipa(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    table->GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)gipa(instance, "vkGetPhysicalDeviceExternalBufferProperties");
    table->GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)gipa(instance, "vkGetPhysicalDeviceExternalFenceProperties");
    table->GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)gipa(instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    table->GetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)gipa(instance, "vkGetPhysicalDeviceToolProperties");
    table->DestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)gipa(instance, "vkDestroySurfaceKHR");
    table->GetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)gipa(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
    table->GetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)gipa(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    table->GetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)gipa(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    table->GetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)gipa(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    table->GetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)gipa(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
    table->GetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)gipa(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
    table->GetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)gipa(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    table->GetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)gipa(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
    table->GetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)gipa(instance, "vkGetDisplayModePropertiesKHR");
    table->CreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)gipa(instance, "vkCreateDisplayModeKHR");
    table->GetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)gipa(instance, "vkGetDisplayPlaneCapabilitiesKHR");
    table->CreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR)gipa(instance, "vkCreateDisplayPlaneSurfaceKHR");
#ifdef VK_USE_PLATFORM_XLIB_KHR
    table->CreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR)gipa(instance, "vkCreateXlibSurfaceKHR");
    table->GetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)gipa(instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    table->CreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR)gipa(instance, "vkCreateXcbSurfaceKHR");
    table->GetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)gipa(instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    table->CreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)gipa(instance, "vkCreateWaylandSurfaceKHR");
    table->GetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)gipa(instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    table->CreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)gipa(instance, "vkCreateAndroidSurfaceKHR");
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->CreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR)gipa(instance, "vkCreateWin32SurfaceKHR");
    table->GetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)gipa(instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif  // VK_USE_PLATFORM_WIN32_KHR
    table->GetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR)gipa(instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
    table->GetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR)gipa(instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
    table->GetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)gipa(instance, "vkGetPhysicalDeviceFeatures2KHR");
    table->GetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)gipa(instance, "vkGetPhysicalDeviceProperties2KHR");
    table->GetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)gipa(instance, "vkGetPhysicalDeviceFormatProperties2KHR");
    table->GetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)gipa(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
    table->GetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)gipa(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
    table->GetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)gipa(instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
    table->GetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)gipa(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
    table->EnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)gipa(instance, "vkEnumeratePhysicalDeviceGroupsKHR");
    table->GetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)gipa(instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
    table->GetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)gipa(instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
    table->GetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)gipa(instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
    table->EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)gipa(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
    table->GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)gipa(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
    table->GetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)gipa(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
    table->GetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)gipa(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
    table->GetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)gipa(instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
    table->GetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)gipa(instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    table->GetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR)gipa(instance, "vkGetDisplayModeProperties2KHR");
    table->GetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR)gipa(instance, "vkGetDisplayPlaneCapabilities2KHR");
    table->GetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)gipa(instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    table->GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR)gipa(instance, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR");
#endif  // VK_ENABLE_BETA_EXTENSIONS
    table->GetPhysicalDeviceRefreshableObjectTypesKHR = (PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR)gipa(instance, "vkGetPhysicalDeviceRefreshableObjectTypesKHR");
    table->GetPhysicalDeviceCooperativeMatrixPropertiesKHR = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR)gipa(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
    table->CreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)gipa(instance, "vkCreateDebugReportCallbackEXT");
    table->DestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)gipa(instance, "vkDestroyDebugReportCallbackEXT");
    table->DebugReportMessageEXT = (PFN_vkDebugReportMessageEXT)gipa(instance, "vkDebugReportMessageEXT");
#ifdef VK_USE_PLATFORM_GGP
    table->CreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP)gipa(instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif  // VK_USE_PLATFORM_GGP
    table->GetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)gipa(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#ifdef VK_USE_PLATFORM_VI_NN
    table->CreateViSurfaceNN = (PFN_vkCreateViSurfaceNN)gipa(instance, "vkCreateViSurfaceNN");
#endif  // VK_USE_PLATFORM_VI_NN
    table->ReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)gipa(instance, "vkReleaseDisplayEXT");
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    table->AcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)gipa(instance, "vkAcquireXlibDisplayEXT");
    table->GetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)gipa(instance, "vkGetRandROutputDisplayEXT");
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    table->GetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)gipa(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#ifdef VK_USE_PLATFORM_IOS_MVK
    table->CreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK)gipa(instance, "vkCreateIOSSurfaceMVK");
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    table->CreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK)gipa(instance, "vkCreateMacOSSurfaceMVK");
#endif  // VK_USE_PLATFORM_MACOS_MVK
    table->CreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)gipa(instance, "vkCreateDebugUtilsMessengerEXT");
    table->DestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)gipa(instance, "vkDestroyDebugUtilsMessengerEXT");
    table->SubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)gipa(instance, "vkSubmitDebugUtilsMessageEXT");
    table->GetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)gipa(instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
    table->GetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)gipa(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
#ifdef VK_USE_PLATFORM_FUCHSIA
    table->CreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA)gipa(instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    table->CreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)gipa(instance, "vkCreateMetalSurfaceEXT");
#endif  // VK_USE_PLATFORM_METAL_EXT
    table->GetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)gipa(instance, "vkGetPhysicalDeviceToolPropertiesEXT");
    table->GetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)gipa(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
    table->GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)gipa(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->GetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)gipa(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
#endif  // VK_USE_PLATFORM_WIN32_KHR
    table->CreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)gipa(instance, "vkCreateHeadlessSurfaceEXT");
    table->AcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT)gipa(instance, "vkAcquireDrmDisplayEXT");
    table->GetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT)gipa(instance, "vkGetDrmDisplayEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    table->AcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)gipa(instance, "vkAcquireWinrtDisplayNV");
    table->GetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)gipa(instance, "vkGetWinrtDisplayNV");
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    table->CreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)gipa(instance, "vkCreateDirectFBSurfaceEXT");
    table->GetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)gipa(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCI
    table->GetPhysicalDeviceSciSyncAttributesNV = (PFN_vkGetPhysicalDeviceSciSyncAttributesNV)gipa(instance, "vkGetPhysicalDeviceSciSyncAttributesNV");
    table->GetPhysicalDeviceExternalMemorySciBufPropertiesNV = (PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV)gipa(instance, "vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV");
    table->GetPhysicalDeviceSciBufAttributesNV = (PFN_vkGetPhysicalDeviceSciBufAttributesNV)gipa(instance, "vkGetPhysicalDeviceSciBufAttributesNV");
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    table->CreateScreenSurfaceQNX = (PFN_vkCreateScreenSurfaceQNX)gipa(instance, "vkCreateScreenSurfaceQNX");
    table->GetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)gipa(instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    table->GetPhysicalDeviceOpticalFlowImageFormatsNV = (PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV)gipa(instance, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
}
// clang-format on