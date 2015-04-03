// FBuild.cpp - The main FBuild interface class
//------------------------------------------------------------------------------
#pragma once
#ifndef FBUILD_FBUILDOPTIONS_H
#define FBUILD_FBUILDOPTIONS_H

// Includes
//------------------------------------------------------------------------------
#include "Core/Env/Types.h"
#include "Core/Strings/AString.h"

// FBuildOptions
//------------------------------------------------------------------------------
struct FBuildOptions
{
public:
	FBuildOptions();

	void SetWorkingDir( const AString & path );
	inline const AString & GetWorkingDir() const { return m_WorkingDir; }

	bool m_ForceCleanBuild;
	bool m_UseCacheRead;
	bool m_UseCacheWrite;
	bool m_ShowInfo;
	bool m_ShowCommandLines;
	bool m_ShowErrors;
	bool m_ShowProgress;
	bool m_AllowDistributed;
	bool m_ShowSummary;
	bool m_ShowBuildTime;
	bool m_SaveDBOnCompletion;
	bool m_GenerateReport;
	bool m_NoLocalConsumptionOfRemoteJobs;
	bool m_AllowLocalRace;
	bool m_WrapperChild;
	bool m_FixupErrorPaths;
	bool m_StopOnFirstError;
	uint32_t m_NumWorkerThreads;
	AString m_ConfigFile;

    AString GetMainProcessMutexName() const;
    AString GetFinalProcessMutexName() const;
    AString GetSharedMemoryName() const;

private:
	AString m_WorkingDir;
};

//------------------------------------------------------------------------------
#endif // FBUILD_FBUILDOPTIONS_H
