#include<stdio.h>

int main() {
    float electricity, gas, waste;
    int transportation, food, region;
    float carbon_footprint = 0;
// energy 
    printf("Enter your monthly electricity consumption in kWh: ");
    scanf("%f", &electricity);

    printf("Enter your monthly gas usage in therms: ");
    scanf("%f", &gas);

// Transportation 
    printf("Choose your primary mode of transportation (1 = Car, 2 = Bike, 3 = Public Transit): ");
    scanf("%d", &transportation);

// Food 
    printf("Choose your diet type (1 = Meat-based, 2 = Vegetarian, 3 = Vegan): ");
    scanf("%d", &food);

// Waste 
    printf("Enter your monthly waste generated in kgs: ");
    scanf("%f", &waste);

// Region - low/med/high co2 emissopnn
    printf("Choose your region (1 = High CO2 emission country, 2 = Medium, 3 = Low): ");
    scanf("%d", &region);
// calc
    carbon_footprint += (electricity * 0.5) + (gas * 5.3);
    if (transportation == 1) {
        carbon_footprint += 2.3;  // car
    } else if (transportation == 2) {
        carbon_footprint += 0.1;  // bike
    } else {
        carbon_footprint += 0.5;  //public
    }

    if (food == 1) {
        carbon_footprint += 3.0;  //non veg
    } else if (food == 2) {
        carbon_footprint += 1.5;  // veg
    } else {
        carbon_footprint += 0.8;  // vegan
    }

    carbon_footprint += (waste * 0.2);  // Waste in kg

    if (region == 1) {
        carbon_footprint *= 1.2;  // highCO2 region
    } else if (region == 2) {
        carbon_footprint *= 1.0;  // med CO2 region
    } else {
        carbon_footprint *= 0.8;  // Low CO2 region
    }
 printf("Your estimated monthly carbon footprint is: %.2f kg CO2\n", carbon_footprint);

    // tips for reducstion
    if (carbon_footprint < 500) {
        printf("Your CO2 emissions are Low. Great job! Keep it up by:\n");
        printf("- Reducing energy usage further by turning off lights and appliances when not needed.\n");
        printf("- Continuing to opt for sustainable transportation like biking or walking.\n");
    } else if (carbon_footprint < 1000) {
        printf("Your CO2 emissions are in the Medium range. Consider these tips:\n");
        printf("- Try to reduce energy usage by using energy-efficient appliances.\n");
        printf("- Consider reducing car usage by using public transit or carpooling.\n");
        printf("- Reduce food waste and consider a more plant-based diet.\n");
    } else {
        printf("Your CO2 emissions are High. Here are some steps to reduce them:\n");
        printf("- Consider using renewable energy sources like solar panels if possible.\n");
        printf("- Limit car usage by choosing public transport or biking when possible.\n");
        printf("- Reduce meat consumption and focus on a more plant-based diet.\n");
        printf("- Recycle more and try to minimize your waste generation.\n");
    }

    return 0;
}



