/*
 * SamiGroup.h
 * 
 * 
 */

#ifndef SamiGroup_H_
#define SamiGroup_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiGroup.h"
#include "SamiProperty.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiGroup: public SamiObject {
public:
    SamiGroup();
    SamiGroup(String* json);
    virtual ~SamiGroup();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGroup* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPMemberCount();
    void setPMemberCount(Integer* pMember_count);
    String* getPMessageOfTheDay();
    void setPMessageOfTheDay(String* pMessage_of_the_day);
    String* getPName();
    void setPName(String* pName);
    SamiGroup* getPParent();
    void setPParent(SamiGroup* pParent);
    String* getPPropertiesString();
    void setPPropertiesString(String* pProperties_string);
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
Integer* pId;
Integer* pMember_count;
String* pMessage_of_the_day;
String* pName;
SamiGroup* pParent;
String* pProperties_string;
String* pStatus;
Integer* pSub_member_count;
String* pTemplate;
String* pUnique_name;
};

} /* namespace Swagger */

#endif /* SamiGroup_H_ */
