/*
 * SamiLimitedGettableGroup.h
 * 
 * 
 */

#ifndef SamiLimitedGettableGroup_H_
#define SamiLimitedGettableGroup_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiLimitedGettableGroup: public SamiObject {
public:
    SamiLimitedGettableGroup();
    SamiLimitedGettableGroup(String* json);
    virtual ~SamiLimitedGettableGroup();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLimitedGettableGroup* fromJson(String* obj);

    Boolean* getPActiveOnly();
    void setPActiveOnly(Boolean* pActive_only);
    String* getPName();
    void setPName(String* pName);
    Integer* getPOwnedLimit();
    void setPOwnedLimit(Integer* pOwned_limit);

private:
    Boolean* pActive_only;
String* pName;
Integer* pOwned_limit;
};

} /* namespace Swagger */

#endif /* SamiLimitedGettableGroup_H_ */
