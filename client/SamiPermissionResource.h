/*
 * SamiPermissionResource.h
 * 
 * 
 */

#ifndef SamiPermissionResource_H_
#define SamiPermissionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiPermissionResource: public SamiObject {
public:
    SamiPermissionResource();
    SamiPermissionResource(String* json);
    virtual ~SamiPermissionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPermissionResource* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Boolean* getPLocked();
    void setPLocked(Boolean* pLocked);
    String* getPName();
    void setPName(String* pName);
    String* getPParent();
    void setPParent(String* pParent);
    String* getPPermission();
    void setPPermission(String* pPermission);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Long* pCreated_date;
String* pDescription;
Boolean* pLocked;
String* pName;
String* pParent;
String* pPermission;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiPermissionResource_H_ */
