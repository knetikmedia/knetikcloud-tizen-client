/*
 * SamiPermission.h
 * 
 * 
 */

#ifndef SamiPermission_H_
#define SamiPermission_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiRole.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiPermission: public SamiObject {
public:
    SamiPermission();
    SamiPermission(String* json);
    virtual ~SamiPermission();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPermission* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Integer* getPId();
    void setPId(Integer* pId);
    Boolean* getPLocked();
    void setPLocked(Boolean* pLocked);
    String* getPName();
    void setPName(String* pName);
    String* getPParent();
    void setPParent(String* pParent);
    String* getPPermission();
    void setPPermission(String* pPermission);
    IList* getPPermissionRole();
    void setPPermissionRole(IList* pPermission_role);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Long* pCreated_date;
String* pDescription;
Integer* pId;
Boolean* pLocked;
String* pName;
String* pParent;
String* pPermission;
IList* pPermission_role;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiPermission_H_ */
