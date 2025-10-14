local function to_jaden_case(s)
    return (s:gsub("(%a)([%w_']*)", function(first, rest) return first:upper()..rest:lower()
    end))
end

return to_jaden_case