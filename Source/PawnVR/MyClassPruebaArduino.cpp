// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClassPruebaArduino.h"

MyClassPruebaArduino::MyClassPruebaArduino()
{
}

MyClassPruebaArduino::~MyClassPruebaArduino()
{
}
/*
Begin Object Class = / Script / BlueprintGraph.K2Node_Event Name = "K2Node_Event_0"
EventReference = (MemberParent = Class'"/Script/Engine.Actor"', MemberName = "ReceiveBeginPlay")
bOverrideFunction = True
NodePosX = 880
NodePosY = -304
NodeGuid = 383A4E4248A16A3D6F951D93FA957DFB
CustomProperties Pin(PinId = ACEB5B50479A946731A548B80ABEC6F2, PinName = "OutputDelegate", Direction = "EGPD_Output", PinType.PinCategory = "delegate", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (MemberParent = Class'"/Script/Engine.Actor"', MemberName = "ReceiveBeginPlay"), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 3AD3A83D48F3FEC46AB1C2B3440732D5, PinName = "then", Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_CallFunction_2 6F95F7C64A711F36FE3B469FC5209D00, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_CallFunction Name = "K2Node_CallFunction_2"
FunctionReference = (MemberParent = Class'"/Script/UE4Duino.Serial"', MemberName = "OpenComPort")
NodePosX = 1136
NodePosY = -320
NodeGuid = 786EE2EE4C7B29AF3123D79377247B51
CustomProperties Pin(PinId = 6F95F7C64A711F36FE3B469FC5209D00, PinName = "execute", PinToolTip = "\nExec", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_Event_0 3AD3A83D48F3FEC46AB1C2B3440732D5, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = F26D4D5044AD5D0C2171F1BF3479DF1C, PinName = "then", PinToolTip = "\nExec", Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_IfThenElse_0 F941ECC042EF7DE56C8BA98F5EF505D8, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 1BBEDA1447B68C14BDE690B43A6BD1FF, PinName = "self", PinFriendlyName = NSLOCTEXT("K2Node", "Target", "Target"), PinToolTip = "Target\nSerial Object Reference", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultObject = "/Script/UE4Duino.Default__Serial", PersistentGuid = 00000000000000000000000000000000, bHidden = True, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = C6C444794015B0A7EEC49D96577AF7E0, PinName = "bOpened", PinToolTip = "Opened\nBoolean\n\nIf the serial port was successfully opened.", Direction = "EGPD_Output", PinType.PinCategory = "bool", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultValue = "false", AutogeneratedDefaultValue = "false", PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = FAC8F68B47763B13F722DE95AF3CB38B, PinName = "Port", PinToolTip = "Port\nInteger\n\nThe serial port to open.", PinType.PinCategory = "int", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultValue = "4", AutogeneratedDefaultValue = "1", PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 557BA79240B7195EEC71FD9E9108578F, PinName = "BaudRate", PinToolTip = "Baud Rate\nInteger\n\nBaudRate to open the serial port with.", PinType.PinCategory = "int", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultValue = "9600", AutogeneratedDefaultValue = "9600", PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 6BB403B940221C8DF32F5CB09D4859A4, PinName = "ReturnValue", PinToolTip = "Return Value\nSerial Object Reference\n\nA Serial instance to work with the opened port.", Direction = "EGPD_Output", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_Knot_1 9EB44F2D4190E0DCA60BEFADB2BA4A7A, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_Event Name = "K2Node_Event_1"
EventReference = (MemberParent = Class'"/Script/Engine.Actor"', MemberName = "ReceiveEndPlay")
bOverrideFunction = True
NodePosX = 880
NodePosY = -96
NodeGuid = 692516FC4022E43DCC12CB8DD883E7D8
CustomProperties Pin(PinId = AF9DD5364974388960DBC7AB3508778D, PinName = "OutputDelegate", Direction = "EGPD_Output", PinType.PinCategory = "delegate", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (MemberParent = Class'"/Script/Engine.Actor"', MemberName = "ReceiveEndPlay"), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 8154A91E411133A3B2D0CBB7539C5567, PinName = "then", Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_IfThenElse_2 C4346CE1438B33C465F52B941D7EA0F7, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = A75E6519438773B938408BB5A8E81CA3, PinName = "EndPlayReason", PinToolTip = "End Play Reason\nEEndPlayReason Enum", Direction = "EGPD_Output", PinType.PinCategory = "byte", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Enum'"/Script/Engine.EEndPlayReason"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultValue = "Destroyed", PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_IfThenElse Name = "K2Node_IfThenElse_0"
NodePosX = 1536
NodePosY = -320
NodeGuid = 798128B34F463E0F657CC7BE91A33FEB
CustomProperties Pin(PinId = F941ECC042EF7DE56C8BA98F5EF505D8, PinName = "execute", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_CallFunction_2 F26D4D5044AD5D0C2171F1BF3479DF1C, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = E6DBC90C4BD441EFC0A077BE82CBB56A, PinName = "Condition", PinType.PinCategory = "bool", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultValue = "true", AutogeneratedDefaultValue = "true", PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 6F9BDA43424FB2CD987AD7B211F07804, PinName = "then", PinFriendlyName = NSLOCTEXT("K2Node", "true", "true"), Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_VariableSet_15 12C2A681439B1A8CE3E593BD046E5DDD, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 654E1DE84CFA462C9BCA1C9189D4AB36, PinName = "else", PinFriendlyName = NSLOCTEXT("K2Node", "false", "false"), Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_VariableSet Name = "K2Node_VariableSet_15"
VariableReference = (MemberName = "Arduino", MemberGuid = C544036E492C34B80A321A86FB8200E1, bSelfContext = True)
NodePosX = 1824
NodePosY = -304
NodeGuid = AF3B2487442E50A1AF791AB65E3C8668
CustomProperties Pin(PinId = 12C2A681439B1A8CE3E593BD046E5DDD, PinName = "execute", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_IfThenElse_0 6F9BDA43424FB2CD987AD7B211F07804, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 47485DBC4037E33683B2ECA760DF4284, PinName = "then", Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_CallFunction_17 1A8A0E2D4A16132B5D7CC599875A7F6E, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = F0D748514649B9B278E44C88D018D977, PinName = "Arduino", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_Knot_1 32040FC642BAEA040198639815A17AE0, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 7AB61C1246F65F62FC21A9BBD649BB9B, PinName = "self", PinFriendlyName = NSLOCTEXT("K2Node", "Target", "Target"), PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = BlueprintGeneratedClass'"/Game/ThirdPersonBP/Maps/ThirdPersonExampleMap.ThirdPersonExampleMap_C"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = True, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 82726E7D42155F28A76EF6B0A6202C80, PinName = "Output_Get", PinToolTip = "Retrieves the value of the variable, can use instead of a separate Get node", Direction = "EGPD_Output", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_CallFunction_17 7C20084946528D20FB57F8911758E2E8, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_Knot Name = "K2Node_Knot_1"
NodePosX = 1760
NodePosY = -240
NodeGuid = E92C18AC4F1FA5529BA50094D1E4252A
CustomProperties Pin(PinId = 9EB44F2D4190E0DCA60BEFADB2BA4A7A, PinName = "InputPin", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_CallFunction_2 6BB403B940221C8DF32F5CB09D4859A4, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = True, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 32040FC642BAEA040198639815A17AE0, PinName = "OutputPin", Direction = "EGPD_Output", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_VariableSet_15 F0D748514649B9B278E44C88D018D977, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_CallFunction Name = "K2Node_CallFunction_17"
FunctionReference = (MemberParent = Class'"/Script/UE4Duino.Serial"', MemberName = "Flush")
NodePosX = 2032
NodePosY = -336
NodeGuid = E168867F4B50811AC5E0A3BE1C11B833
CustomProperties Pin(PinId = 1A8A0E2D4A16132B5D7CC599875A7F6E, PinName = "execute", PinToolTip = "\nExec", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_VariableSet_15 47485DBC4037E33683B2ECA760DF4284, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 7978AFF24A7C391874621FB3B3736ECD, PinName = "then", PinToolTip = "\nExec", Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 7C20084946528D20FB57F8911758E2E8, PinName = "self", PinFriendlyName = NSLOCTEXT("K2Node", "Target", "Target"), PinToolTip = "Target\nSerial Object Reference", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_VariableSet_15 82726E7D42155F28A76EF6B0A6202C80, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_VariableGet Name = "K2Node_VariableGet_24"
VariableReference = (MemberName = "Arduino", MemberGuid = C544036E492C34B80A321A86FB8200E1, bSelfContext = True)
NodePosX = 736
NodePosY = 16
NodeGuid = 8BE49211419E4CB16A468DA14C69D22D
CustomProperties Pin(PinId = 96E9C1D84A71A2D54E3E3094CD95657E, PinName = "Arduino", Direction = "EGPD_Output", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_CallFunction_18 DC6624BB4CD9DCEA8053C29D6CFC51D0, K2Node_CallFunction_19 7212C49B419D5BB8BAD2AA885838CA72, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 3FBC13FE440470C2A292A4B59EF72F3F, PinName = "self", PinFriendlyName = NSLOCTEXT("K2Node", "Target", "Target"), PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = BlueprintGeneratedClass'"/Game/ThirdPersonBP/Maps/ThirdPersonExampleMap.ThirdPersonExampleMap_C"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = True, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_CallFunction Name = "K2Node_CallFunction_18"
FunctionReference = (MemberParent = Class'"/Script/UE4Duino.Serial"', MemberName = "Close")
NodePosX = 1520
NodePosY = -112
NodeGuid = D07918724DDD6FEBEC72C0A76BBF750C
CustomProperties Pin(PinId = C63697624D74C4976A810B8B80246E14, PinName = "execute", PinToolTip = "\nExec", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_IfThenElse_2 0DF662BF43457FF1AF7B23843CCB76A4, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 6B2F9B2A428E564996CE319EC902A06D, PinName = "then", PinToolTip = "\nExec", Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = DC6624BB4CD9DCEA8053C29D6CFC51D0, PinName = "self", PinFriendlyName = NSLOCTEXT("K2Node", "Target", "Target"), PinToolTip = "Target\nSerial Object Reference", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/UE4Duino.Serial"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_VariableGet_24 96E9C1D84A71A2D54E3E3094CD95657E, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_CallFunction Name = "K2Node_CallFunction_19"
bIsPureFunc = True
FunctionReference = (MemberParent = Class'"/Script/Engine.KismetSystemLibrary"', MemberName = "IsValid")
NodePosX = 992
NodePosY = 48
NodeGuid = DFD8705240EBB9EDD62C0CBCCDA7F0BB
CustomProperties Pin(PinId = 0CE77C134BD96CC5D1960C91333C58EF, PinName = "self", PinFriendlyName = NSLOCTEXT("K2Node", "Target", "Target"), PinToolTip = "Target\nKismet System Library Object Reference", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/Engine.KismetSystemLibrary"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultObject = "/Script/Engine.Default__KismetSystemLibrary", PersistentGuid = 00000000000000000000000000000000, bHidden = True, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 7212C49B419D5BB8BAD2AA885838CA72, PinName = "Object", PinToolTip = "Object\nObject Object Reference", PinType.PinCategory = "object", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = Class'"/Script/CoreUObject.Object"', PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = True, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_VariableGet_24 96E9C1D84A71A2D54E3E3094CD95657E, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 63629DBB46D0714329A6C49423680105, PinName = "ReturnValue", PinToolTip = "Return Value\nBoolean", Direction = "EGPD_Output", PinType.PinCategory = "bool", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultValue = "false", AutogeneratedDefaultValue = "false", LinkedTo = (K2Node_IfThenElse_2 D75A0B76409B2EC425877DAFB611B41B, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / BlueprintGraph.K2Node_IfThenElse Name = "K2Node_IfThenElse_2"
NodePosX = 1216
NodePosY = -96
NodeGuid = 70F24B7F46785A356C5482B3FB6913B1
CustomProperties Pin(PinId = C4346CE1438B33C465F52B941D7EA0F7, PinName = "execute", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_Event_1 8154A91E411133A3B2D0CBB7539C5567, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = D75A0B76409B2EC425877DAFB611B41B, PinName = "Condition", PinType.PinCategory = "bool", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, DefaultValue = "true", AutogeneratedDefaultValue = "true", LinkedTo = (K2Node_CallFunction_19 63629DBB46D0714329A6C49423680105, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = 0DF662BF43457FF1AF7B23843CCB76A4, PinName = "then", PinFriendlyName = NSLOCTEXT("K2Node", "true", "true"), Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, LinkedTo = (K2Node_CallFunction_18 C63697624D74C4976A810B8B80246E14, ), PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
CustomProperties Pin(PinId = AA8998104CE1E29FADEF32ADEB29F7BF, PinName = "else", PinFriendlyName = NSLOCTEXT("K2Node", "false", "false"), Direction = "EGPD_Output", PinType.PinCategory = "exec", PinType.PinSubCategory = "", PinType.PinSubCategoryObject = None, PinType.PinSubCategoryMemberReference = (), PinType.PinValueType = (), PinType.ContainerType = None, PinType.bIsArray = False, PinType.bIsReference = False, PinType.bIsConst = False, PinType.bIsWeakPointer = False, PersistentGuid = 00000000000000000000000000000000, bHidden = False, bNotConnectable = False, bDefaultValueIsReadOnly = False, bDefaultValueIsIgnored = False, bAdvancedView = False, bOrphanedPin = False, )
End Object
Begin Object Class = / Script / UnrealEd.EdGraphNode_Comment Name = "EdGraphNode_Comment_1"
NodePosX = 688
NodePosY = -384
NodeWidth = 1546
NodeHeight = 540
NodeComment = "Arduino Plugin Test"
NodeGuid = 6885BFC0440DCB985F8363ABD9FA6F13
End Object
/*