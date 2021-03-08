#include "precompiled.h"
#include "ImguiLayer.h"
namespace SingularityEngine::DearImgui
{

    ImGuiLayer::ImGuiLayer() : Core::Layer("ImguiLayer")
    {

    }

    ImGuiLayer::~ImGuiLayer()
    {

    }

    void ImGuiLayer::OnUpdate()
    {
        ImGui_ImplVulkan_NewFrame();
        ImGui::NewFrame();
        ImGui::Render();
        //ImGui_ImplVulkan_RenderDrawData(ImGui::GetDrawData(), );
    }

    void ImGuiLayer::OnEvent(Core::Event& event)
    {

    }

    void ImGuiLayer::OnAttach()
    {
        ImGui::CreateContext();
        ImGui::StyleColorsDark();
        auto* window = (GLFWwindow*)Core::Application::get()->getWindow()->getNativeWindow();
        ImGui_ImplGlfw_InitForVulkan(window, false);
    }

    void ImGuiLayer::OnDetach()
    {

    }

}
