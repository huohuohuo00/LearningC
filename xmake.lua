-- 优化等级和调试符号
add_rules("mode.debug", "mode.release")

-- 目标
target("0.helloworld")
    set_kind("binary")
    add_files("0-helloworld/*.c")     --非递归
    -- add_files("src/**.c") --递归添加

target("1.controlflow")
    set_kind("binary")
    add_files("1-controlflow/*.c")