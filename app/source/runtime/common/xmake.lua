local target_name = "common"
local kind = "object"
local group_name = "runtime"
local pkgs = {}
local deps = {}
local syslinks = {}
local function callback()
end
CreateTarget(target_name,kind,os.scriptdir(),group_name,pkgs,deps,syslinks,callback)