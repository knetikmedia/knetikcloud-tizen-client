/*
 * SamiBareActivityResource.h
 * 
 * 
 */

#ifndef SamiBareActivityResource_H_
#define SamiBareActivityResource_H_

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

class SamiBareActivityResource: public SamiObject {
public:
    SamiBareActivityResource();
    SamiBareActivityResource(String* json);
    virtual ~SamiBareActivityResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBareActivityResource* fromJson(String* obj);

    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPLaunch();
    void setPLaunch(String* pLaunch);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    Boolean* getPTemplate();
    void setPTemplate(Boolean* pTemplate);
    String* getPType();
    void setPType(String* pType);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    Long* pCreated_date;
Long* pId;
String* pLaunch;
String* pLong_description;
String* pName;
String* pShort_description;
Boolean* pTemplate;
String* pType;
String* pUnique_key;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiBareActivityResource_H_ */
