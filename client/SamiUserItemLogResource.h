/*
 * SamiUserItemLogResource.h
 * 
 * 
 */

#ifndef SamiUserItemLogResource_H_
#define SamiUserItemLogResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleReferenceResource«int».h"
#include "SamiSimpleUserResource.h"
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserItemLogResource: public SamiObject {
public:
    SamiUserItemLogResource();
    SamiUserItemLogResource(String* json);
    virtual ~SamiUserItemLogResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserItemLogResource* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    String* getPInfo();
    void setPInfo(String* pInfo);
    SamiSimpleReferenceResource«int»* getPItem();
    void setPItem(SamiSimpleReferenceResource«int»* pItem);
    Long* getPLogDate();
    void setPLogDate(Long* pLog_date);
    String* getPType();
    void setPType(String* pType);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);
    Integer* getPUserInventory();
    void setPUserInventory(Integer* pUser_inventory);

private:
    Integer* pId;
String* pInfo;
SamiSimpleReferenceResource«int»* pItem;
Long* pLog_date;
String* pType;
SamiSimpleUserResource* pUser;
Integer* pUser_inventory;
};

} /* namespace Swagger */

#endif /* SamiUserItemLogResource_H_ */
