/*
 * SamiRoleResource.h
 * 
 * 
 */

#ifndef SamiRoleResource_H_
#define SamiRoleResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPermissionResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiRoleResource: public SamiObject {
public:
    SamiRoleResource();
    SamiRoleResource(String* json);
    virtual ~SamiRoleResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRoleResource* fromJson(String* obj);

    Integer* getPClientCount();
    void setPClientCount(Integer* pClient_count);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Boolean* getPLocked();
    void setPLocked(Boolean* pLocked);
    String* getPName();
    void setPName(String* pName);
    String* getPRole();
    void setPRole(String* pRole);
    IList* getPRolePermission();
    void setPRolePermission(IList* pRole_permission);
    Integer* getPUserCount();
    void setPUserCount(Integer* pUser_count);

private:
    Integer* pClient_count;
Long* pCreated_date;
Boolean* pLocked;
String* pName;
String* pRole;
IList* pRole_permission;
Integer* pUser_count;
};

} /* namespace Swagger */

#endif /* SamiRoleResource_H_ */
