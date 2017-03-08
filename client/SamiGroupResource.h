/*
 * SamiGroupResource.h
 * 
 * 
 */

#ifndef SamiGroupResource_H_
#define SamiGroupResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiGroupResource: public SamiObject {
public:
    SamiGroupResource();
    SamiGroupResource(String* json);
    virtual ~SamiGroupResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGroupResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Integer* getPMemberCount();
    void setPMemberCount(Integer* pMember_count);
    String* getPMessageOfTheDay();
    void setPMessageOfTheDay(String* pMessage_of_the_day);
    String* getPName();
    void setPName(String* pName);
    String* getPParent();
    void setPParent(String* pParent);
    String* getPStatus();
    void setPStatus(String* pStatus);
    Integer* getPSubMemberCount();
    void setPSubMemberCount(Integer* pSub_member_count);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    String* getPUniqueName();
    void setPUniqueName(String* pUnique_name);

private:
    HashMap* pAdditional_properties;
String* pDescription;
Integer* pMember_count;
String* pMessage_of_the_day;
String* pName;
String* pParent;
String* pStatus;
Integer* pSub_member_count;
String* pTemplate;
String* pUnique_name;
};

} /* namespace Swagger */

#endif /* SamiGroupResource_H_ */
