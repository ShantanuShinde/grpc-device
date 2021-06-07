//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-FAKE
//---------------------------------------------------------------------
#ifndef NIFAKE_GRPC_LIBRARY_H
#define NIFAKE_GRPC_LIBRARY_H

#include "nifake_library_interface.h"

#include <server/shared_library.h>

namespace nifake_grpc {

class NiFakeLibrary : public nifake_grpc::NiFakeLibraryInterface {
 public:
  NiFakeLibrary();
  virtual ~NiFakeLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Abort(ViSession vi);
  ViStatus AcceptListOfDurationsInSeconds(ViSession vi, ViInt32 count, ViReal64 delays[]);
  ViStatus AcceptViSessionArray(ViUInt32 sessionCount, ViSession sessionArray[]);
  ViStatus AcceptViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]);
  ViStatus BoolArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]);
  ViStatus BoolArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]);
  ViStatus DoubleAllTheNums(ViSession vi, ViInt32 numberCount, ViReal64 numbers[]);
  ViStatus EnumArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[]);
  ViStatus EnumInputFunctionWithDefaults(ViSession vi, ViInt16 aTurtle);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus FetchWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveformData[], ViInt32* actualNumberOfSamples);
  ViStatus GetABoolean(ViSession vi, ViBoolean* aBoolean);
  ViStatus GetANumber(ViSession vi, ViInt16* aNumber);
  ViStatus GetAStringOfFixedMaximumSize(ViSession vi, ViChar aString[256]);
  ViStatus GetAnIviDanceString(ViSession vi, ViInt32 bufferSize, ViChar aString[]);
  ViStatus GetAnIviDanceWithATwistArray(ViSession vi, ViConstString aString, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize);
  ViStatus GetArraySizeForCustomCode(ViSession vi, ViInt32* sizeOut);
  ViStatus GetArrayUsingIviDance(ViSession vi, ViInt32 arraySize, ViReal64 arrayOut[]);
  ViStatus GetArrayViUInt8WithEnum(ViSession vi, ViInt32 arrayLen, ViUInt8 uInt8EnumArray[]);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]);
  ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute);
  ViStatus GetCalInterval(ViSession vi, ViInt32* months);
  ViStatus GetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]);
  ViStatus GetEnumValue(ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  ViStatus GetViUInt8(ViSession vi, ViUInt8* aUint8Number);
  ViStatus GetViInt32Array(ViSession vi, ViInt32 arrayLen, ViInt32 int32Array[]);
  ViStatus GetViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  ViStatus Initiate(ViSession vi);
  ViStatus InitExtCal(ViRsrc resourceName, ViString calibrationPassword, ViSession* vi);
  ViStatus MultipleArrayTypes(ViSession vi, ViInt32 outputArraySize, ViReal64 outputArray[], ViReal64 outputArrayOfFixedLength[3], ViInt32 inputArraySizes, ViReal64 inputArrayOfFloats[], ViInt16 inputArrayOfIntegers[]);
  ViStatus MultipleArraysSameSize(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], ViInt32 size);
  ViStatus OneInputFunction(ViSession vi, ViInt32 aNumber);
  ViStatus ParametersAreMultipleTypes(ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViInt32 stringSize, ViConstString aString);
  ViStatus PoorlyNamedSimpleFunction(ViSession vi);
  ViStatus Read(ViSession vi, ViReal64 maximumTime, ViReal64* reading);
  ViStatus ReadFromChannel(ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading);
  ViStatus ReturnANumberAndAString(ViSession vi, ViInt16* aNumber, ViChar aString[256]);
  ViStatus ReturnDurationInSeconds(ViSession vi, ViReal64* timedelta);
  ViStatus ReturnListOfDurationsInSeconds(ViSession vi, ViInt32 numberOfElements, ViReal64 timedeltas[]);
  ViStatus ReturnMultipleTypes(ViSession vi, ViBoolean* aBoolean, ViInt32* anInt32, ViInt64* anInt64, ViInt16* anIntEnum, ViReal64* aFloat, ViReal64* aFloatEnum, ViInt32 arraySize, ViReal64 anArray[], ViInt32 stringSize, ViChar aString[]);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  ViStatus SetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]);
  ViStatus StringValuedEnumInputFunctionWithDefaults(ViSession vi, ViConstString aMobileOSName);
  ViStatus TwoInputFunction(ViSession vi, ViReal64 aNumber, ViString aString);
  ViStatus Use64BitNumber(ViSession vi, ViInt64 input, ViInt64* output);
  ViStatus WriteWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveform[]);
  ViStatus close(ViSession vi);
  ViStatus CloseExtCal(ViSession vi, ViInt32 action);
  ViStatus error_message(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus ViUInt8ArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]);
  ViStatus ViUInt8ArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]);

 private:
  using AbortPtr = ViStatus (*)(ViSession vi);
  using AcceptListOfDurationsInSecondsPtr = ViStatus (*)(ViSession vi, ViInt32 count, ViReal64 delays[]);
  using AcceptViSessionArrayPtr = ViStatus (*)(ViUInt32 sessionCount, ViSession sessionArray[]);
  using AcceptViUInt32ArrayPtr = ViStatus (*)(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]);
  using BoolArrayOutputFunctionPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]);
  using BoolArrayInputFunctionPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]);
  using DoubleAllTheNumsPtr = ViStatus (*)(ViSession vi, ViInt32 numberCount, ViReal64 numbers[]);
  using EnumArrayOutputFunctionPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[]);
  using EnumInputFunctionWithDefaultsPtr = ViStatus (*)(ViSession vi, ViInt16 aTurtle);
  using ExportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  using FetchWaveformPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveformData[], ViInt32* actualNumberOfSamples);
  using GetABooleanPtr = ViStatus (*)(ViSession vi, ViBoolean* aBoolean);
  using GetANumberPtr = ViStatus (*)(ViSession vi, ViInt16* aNumber);
  using GetAStringOfFixedMaximumSizePtr = ViStatus (*)(ViSession vi, ViChar aString[256]);
  using GetAnIviDanceStringPtr = ViStatus (*)(ViSession vi, ViInt32 bufferSize, ViChar aString[]);
  using GetAnIviDanceWithATwistArrayPtr = ViStatus (*)(ViSession vi, ViConstString aString, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize);
  using GetArraySizeForCustomCodePtr = ViStatus (*)(ViSession vi, ViInt32* sizeOut);
  using GetArrayUsingIviDancePtr = ViStatus (*)(ViSession vi, ViInt32 arraySize, ViReal64 arrayOut[]);
  using GetArrayViUInt8WithEnumPtr = ViStatus (*)(ViSession vi, ViInt32 arrayLen, ViUInt8 uInt8EnumArray[]);
  using GetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  using GetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  using GetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue);
  using GetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  using GetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]);
  using GetCalDateAndTimePtr = ViStatus (*)(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute);
  using GetCalIntervalPtr = ViStatus (*)(ViSession vi, ViInt32* months);
  using GetCustomTypeArrayPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]);
  using GetEnumValuePtr = ViStatus (*)(ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle);
  using GetErrorPtr = ViStatus (*)(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  using GetViUInt8Ptr = ViStatus (*)(ViSession vi, ViUInt8* aUint8Number);
  using GetViInt32ArrayPtr = ViStatus (*)(ViSession vi, ViInt32 arrayLen, ViInt32 int32Array[]);
  using GetViUInt32ArrayPtr = ViStatus (*)(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]);
  using ImportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  using InitWithOptionsPtr = ViStatus (*)(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi);
  using InitiatePtr = ViStatus (*)(ViSession vi);
  using InitExtCalPtr = ViStatus (*)(ViRsrc resourceName, ViString calibrationPassword, ViSession* vi);
  using MultipleArrayTypesPtr = ViStatus (*)(ViSession vi, ViInt32 outputArraySize, ViReal64 outputArray[], ViReal64 outputArrayOfFixedLength[3], ViInt32 inputArraySizes, ViReal64 inputArrayOfFloats[], ViInt16 inputArrayOfIntegers[]);
  using MultipleArraysSameSizePtr = ViStatus (*)(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], ViInt32 size);
  using OneInputFunctionPtr = ViStatus (*)(ViSession vi, ViInt32 aNumber);
  using ParametersAreMultipleTypesPtr = ViStatus (*)(ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViInt32 stringSize, ViConstString aString);
  using PoorlyNamedSimpleFunctionPtr = ViStatus (*)(ViSession vi);
  using ReadPtr = ViStatus (*)(ViSession vi, ViReal64 maximumTime, ViReal64* reading);
  using ReadFromChannelPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading);
  using ReturnANumberAndAStringPtr = ViStatus (*)(ViSession vi, ViInt16* aNumber, ViChar aString[256]);
  using ReturnDurationInSecondsPtr = ViStatus (*)(ViSession vi, ViReal64* timedelta);
  using ReturnListOfDurationsInSecondsPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, ViReal64 timedeltas[]);
  using ReturnMultipleTypesPtr = ViStatus (*)(ViSession vi, ViBoolean* aBoolean, ViInt32* anInt32, ViInt64* anInt64, ViInt16* anIntEnum, ViReal64* aFloat, ViReal64* aFloatEnum, ViInt32 arraySize, ViReal64 anArray[], ViInt32 stringSize, ViChar aString[]);
  using SetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  using SetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  using SetAttributeViInt64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  using SetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  using SetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  using SetCustomTypeArrayPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]);
  using StringValuedEnumInputFunctionWithDefaultsPtr = ViStatus (*)(ViSession vi, ViConstString aMobileOSName);
  using TwoInputFunctionPtr = ViStatus (*)(ViSession vi, ViReal64 aNumber, ViString aString);
  using Use64BitNumberPtr = ViStatus (*)(ViSession vi, ViInt64 input, ViInt64* output);
  using WriteWaveformPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveform[]);
  using closePtr = ViStatus (*)(ViSession vi);
  using CloseExtCalPtr = ViStatus (*)(ViSession vi, ViInt32 action);
  using error_messagePtr = ViStatus (*)(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  using self_testPtr = ViStatus (*)(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  using ViUInt8ArrayInputFunctionPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]);
  using ViUInt8ArrayOutputFunctionPtr = ViStatus (*)(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]);

  typedef struct FunctionPointers {
    AbortPtr Abort;
    AcceptListOfDurationsInSecondsPtr AcceptListOfDurationsInSeconds;
    AcceptViSessionArrayPtr AcceptViSessionArray;
    AcceptViUInt32ArrayPtr AcceptViUInt32Array;
    BoolArrayOutputFunctionPtr BoolArrayOutputFunction;
    BoolArrayInputFunctionPtr BoolArrayInputFunction;
    DoubleAllTheNumsPtr DoubleAllTheNums;
    EnumArrayOutputFunctionPtr EnumArrayOutputFunction;
    EnumInputFunctionWithDefaultsPtr EnumInputFunctionWithDefaults;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    FetchWaveformPtr FetchWaveform;
    GetABooleanPtr GetABoolean;
    GetANumberPtr GetANumber;
    GetAStringOfFixedMaximumSizePtr GetAStringOfFixedMaximumSize;
    GetAnIviDanceStringPtr GetAnIviDanceString;
    GetAnIviDanceWithATwistArrayPtr GetAnIviDanceWithATwistArray;
    GetArraySizeForCustomCodePtr GetArraySizeForCustomCode;
    GetArrayUsingIviDancePtr GetArrayUsingIviDance;
    GetArrayViUInt8WithEnumPtr GetArrayViUInt8WithEnum;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViStringPtr GetAttributeViString;
    GetCalDateAndTimePtr GetCalDateAndTime;
    GetCalIntervalPtr GetCalInterval;
    GetCustomTypeArrayPtr GetCustomTypeArray;
    GetEnumValuePtr GetEnumValue;
    GetErrorPtr GetError;
    GetViUInt8Ptr GetViUInt8;
    GetViInt32ArrayPtr GetViInt32Array;
    GetViUInt32ArrayPtr GetViUInt32Array;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    InitWithOptionsPtr InitWithOptions;
    InitiatePtr Initiate;
    InitExtCalPtr InitExtCal;
    MultipleArrayTypesPtr MultipleArrayTypes;
    MultipleArraysSameSizePtr MultipleArraysSameSize;
    OneInputFunctionPtr OneInputFunction;
    ParametersAreMultipleTypesPtr ParametersAreMultipleTypes;
    PoorlyNamedSimpleFunctionPtr PoorlyNamedSimpleFunction;
    ReadPtr Read;
    ReadFromChannelPtr ReadFromChannel;
    ReturnANumberAndAStringPtr ReturnANumberAndAString;
    ReturnDurationInSecondsPtr ReturnDurationInSeconds;
    ReturnListOfDurationsInSecondsPtr ReturnListOfDurationsInSeconds;
    ReturnMultipleTypesPtr ReturnMultipleTypes;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViStringPtr SetAttributeViString;
    SetCustomTypeArrayPtr SetCustomTypeArray;
    StringValuedEnumInputFunctionWithDefaultsPtr StringValuedEnumInputFunctionWithDefaults;
    TwoInputFunctionPtr TwoInputFunction;
    Use64BitNumberPtr Use64BitNumber;
    WriteWaveformPtr WriteWaveform;
    closePtr close;
    CloseExtCalPtr CloseExtCal;
    error_messagePtr error_message;
    self_testPtr self_test;
    ViUInt8ArrayInputFunctionPtr ViUInt8ArrayInputFunction;
    ViUInt8ArrayOutputFunctionPtr ViUInt8ArrayOutputFunction;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nifake_grpc

#endif  // NIFAKE_GRPC_LIBRARY_H
