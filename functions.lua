function glob_targets(dir)
    for _, filepath in ipairs(os.files(path.join(dir, "*.c"))) do
        target(path.basename(filepath))
            set_kind("binary")
            set_group(path.directory(filepath))
            add_files(filepath) 
            add_defines("_CRT_SECURE_NO_WARNINGS")
    end
end