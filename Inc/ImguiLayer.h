#ifndef SINGULARITY_IMGUI_LAYER
#define SINGULARITY_IMGUI_LAYER
#include "Common.h"
#include "imgui.h"
#include "imgui_impl_android.h"
#include "imgui_impl_dx12.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_vulkan.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_osx.h"
namespace SingularityEngine::DearImgui
{
    class ImGuiLayer : public Core::Layer
    {
    public:
        ImGuiLayer();
        ~ImGuiLayer();
        void OnUpdate() override;
        void OnEvent(Core::Event& event) override;

        void OnAttach() override;


        void OnDetach() override;

    private:

    };
}

#endif
