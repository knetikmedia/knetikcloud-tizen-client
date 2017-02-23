/*
 * SamiItemTemplateResource.h
 * 
 * 
 */

#ifndef SamiItemTemplateResource_H_
#define SamiItemTemplateResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiItemBehaviorDefinitionResource.h"
#include "SamiPropertyDefinitionResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiItemTemplateResource: public SamiObject {
public:
    SamiItemTemplateResource();
    SamiItemTemplateResource(String* json);
    virtual ~SamiItemTemplateResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiItemTemplateResource* fromJson(String* obj);

    IList* getPBehaviors();
    void setPBehaviors(IList* pBehaviors);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);
    IList* getPProperties();
    void setPProperties(IList* pProperties);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    IList* pBehaviors;
Long* pCreated_date;
String* pId;
String* pName;
IList* pProperties;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiItemTemplateResource_H_ */
