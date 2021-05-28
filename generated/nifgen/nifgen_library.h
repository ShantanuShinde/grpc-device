//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-FGEN
//---------------------------------------------------------------------
#ifndef NIFGEN_GRPC_LIBRARY_H
#define NIFGEN_GRPC_LIBRARY_H

#include "nifgen_library_interface.h"

#include <server/shared_library.h>

namespace nifgen_grpc {

class NiFgenLibrary : public nifgen_grpc::NiFgenLibraryInterface {
 public:
  NiFgenLibrary();
  virtual ~NiFgenLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus AbortGeneration(ViSession vi);
  ViStatus AdjustSampleClockRelativeDelay(ViSession vi, ViReal64 adjustmentTime);
  ViStatus AllocateNamedWaveform(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 waveformSize);
  ViStatus AllocateWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt32* waveformHandle);
  ViStatus CalAdjustDirectPathOutputImpedance(ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad);
  ViStatus CalAdjustMainPathOutputImpedance(ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad);
  ViStatus CalAdjustOscillatorFrequency(ViSession vi, ViReal64 desiredFrequency, ViReal64 measuredFrequency);
  ViStatus ChangeExtCalPassword(ViSession vi, ViConstString oldPassword, ViConstString newPassword);
  ViStatus CheckAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus CheckAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus CheckAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  ViStatus CheckAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus CheckAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  ViStatus CheckAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  ViStatus ClearArbMemory(ViSession vi);
  ViStatus ClearArbSequence(ViSession vi, ViInt32 sequenceHandle);
  ViStatus ClearArbWaveform(ViSession vi, ViInt32 waveformHandle);
  ViStatus ClearError(ViSession vi);
  ViStatus ClearFreqList(ViSession vi, ViInt32 frequencyListHandle);
  ViStatus ClearInterchangeWarnings(ViSession vi);
  ViStatus ClearUserStandardWaveform(ViSession vi, ViConstString channelName);
  ViStatus Close(ViSession vi);
  ViStatus CloseExtCal(ViSession vi, ViInt32 action);
  ViStatus Commit(ViSession vi);
  ViStatus ConfigureAmplitude(ViSession vi, ViConstString channelName, ViReal64 amplitude);
  ViStatus ConfigureArbSequence(ViSession vi, ViConstString channelName, ViInt32 sequenceHandle, ViReal64 gain, ViReal64 offset);
  ViStatus ConfigureArbWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViReal64 gain, ViReal64 offset);
  ViStatus ConfigureChannels(ViSession vi, ViConstString channels);
  ViStatus ConfigureClockMode(ViSession vi, ViInt32 clockMode);
  ViStatus ConfigureCustomFirFilterCoefficients(ViSession vi, ViConstString channelName, ViInt32 numberOfCoefficients, ViReal64 coefficientsArray[]);
  ViStatus ConfigureDigitalEdgeScriptTrigger(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalLevelScriptTrigger(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 triggerWhen);
  ViStatus ConfigureFreqList(ViSession vi, ViConstString channelName, ViInt32 frequencyListHandle, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 startPhase);
  ViStatus ConfigureFrequency(ViSession vi, ViConstString channelName, ViReal64 frequency);
  ViStatus ConfigureGain(ViSession vi, ViConstString channelName, ViReal64 gain);
  ViStatus ConfigureOperationMode(ViSession vi, ViConstString channelName, ViInt32 operationMode);
  ViStatus ConfigureOutputEnabled(ViSession vi, ViConstString channelName, ViBoolean enabled);
  ViStatus ConfigureOutputImpedance(ViSession vi, ViConstString channelName, ViReal64 impedance);
  ViStatus ConfigureOutputMode(ViSession vi, ViInt32 outputMode);
  ViStatus ConfigureP2pEndpointFullnessStartTrigger(ViSession vi, ViInt32 p2pEndpointFullnessLevel);
  ViStatus ConfigureRefClockFrequency(ViSession vi, ViReal64 referenceClockFrequency);
  ViStatus ConfigureRefClockSource(ViSession vi, ViInt32 referenceClockSource);
  ViStatus ConfigureReferenceClock(ViSession vi, ViConstString referenceClockSource, ViReal64 referenceClockFrequency);
  ViStatus ConfigureSampleClockSource(ViSession vi, ViConstString sampleClockSource);
  ViStatus ConfigureSampleRate(ViSession vi, ViReal64 sampleRate);
  ViStatus ConfigureSoftwareEdgeScriptTrigger(ViSession vi, ViConstString triggerId);
  ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi);
  ViStatus ConfigureStandardWaveform(ViSession vi, ViConstString channelName, ViInt32 waveform, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 frequency, ViReal64 startPhase);
  ViStatus ConfigureSynchronization(ViSession vi, ViConstString channelName, ViInt32 synchronizationSource);
  ViStatus ConfigureTriggerMode(ViSession vi, ViConstString channelName, ViInt32 triggerMode);
  ViStatus ConfigureTriggerSource(ViSession vi, ViConstString channelName, ViInt32 triggerSource);
  ViStatus ConfigureUpdateClockSource(ViSession vi, ViInt32 updateClockSource);
  ViStatus CreateArbSequence(ViSession vi, ViInt32 sequenceLength, ViInt32 waveformHandlesArray[], ViInt32 loopCountsArray[], ViInt32* sequenceHandle);
  ViStatus CreateFreqList(ViSession vi, ViInt32 waveform, ViInt32 frequencyListLength, ViReal64 frequencyArray[], ViReal64 durationArray[], ViInt32* frequencyListHandle);
  ViStatus CreateWaveformF64(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[], ViInt32* waveformHandle);
  ViStatus CreateWaveformFromFileF64(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle);
  ViStatus CreateWaveformFromFileHws(ViSession vi, ViConstString channelName, ViConstString fileName, ViBoolean useRateFromWaveform, ViBoolean useGainAndOffsetFromWaveform, ViInt32* waveformHandle);
  ViStatus CreateWaveformFromFileI16(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle);
  ViStatus CreateWaveformI16(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt16 waveformDataArray[], ViInt32* waveformHandle);
  ViStatus DefineUserStandardWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[]);
  ViStatus DeleteNamedWaveform(ViSession vi, ViConstString channelName, ViConstString waveformName);
  ViStatus DeleteScript(ViSession vi, ViConstString channelName, ViConstString scriptName);
  ViStatus Disable(ViSession vi);
  ViStatus DisableAnalogFilter(ViSession vi, ViConstString channelName);
  ViStatus DisableDigitalFilter(ViSession vi, ViConstString channelName);
  ViStatus DisableDigitalPatterning(ViSession vi, ViConstString channelName);
  ViStatus DisableScriptTrigger(ViSession vi, ViConstString triggerId);
  ViStatus DisableStartTrigger(ViSession vi);
  ViStatus EnableAnalogFilter(ViSession vi, ViConstString channelName, ViReal64 filterCorrectionFrequency);
  ViStatus EnableDigitalFilter(ViSession vi, ViConstString channelName);
  ViStatus EnableDigitalPatterning(ViSession vi, ViConstString channelName);
  ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]);
  ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 arraySize, ViChar attributeValue[]);
  ViStatus GetCalUserDefinedInfo(ViSession vi, ViChar info[256]);
  ViStatus GetCalUserDefinedInfoMaxSize(ViSession vi, ViInt32* infoSize);
  ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[]);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]);
  ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature);
  ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months);
  ViStatus GetFirFilterCoefficients(ViSession vi, ViConstString channelName, ViInt32 arraySize, ViReal64 coefficientsArray[], ViInt32* numberOfCoefficientsRead);
  ViStatus GetHardwareState(ViSession vi, ViInt32* state);
  ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetSelfCalLastTemp(ViSession vi, ViReal64* temperature);
  ViStatus GetSelfCalSupported(ViSession vi, ViBoolean* selfCalSupported);
  ViStatus GetStreamEndpointHandle(ViSession vi, ViConstString streamEndpoint, ViUInt32* readerHandle);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]);
  ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  ViStatus InitializeWithChannels(ViRsrc resourceName, ViConstString channelName, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  ViStatus InitializeAnalogOutputCalibration(ViSession vi);
  ViStatus InitializeCalAdcCalibration(ViSession vi);
  ViStatus InitializeFlatnessCalibration(ViSession vi);
  ViStatus InitializeOscillatorFrequencyCalibration(ViSession vi);
  ViStatus InitiateGeneration(ViSession vi);
  ViStatus InvalidateAllAttributes(ViSession vi);
  ViStatus IsDone(ViSession vi, ViBoolean* done);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus ManualEnableP2pStream(ViSession vi, ViConstString endpointName);
  ViStatus QueryArbSeqCapabilities(ViSession vi, ViInt32* maximumNumberOfSequences, ViInt32* minimumSequenceLength, ViInt32* maximumSequenceLength, ViInt32* maximumLoopCount);
  ViStatus QueryArbWfmCapabilities(ViSession vi, ViInt32* maximumNumberOfWaveforms, ViInt32* waveformQuantum, ViInt32* minimumWaveformSize, ViInt32* maximumWaveformSize);
  ViStatus QueryFreqListCapabilities(ViSession vi, ViInt32* maximumNumberOfFreqLists, ViInt32* minimumFrequencyListLength, ViInt32* maximumFrequencyListLength, ViReal64* minimumFrequencyListDuration, ViReal64* maximumFrequencyListDuration, ViReal64* frequencyListDurationQuantum);
  ViStatus ReadCalAdc(ViSession vi, ViInt32 numberOfReadsToAverage, ViBoolean returnCalibratedValue, ViReal64* calAdcValue);
  ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature);
  ViStatus Reset(ViSession vi);
  ViStatus ResetAttribute(ViSession vi, ViConstString channelName, ViAttr attributeId);
  ViStatus ResetDevice(ViSession vi);
  ViStatus ResetInterchangeCheck(ViSession vi);
  ViStatus ResetWithDefaults(ViSession vi);
  ViStatus RestoreLastExtCalConstants(ViSession vi);
  ViStatus RouteSignalOut(ViSession vi, ViConstString channelName, ViInt32 routeSignalFrom, ViInt32 routeSignalTo);
  ViStatus SelfCal(ViSession vi);
  ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus SendSoftwareTrigger(ViSession vi);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  ViStatus SetCalUserDefinedInfo(ViSession vi, ViConstString info);
  ViStatus SetNamedWaveformNextWritePosition(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 relativeTo, ViInt32 offset);
  ViStatus SetWaveformNextWritePosition(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 relativeTo, ViInt32 offset);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus WaitUntilDone(ViSession vi, ViInt32 maxTime);
  ViStatus WriteBinary16AnalogStaticValue(ViSession vi, ViConstString channelName, ViInt16 value);
  ViStatus WriteBinary16Waveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViInt16 data[]);
  ViStatus WriteNamedWaveformF64(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViReal64 data[]);
  ViStatus WriteNamedWaveformI16(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViInt16 data[]);
  ViStatus WriteScript(ViSession vi, ViConstString channelName, ViConstString script);
  ViStatus WriteWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViReal64 data[]);

 private:
  using AbortGenerationPtr = ViStatus (*)(ViSession vi);
  using AdjustSampleClockRelativeDelayPtr = ViStatus (*)(ViSession vi, ViReal64 adjustmentTime);
  using AllocateNamedWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 waveformSize);
  using AllocateWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt32* waveformHandle);
  using CalAdjustDirectPathOutputImpedancePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad);
  using CalAdjustMainPathOutputImpedancePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad);
  using CalAdjustOscillatorFrequencyPtr = ViStatus (*)(ViSession vi, ViReal64 desiredFrequency, ViReal64 measuredFrequency);
  using ChangeExtCalPasswordPtr = ViStatus (*)(ViSession vi, ViConstString oldPassword, ViConstString newPassword);
  using CheckAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  using CheckAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  using CheckAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  using CheckAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  using CheckAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  using CheckAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  using ClearArbMemoryPtr = ViStatus (*)(ViSession vi);
  using ClearArbSequencePtr = ViStatus (*)(ViSession vi, ViInt32 sequenceHandle);
  using ClearArbWaveformPtr = ViStatus (*)(ViSession vi, ViInt32 waveformHandle);
  using ClearErrorPtr = ViStatus (*)(ViSession vi);
  using ClearFreqListPtr = ViStatus (*)(ViSession vi, ViInt32 frequencyListHandle);
  using ClearInterchangeWarningsPtr = ViStatus (*)(ViSession vi);
  using ClearUserStandardWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName);
  using ClosePtr = ViStatus (*)(ViSession vi);
  using CloseExtCalPtr = ViStatus (*)(ViSession vi, ViInt32 action);
  using CommitPtr = ViStatus (*)(ViSession vi);
  using ConfigureAmplitudePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViReal64 amplitude);
  using ConfigureArbSequencePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 sequenceHandle, ViReal64 gain, ViReal64 offset);
  using ConfigureArbWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViReal64 gain, ViReal64 offset);
  using ConfigureChannelsPtr = ViStatus (*)(ViSession vi, ViConstString channels);
  using ConfigureClockModePtr = ViStatus (*)(ViSession vi, ViInt32 clockMode);
  using ConfigureCustomFirFilterCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 numberOfCoefficients, ViReal64 coefficientsArray[]);
  using ConfigureDigitalEdgeScriptTriggerPtr = ViStatus (*)(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 edge);
  using ConfigureDigitalEdgeStartTriggerPtr = ViStatus (*)(ViSession vi, ViConstString source, ViInt32 edge);
  using ConfigureDigitalLevelScriptTriggerPtr = ViStatus (*)(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 triggerWhen);
  using ConfigureFreqListPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 frequencyListHandle, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 startPhase);
  using ConfigureFrequencyPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViReal64 frequency);
  using ConfigureGainPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViReal64 gain);
  using ConfigureOperationModePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 operationMode);
  using ConfigureOutputEnabledPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViBoolean enabled);
  using ConfigureOutputImpedancePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViReal64 impedance);
  using ConfigureOutputModePtr = ViStatus (*)(ViSession vi, ViInt32 outputMode);
  using ConfigureP2pEndpointFullnessStartTriggerPtr = ViStatus (*)(ViSession vi, ViInt32 p2pEndpointFullnessLevel);
  using ConfigureRefClockFrequencyPtr = ViStatus (*)(ViSession vi, ViReal64 referenceClockFrequency);
  using ConfigureRefClockSourcePtr = ViStatus (*)(ViSession vi, ViInt32 referenceClockSource);
  using ConfigureReferenceClockPtr = ViStatus (*)(ViSession vi, ViConstString referenceClockSource, ViReal64 referenceClockFrequency);
  using ConfigureSampleClockSourcePtr = ViStatus (*)(ViSession vi, ViConstString sampleClockSource);
  using ConfigureSampleRatePtr = ViStatus (*)(ViSession vi, ViReal64 sampleRate);
  using ConfigureSoftwareEdgeScriptTriggerPtr = ViStatus (*)(ViSession vi, ViConstString triggerId);
  using ConfigureSoftwareEdgeStartTriggerPtr = ViStatus (*)(ViSession vi);
  using ConfigureStandardWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveform, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 frequency, ViReal64 startPhase);
  using ConfigureSynchronizationPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 synchronizationSource);
  using ConfigureTriggerModePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 triggerMode);
  using ConfigureTriggerSourcePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 triggerSource);
  using ConfigureUpdateClockSourcePtr = ViStatus (*)(ViSession vi, ViInt32 updateClockSource);
  using CreateArbSequencePtr = ViStatus (*)(ViSession vi, ViInt32 sequenceLength, ViInt32 waveformHandlesArray[], ViInt32 loopCountsArray[], ViInt32* sequenceHandle);
  using CreateFreqListPtr = ViStatus (*)(ViSession vi, ViInt32 waveform, ViInt32 frequencyListLength, ViReal64 frequencyArray[], ViReal64 durationArray[], ViInt32* frequencyListHandle);
  using CreateWaveformF64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[], ViInt32* waveformHandle);
  using CreateWaveformFromFileF64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle);
  using CreateWaveformFromFileHwsPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString fileName, ViBoolean useRateFromWaveform, ViBoolean useGainAndOffsetFromWaveform, ViInt32* waveformHandle);
  using CreateWaveformFromFileI16Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle);
  using CreateWaveformI16Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt16 waveformDataArray[], ViInt32* waveformHandle);
  using DefineUserStandardWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[]);
  using DeleteNamedWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString waveformName);
  using DeleteScriptPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString scriptName);
  using DisablePtr = ViStatus (*)(ViSession vi);
  using DisableAnalogFilterPtr = ViStatus (*)(ViSession vi, ViConstString channelName);
  using DisableDigitalFilterPtr = ViStatus (*)(ViSession vi, ViConstString channelName);
  using DisableDigitalPatterningPtr = ViStatus (*)(ViSession vi, ViConstString channelName);
  using DisableScriptTriggerPtr = ViStatus (*)(ViSession vi, ViConstString triggerId);
  using DisableStartTriggerPtr = ViStatus (*)(ViSession vi);
  using EnableAnalogFilterPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViReal64 filterCorrectionFrequency);
  using EnableDigitalFilterPtr = ViStatus (*)(ViSession vi, ViConstString channelName);
  using EnableDigitalPatterningPtr = ViStatus (*)(ViSession vi, ViConstString channelName);
  using ErrorMessagePtr = ViStatus (*)(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  using ExportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]);
  using ExportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using ExportSignalPtr = ViStatus (*)(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  using GetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  using GetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  using GetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue);
  using GetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  using GetAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue);
  using GetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 arraySize, ViChar attributeValue[]);
  using GetCalUserDefinedInfoPtr = ViStatus (*)(ViSession vi, ViChar info[256]);
  using GetCalUserDefinedInfoMaxSizePtr = ViStatus (*)(ViSession vi, ViInt32* infoSize);
  using GetChannelNamePtr = ViStatus (*)(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[]);
  using GetErrorPtr = ViStatus (*)(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]);
  using GetExtCalLastDateAndTimePtr = ViStatus (*)(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  using GetExtCalLastTempPtr = ViStatus (*)(ViSession vi, ViReal64* temperature);
  using GetExtCalRecommendedIntervalPtr = ViStatus (*)(ViSession vi, ViInt32* months);
  using GetFirFilterCoefficientsPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 arraySize, ViReal64 coefficientsArray[], ViInt32* numberOfCoefficientsRead);
  using GetHardwareStatePtr = ViStatus (*)(ViSession vi, ViInt32* state);
  using GetSelfCalLastDateAndTimePtr = ViStatus (*)(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  using GetSelfCalLastTempPtr = ViStatus (*)(ViSession vi, ViReal64* temperature);
  using GetSelfCalSupportedPtr = ViStatus (*)(ViSession vi, ViBoolean* selfCalSupported);
  using GetStreamEndpointHandlePtr = ViStatus (*)(ViSession vi, ViConstString streamEndpoint, ViUInt32* readerHandle);
  using ImportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]);
  using ImportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using InitWithOptionsPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  using InitializeWithChannelsPtr = ViStatus (*)(ViRsrc resourceName, ViConstString channelName, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  using InitializeAnalogOutputCalibrationPtr = ViStatus (*)(ViSession vi);
  using InitializeCalAdcCalibrationPtr = ViStatus (*)(ViSession vi);
  using InitializeFlatnessCalibrationPtr = ViStatus (*)(ViSession vi);
  using InitializeOscillatorFrequencyCalibrationPtr = ViStatus (*)(ViSession vi);
  using InitiateGenerationPtr = ViStatus (*)(ViSession vi);
  using InvalidateAllAttributesPtr = ViStatus (*)(ViSession vi);
  using IsDonePtr = ViStatus (*)(ViSession vi, ViBoolean* done);
  using LockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using ManualEnableP2pStreamPtr = ViStatus (*)(ViSession vi, ViConstString endpointName);
  using QueryArbSeqCapabilitiesPtr = ViStatus (*)(ViSession vi, ViInt32* maximumNumberOfSequences, ViInt32* minimumSequenceLength, ViInt32* maximumSequenceLength, ViInt32* maximumLoopCount);
  using QueryArbWfmCapabilitiesPtr = ViStatus (*)(ViSession vi, ViInt32* maximumNumberOfWaveforms, ViInt32* waveformQuantum, ViInt32* minimumWaveformSize, ViInt32* maximumWaveformSize);
  using QueryFreqListCapabilitiesPtr = ViStatus (*)(ViSession vi, ViInt32* maximumNumberOfFreqLists, ViInt32* minimumFrequencyListLength, ViInt32* maximumFrequencyListLength, ViReal64* minimumFrequencyListDuration, ViReal64* maximumFrequencyListDuration, ViReal64* frequencyListDurationQuantum);
  using ReadCalAdcPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfReadsToAverage, ViBoolean returnCalibratedValue, ViReal64* calAdcValue);
  using ReadCurrentTemperaturePtr = ViStatus (*)(ViSession vi, ViReal64* temperature);
  using ResetPtr = ViStatus (*)(ViSession vi);
  using ResetAttributePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId);
  using ResetDevicePtr = ViStatus (*)(ViSession vi);
  using ResetInterchangeCheckPtr = ViStatus (*)(ViSession vi);
  using ResetWithDefaultsPtr = ViStatus (*)(ViSession vi);
  using RestoreLastExtCalConstantsPtr = ViStatus (*)(ViSession vi);
  using RouteSignalOutPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 routeSignalFrom, ViInt32 routeSignalTo);
  using SelfCalPtr = ViStatus (*)(ViSession vi);
  using SelfTestPtr = ViStatus (*)(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  using SendSoftwareTriggerPtr = ViStatus (*)(ViSession vi);
  using SetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  using SetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  using SetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  using SetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  using SetAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  using SetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  using SetCalUserDefinedInfoPtr = ViStatus (*)(ViSession vi, ViConstString info);
  using SetNamedWaveformNextWritePositionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 relativeTo, ViInt32 offset);
  using SetWaveformNextWritePositionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 relativeTo, ViInt32 offset);
  using UnlockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using WaitUntilDonePtr = ViStatus (*)(ViSession vi, ViInt32 maxTime);
  using WriteBinary16AnalogStaticValuePtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt16 value);
  using WriteBinary16WaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViInt16 data[]);
  using WriteNamedWaveformF64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViReal64 data[]);
  using WriteNamedWaveformI16Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViInt16 data[]);
  using WriteScriptPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViConstString script);
  using WriteWaveformPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViReal64 data[]);

  typedef struct FunctionPointers {
    AbortGenerationPtr AbortGeneration;
    AdjustSampleClockRelativeDelayPtr AdjustSampleClockRelativeDelay;
    AllocateNamedWaveformPtr AllocateNamedWaveform;
    AllocateWaveformPtr AllocateWaveform;
    CalAdjustDirectPathOutputImpedancePtr CalAdjustDirectPathOutputImpedance;
    CalAdjustMainPathOutputImpedancePtr CalAdjustMainPathOutputImpedance;
    CalAdjustOscillatorFrequencyPtr CalAdjustOscillatorFrequency;
    ChangeExtCalPasswordPtr ChangeExtCalPassword;
    CheckAttributeViBooleanPtr CheckAttributeViBoolean;
    CheckAttributeViInt32Ptr CheckAttributeViInt32;
    CheckAttributeViInt64Ptr CheckAttributeViInt64;
    CheckAttributeViReal64Ptr CheckAttributeViReal64;
    CheckAttributeViSessionPtr CheckAttributeViSession;
    CheckAttributeViStringPtr CheckAttributeViString;
    ClearArbMemoryPtr ClearArbMemory;
    ClearArbSequencePtr ClearArbSequence;
    ClearArbWaveformPtr ClearArbWaveform;
    ClearErrorPtr ClearError;
    ClearFreqListPtr ClearFreqList;
    ClearInterchangeWarningsPtr ClearInterchangeWarnings;
    ClearUserStandardWaveformPtr ClearUserStandardWaveform;
    ClosePtr Close;
    CloseExtCalPtr CloseExtCal;
    CommitPtr Commit;
    ConfigureAmplitudePtr ConfigureAmplitude;
    ConfigureArbSequencePtr ConfigureArbSequence;
    ConfigureArbWaveformPtr ConfigureArbWaveform;
    ConfigureChannelsPtr ConfigureChannels;
    ConfigureClockModePtr ConfigureClockMode;
    ConfigureCustomFirFilterCoefficientsPtr ConfigureCustomFirFilterCoefficients;
    ConfigureDigitalEdgeScriptTriggerPtr ConfigureDigitalEdgeScriptTrigger;
    ConfigureDigitalEdgeStartTriggerPtr ConfigureDigitalEdgeStartTrigger;
    ConfigureDigitalLevelScriptTriggerPtr ConfigureDigitalLevelScriptTrigger;
    ConfigureFreqListPtr ConfigureFreqList;
    ConfigureFrequencyPtr ConfigureFrequency;
    ConfigureGainPtr ConfigureGain;
    ConfigureOperationModePtr ConfigureOperationMode;
    ConfigureOutputEnabledPtr ConfigureOutputEnabled;
    ConfigureOutputImpedancePtr ConfigureOutputImpedance;
    ConfigureOutputModePtr ConfigureOutputMode;
    ConfigureP2pEndpointFullnessStartTriggerPtr ConfigureP2pEndpointFullnessStartTrigger;
    ConfigureRefClockFrequencyPtr ConfigureRefClockFrequency;
    ConfigureRefClockSourcePtr ConfigureRefClockSource;
    ConfigureReferenceClockPtr ConfigureReferenceClock;
    ConfigureSampleClockSourcePtr ConfigureSampleClockSource;
    ConfigureSampleRatePtr ConfigureSampleRate;
    ConfigureSoftwareEdgeScriptTriggerPtr ConfigureSoftwareEdgeScriptTrigger;
    ConfigureSoftwareEdgeStartTriggerPtr ConfigureSoftwareEdgeStartTrigger;
    ConfigureStandardWaveformPtr ConfigureStandardWaveform;
    ConfigureSynchronizationPtr ConfigureSynchronization;
    ConfigureTriggerModePtr ConfigureTriggerMode;
    ConfigureTriggerSourcePtr ConfigureTriggerSource;
    ConfigureUpdateClockSourcePtr ConfigureUpdateClockSource;
    CreateArbSequencePtr CreateArbSequence;
    CreateFreqListPtr CreateFreqList;
    CreateWaveformF64Ptr CreateWaveformF64;
    CreateWaveformFromFileF64Ptr CreateWaveformFromFileF64;
    CreateWaveformFromFileHwsPtr CreateWaveformFromFileHws;
    CreateWaveformFromFileI16Ptr CreateWaveformFromFileI16;
    CreateWaveformI16Ptr CreateWaveformI16;
    DefineUserStandardWaveformPtr DefineUserStandardWaveform;
    DeleteNamedWaveformPtr DeleteNamedWaveform;
    DeleteScriptPtr DeleteScript;
    DisablePtr Disable;
    DisableAnalogFilterPtr DisableAnalogFilter;
    DisableDigitalFilterPtr DisableDigitalFilter;
    DisableDigitalPatterningPtr DisableDigitalPatterning;
    DisableScriptTriggerPtr DisableScriptTrigger;
    DisableStartTriggerPtr DisableStartTrigger;
    EnableAnalogFilterPtr EnableAnalogFilter;
    EnableDigitalFilterPtr EnableDigitalFilter;
    EnableDigitalPatterningPtr EnableDigitalPatterning;
    ErrorMessagePtr ErrorMessage;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    ExportAttributeConfigurationFilePtr ExportAttributeConfigurationFile;
    ExportSignalPtr ExportSignal;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetCalUserDefinedInfoPtr GetCalUserDefinedInfo;
    GetCalUserDefinedInfoMaxSizePtr GetCalUserDefinedInfoMaxSize;
    GetChannelNamePtr GetChannelName;
    GetErrorPtr GetError;
    GetExtCalLastDateAndTimePtr GetExtCalLastDateAndTime;
    GetExtCalLastTempPtr GetExtCalLastTemp;
    GetExtCalRecommendedIntervalPtr GetExtCalRecommendedInterval;
    GetFirFilterCoefficientsPtr GetFirFilterCoefficients;
    GetHardwareStatePtr GetHardwareState;
    GetSelfCalLastDateAndTimePtr GetSelfCalLastDateAndTime;
    GetSelfCalLastTempPtr GetSelfCalLastTemp;
    GetSelfCalSupportedPtr GetSelfCalSupported;
    GetStreamEndpointHandlePtr GetStreamEndpointHandle;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    ImportAttributeConfigurationFilePtr ImportAttributeConfigurationFile;
    InitWithOptionsPtr InitWithOptions;
    InitializeWithChannelsPtr InitializeWithChannels;
    InitializeAnalogOutputCalibrationPtr InitializeAnalogOutputCalibration;
    InitializeCalAdcCalibrationPtr InitializeCalAdcCalibration;
    InitializeFlatnessCalibrationPtr InitializeFlatnessCalibration;
    InitializeOscillatorFrequencyCalibrationPtr InitializeOscillatorFrequencyCalibration;
    InitiateGenerationPtr InitiateGeneration;
    InvalidateAllAttributesPtr InvalidateAllAttributes;
    IsDonePtr IsDone;
    LockSessionPtr LockSession;
    ManualEnableP2pStreamPtr ManualEnableP2pStream;
    QueryArbSeqCapabilitiesPtr QueryArbSeqCapabilities;
    QueryArbWfmCapabilitiesPtr QueryArbWfmCapabilities;
    QueryFreqListCapabilitiesPtr QueryFreqListCapabilities;
    ReadCalAdcPtr ReadCalAdc;
    ReadCurrentTemperaturePtr ReadCurrentTemperature;
    ResetPtr Reset;
    ResetAttributePtr ResetAttribute;
    ResetDevicePtr ResetDevice;
    ResetInterchangeCheckPtr ResetInterchangeCheck;
    ResetWithDefaultsPtr ResetWithDefaults;
    RestoreLastExtCalConstantsPtr RestoreLastExtCalConstants;
    RouteSignalOutPtr RouteSignalOut;
    SelfCalPtr SelfCal;
    SelfTestPtr SelfTest;
    SendSoftwareTriggerPtr SendSoftwareTrigger;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViSessionPtr SetAttributeViSession;
    SetAttributeViStringPtr SetAttributeViString;
    SetCalUserDefinedInfoPtr SetCalUserDefinedInfo;
    SetNamedWaveformNextWritePositionPtr SetNamedWaveformNextWritePosition;
    SetWaveformNextWritePositionPtr SetWaveformNextWritePosition;
    UnlockSessionPtr UnlockSession;
    WaitUntilDonePtr WaitUntilDone;
    WriteBinary16AnalogStaticValuePtr WriteBinary16AnalogStaticValue;
    WriteBinary16WaveformPtr WriteBinary16Waveform;
    WriteNamedWaveformF64Ptr WriteNamedWaveformF64;
    WriteNamedWaveformI16Ptr WriteNamedWaveformI16;
    WriteScriptPtr WriteScript;
    WriteWaveformPtr WriteWaveform;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nifgen_grpc

#endif  // NIFGEN_GRPC_LIBRARY_H
