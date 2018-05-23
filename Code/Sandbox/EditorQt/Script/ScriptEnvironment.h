// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include <CryScriptSystem/ScriptHelpers.h>

class EditorScriptEnvironment
	: public IEditorNotifyListener
	  , public CScriptableBase
{
public:
	EditorScriptEnvironment();
	~EditorScriptEnvironment();
	// IEditorNotifyListener
	virtual void OnEditorNotifyEvent(EEditorNotifyEvent event);
	// ~IEditorNotifyListener

private:
	void RegisterWithScriptSystem();
	void SelectionChanged();

	SmartScriptTable m_selection;
private:
	int Command(IFunctionHandler* pH, const char* commandName);
};
