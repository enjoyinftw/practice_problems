local function filter_list(l)
    result = {}
    for _, item in ipairs(l) do
        
        if type(item) == "number" then
            table.insert(result, item)
        end
    end
    return result
  -- return a new table with the strings filtered out
end

return filter_list