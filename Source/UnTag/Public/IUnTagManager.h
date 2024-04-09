#pragma once

class IUnTagManager
{
public:
	virtual ~IUnTagManager() = default;
	virtual bool HasTags() const = 0;
	
};
