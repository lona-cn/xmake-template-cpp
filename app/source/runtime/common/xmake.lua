local target_name = "common"
local kind = "object"
local group_name = "runtime"
local pkgs = {}
local deps = {}
local syslinks = {}
local function callback()
    set_configdir("$(buildir)/config")
    add_configfiles("config.h.in")
    add_includedirs("$(buildir)/config", { public = true })
end
CreateTarget(target_name,kind,os.scriptdir(),group_name,pkgs,deps,syslinks,callback)