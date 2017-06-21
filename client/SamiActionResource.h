/*
 * SamiActionResource.h
 * 
 * 
 */

#ifndef SamiActionResource_H_
#define SamiActionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiActionVariableResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiActionResource: public SamiObject {
public:
    SamiActionResource();
    SamiActionResource(String* json);
    virtual ~SamiActionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActionResource* fromJson(String* obj);

    String* getPCategory();
    void setPCategory(String* pCategory);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPName();
    void setPName(String* pName);
    IList* getPTags();
    void setPTags(IList* pTags);
    IList* getPVariables();
    void setPVariables(IList* pVariables);

private:
    String* pCategory;
String* pDescription;
String* pName;
IList* pTags;
IList* pVariables;
};

} /* namespace Swagger */

#endif /* SamiActionResource_H_ */
