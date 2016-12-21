/*
 * SamiMetricResource.h
 * 
 * 
 */

#ifndef SamiMetricResource_H_
#define SamiMetricResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiMetricResource: public SamiObject {
public:
    SamiMetricResource();
    SamiMetricResource(String* json);
    virtual ~SamiMetricResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMetricResource* fromJson(String* obj);

    Long* getPActivityOccurenceId();
    void setPActivityOccurenceId(Long* pActivity_occurence_id);
    IList* getPTags();
    void setPTags(IList* pTags);
    Long* getPValue();
    void setPValue(Long* pValue);

private:
    Long* pActivity_occurence_id;
IList* pTags;
Long* pValue;
};

} /* namespace Swagger */

#endif /* SamiMetricResource_H_ */
