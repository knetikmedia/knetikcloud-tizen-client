/*
 * SamiRole.h
 * 
 * 
 */

#ifndef SamiRole_H_
#define SamiRole_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPermission.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiRole: public SamiObject {
public:
    SamiRole();
    SamiRole(String* json);
    virtual ~SamiRole();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRole* fromJson(String* obj);

    Integer* getPClientCount();
    void setPClientCount(Integer* pClient_count);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Integer* getPId();
    void setPId(Integer* pId);
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
Integer* pId;
Boolean* pLocked;
String* pName;
String* pRole;
IList* pRole_permission;
Integer* pUser_count;
};

} /* namespace Swagger */

#endif /* SamiRole_H_ */
