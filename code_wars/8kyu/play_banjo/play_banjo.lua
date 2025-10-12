local function are_you_playing_banjo(name)
    local firstChar = string.sub(name, 1,1)

    if firstChar == "r" or firstChar == "R" then
        return name .. " plays banjo" 
    else
        return name .. " does not play banjo"
    end
end

return are_you_playing_banjo