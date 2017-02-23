/*
 * SamiDeviceResource.h
 * 
 * 
 */

#ifndef SamiDeviceResource_H_
#define SamiDeviceResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleUserResource.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiDeviceResource: public SamiObject {
public:
    SamiDeviceResource();
    SamiDeviceResource(String* json);
    virtual ~SamiDeviceResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDeviceResource* fromJson(String* obj);

    String* getPAuthorization();
    void setPAuthorization(String* pAuthorization);
    String* getPCondition();
    void setPCondition(String* pCondition);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    HashMap* getPData();
    void setPData(HashMap* pData);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPDeviceType();
    void setPDeviceType(String* pDevice_type);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPLocation();
    void setPLocation(String* pLocation);
    String* getPMacAddress();
    void setPMacAddress(String* pMac_address);
    String* getPMake();
    void setPMake(String* pMake);
    String* getPModel();
    void setPModel(String* pModel);
    String* getPName();
    void setPName(String* pName);
    String* getPOs();
    void setPOs(String* pOs);
    String* getPSerial();
    void setPSerial(String* pSerial);
    String* getPStatus();
    void setPStatus(String* pStatus);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    String* pAuthorization;
String* pCondition;
Long* pCreated_date;
HashMap* pData;
String* pDescription;
String* pDevice_type;
Integer* pId;
String* pLocation;
String* pMac_address;
String* pMake;
String* pModel;
String* pName;
String* pOs;
String* pSerial;
String* pStatus;
Long* pUpdated_date;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiDeviceResource_H_ */
