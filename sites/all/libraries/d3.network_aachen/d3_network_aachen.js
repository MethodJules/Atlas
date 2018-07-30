/**
 * @file
 * Javascript for [library name].
 */

(function($) {

    /**
     * Adds library to the global d3 object.
     *
     * @param select
     * @param settings
     *   Array of values passed to d3_draw.
     *   id: required. This will be needed to attach your
     *       visualization to the DOM.
     */
    Drupal.d3.network_aachen = function (select, settings) {
        // Your custom JS.
        div = (settings.id) ? settings.id: 'visualization';

        //var svg = d3.select('#' + div)
        //            .append("svg")
        //            .attr({"width":"100%", "heigt": "100%"})
        //            .append("g");

        //farben der fokusgruppen
        var farben1 = ["","#FF0000","#00FF00","#0000FF","#FFFF00","#00FFFF","#FF00FF","#FFFFFF"]

        var graph = { "nodes": [
                { "name": "4C4Learn" , "id": 1, "x": 0.0491, "y": 0.4460, "fg":4, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "ABEKO" , "id": 2, "x": 0.1020, "y": 0.5360, "fg":4, "ak1":1, "ak2":0, "ak3":0, "ak4":1, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "AKiP" , "id": 3, "x": 0.3370, "y": 0.5641, "fg":2, "ak1":9, "ak2":9, "ak3":9, "ak4":9, "ak5":9, "zg1":9, "zg2":9, "zg7":9, "zg3":9, "zg4":9 },
                { "name": "ALFA AGRAR" , "id": 4, "x": 0.3611, "y": 0.7508, "fg":2, "ak1":0, "ak2":0, "ak3":0, "ak4":1, "ak5":1, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "AlFaClu" , "id": 5, "x": 0.1769, "y": 0.6312, "fg":4, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "ArKoH" , "id": 6, "x": 0.0985, "y": 0.6216, "fg":4, "ak1":0, "ak2":0, "ak3":0, "ak4":0, "ak5":1, "zg1":1, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "BePeSo" , "id": 7, "x": 0.4704, "y": 0.7016, "fg":2, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":1, "zg1":0, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "Brofessio" , "id": 8, "x": 0.2552, "y": 0.7486, "fg":6, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "ChampNet" , "id": 9, "x": 0.7027, "y": 0.6068, "fg":6, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "EngAGE" , "id": 10, "x": 0.4983, "y": 0.2007, "fg":1, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":0, "zg2":1, "zg7":1, "zg3":1, "zg4":0 },
                { "name": "EPO-KAD" , "id": 11, "x": 0.3623, "y": 0.2966, "fg":3, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "Facharzt plus" , "id": 12, "x": 0.2871, "y": 0.3083, "fg":3, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":0, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "FLIP" , "id": 13, "x": 0.3094, "y": 0.2172, "fg":3, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":0, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "Handel Kompetent" , "id": 14, "x": 0.7597, "y": 0.2980, "fg":6, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":0, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "iLInno" , "id": 15, "x": 0.8538, "y": 0.1829, "fg":7, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "In-K-Ha" , "id": 16, "x": 0.4709, "y": 0.5303, "fg":2, "ak1":1, "ak2":0, "ak3":0, "ak4":1, "ak5":0, "zg1":1, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "KM³" , "id": 17, "x": 0.2139, "y": 0.4719, "fg":4, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":1, "zg7":0, "zg3":0, "zg4":1 },
                { "name": "LerndA" , "id": 18, "x": 0.6209, "y": 0.1636, "fg":1, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "PIKOMA" , "id": 19, "x": 0.6508, "y": 0.4783, "fg":5, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":1, "zg1":1, "zg2":0, "zg7":1, "zg3":0, "zg4":0 },
                { "name": "PLUG+LEARN" , "id": 20, "x": 0.5176, "y": 0.4027, "fg":5, "ak1":1, "ak2":1, "ak3":1, "ak4":1, "ak5":1, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "PM-Kompare" , "id": 21, "x": 0.6583, "y": 0.0922, "fg":1, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "PROKOM 4.0" , "id": 22, "x": 0.5624, "y": 0.3106, "fg":5, "ak1":0, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "RAKOON" , "id": 23, "x": 0.6494, "y": 0.3023, "fg":5, "ak1":1, "ak2":1, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":1, "zg7":1, "zg3":0, "zg4":0 },
                { "name": "ReBeKo" , "id": 24, "x": 0.4009, "y": 0.9489, "fg":3, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":1, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "ReFo" , "id": 25, "x": 0.9509, "y": 0.2701, "fg":7, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":0, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "Resilire" , "id": 26, "x": 0.5557, "y": 0.0511, "fg":1, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":1, "zg2":1, "zg7":1, "zg3":0, "zg4":0 },
                { "name": "staySMART" , "id": 27, "x": 0.2208, "y": 0.9050, "fg":6, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":0, "zg2":1, "zg7":0, "zg3":1, "zg4":1 },
                { "name": "StraKosphere" , "id": 28, "x": 0.8725, "y": 0.3424, "fg":7, "ak1":1, "ak2":0, "ak3":0, "ak4":1, "ak5":0, "zg1":1, "zg2":0, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "TRANSDEMO" , "id": 29, "x": 0.7001, "y": 0.3858, "fg":5, "ak1":1, "ak2":1, "ak3":0, "ak4":0, "ak5":1, "zg1":1, "zg2":1, "zg7":1, "zg3":1, "zg4":1 },
                { "name": "Webutatio" , "id": 30, "x": 0.5813, "y": 0.6963, "fg":2, "ak1":1, "ak2":0, "ak3":0, "ak4":0, "ak5":0, "zg1":0, "zg2":1, "zg7":0, "zg3":0, "zg4":0 },
                { "name": "ZielKom" , "id": 31, "x": 0.7999, "y": 0.6079, "fg":6, "ak1":9, "ak2":9, "ak3":9, "ak4":9, "ak5":9, "zg1":9, "zg2":9, "zg7":9, "zg3":9, "zg4":9 }
            ],
            "links": [
                { "source": 1, "target": 6},
                { "source": 1, "target": 17},
                { "source": 2, "target": 5},
                { "source": 2, "target": 6},
                { "source": 2, "target": 17},
                { "source": 4, "target": 3},
                { "source": 5, "target": 4},
                { "source": 5, "target": 6},
                { "source": 5, "target": 17},
                { "source": 6, "target": 2},
                { "source": 6, "target": 5},
                { "source": 6, "target": 8},
                { "source": 6, "target": 17},
                { "source": 7, "target": 3},
                { "source": 7, "target": 4},
                { "source": 7, "target": 16},
                { "source": 10, "target": 18},
                { "source": 10, "target": 21},
                { "source": 10, "target": 26},
                { "source": 11, "target": 12},
                { "source": 11, "target": 13},
                { "source": 11, "target": 22},
                { "source": 12, "target": 3},
                { "source": 12, "target": 11},
                { "source": 12, "target": 13},
                { "source": 13, "target": 12},
                { "source": 14, "target": 15},
                { "source": 14, "target": 20},
                { "source": 15, "target": 25},
                { "source": 15, "target": 28},
                { "source": 16, "target": 3},
                { "source": 16, "target": 4},
                { "source": 16, "target": 8},
                { "source": 16, "target": 19},
                { "source": 16, "target": 30},
                { "source": 17, "target": 2},
                { "source": 17, "target": 5},
                { "source": 17, "target": 6},
                { "source": 17, "target": 12},
                { "source": 18, "target": 10},
                { "source": 18, "target": 21},
                { "source": 18, "target": 23},
                { "source": 18, "target": 26},
                { "source": 18, "target": 29},
                { "source": 20, "target": 17},
                { "source": 20, "target": 19},
                { "source": 20, "target": 22},
                { "source": 20, "target": 23},
                { "source": 20, "target": 29},
                { "source": 21, "target": 10},
                { "source": 21, "target": 15},
                { "source": 21, "target": 18},
                { "source": 21, "target": 26},
                { "source": 22, "target": 19},
                { "source": 22, "target": 29},
                { "source": 23, "target": 19},
                { "source": 23, "target": 29},
                { "source": 24, "target": 4},
                { "source": 25, "target": 15},
                { "source": 25, "target": 28},
                { "source": 26, "target": 10},
                { "source": 27, "target": 8},
                { "source": 29, "target": 19},
                { "source": 29, "target": 20},
                { "source": 29, "target": 22},
                { "source": 29, "target": 23},
                { "source": 29, "target": 28},
                { "source": 30, "target": 16}
            ]};


        var margin = {
            top: -5,
            right: -5,
            bottom: -5,
            left: -5
        };

        var width = 630 - margin.left - margin.right,
            height = 612 - margin.top - margin.bottom;


        var color = d3.scale.category20();

        var force = d3.layout.force()
            .charge(-200)
            .linkDistance(50)
            .size([width + margin.left + margin.right, height + margin.top + margin.bottom]);

        var zoom = d3.behavior.zoom()
            .scaleExtent([1, 10])
            .on("zoom", zoomed);

        var drag = d3.behavior.drag()
            .origin(function(d) {
                return d;
            })
            .on("dragstart", dragstarted)
            .on("drag", dragged)
            .on("dragend", dragended);


        var svg = d3.select("#" + settings.id).append("svg")
            //.attr("width", width + margin.left + margin.right)
            //.attr("height", height + margin.top + margin.bottom)
            .attr("width", width)
            .attr("height", height)
            .append("g")
            .attr("transform", "translate(" + margin.left + "," + margin.right + ")")
            .call(zoom);
        /*
        var rect = svg.append("rect")
            .attr("width", width)
            .attr("height", height)
            .style("fill", "none")
            .style("pointer-events", "all");
        */
        var container = svg.append("g");

//d3.json('http://blt909.free.fr/wd/map2.json', function(error, graph) {

        force
            .nodes(graph.nodes)
            .links(graph.links)
            .start();

        var link = container.append("g")
            .attr("class", "links_aachen")
            .selectAll(".link")
            .data(graph.links)
            .enter().append("line")
            .attr("class", "link_aachen")
            .style("stroke-width", 1);

        var node = container.append("g")
            .attr("class", "nodes_aachen")
            .selectAll(".node")
            .data(graph.nodes)
            .enter().append("g")
            .attr("class", "node_aachen")
            .attr("cx", function(d) {
                return d.x;
            })
            .attr("cy", function(d) {
                return d.y;
            })
            .call(drag);

        node.append("circle")
            .attr("r", function(d) {
                return 2 + 5;
            })
            .style("fill", function(d) {
                return color(farben1[d.fg]);
            });

        node.append("text")
            .attr("dx", 12)
            .attr("dy", ".35em")
            .attr("class", "node_aachen_text")
            .text(function(d) { return d.name });



        force.on("tick", function() {
            link.attr("x1", function(d) {
                return d.source.x;
            })
                .attr("y1", function(d) {
                    return d.source.y;
                })
                .attr("x2", function(d) {
                    return d.target.x;
                })
                .attr("y2", function(d) {
                    return d.target.y;
                });

            node.attr("transform", function(d) {
                return "translate(" + d.x + "," + d.y + ")";
            });

        });


        var linkedByIndex = {};
        graph.links.forEach(function(d) {
            linkedByIndex[d.source.index + "," + d.target.index] = 1;
        });

        function isConnected(a, b) {
            return linkedByIndex[a.index + "," + b.index] || linkedByIndex[b.index + "," + a.index];
        }

        node.on("mouseover", function(d) {

            node.classed("node-active", function(o) {
                thisOpacity = isConnected(d, o) ? true : false;
                this.setAttribute('fill-opacity', thisOpacity);
                return thisOpacity;
            });

            link.classed("link-active", function(o) {
                return o.source === d || o.target === d ? true : false;
            });

            d3.select(this).classed("node-active", true);
            d3.select(this).select("circle").transition()
                .duration(750)
                .attr("r", (d.weight * 2 + 2) * 1.5);
        })

            .on("mouseout", function(d) {

                node.classed("node-active", false);
                link.classed("link-active", false);

                d3.select(this).select("circle").transition()
                    .duration(750)
                    .attr("r", 2 + 2);
            });


        function dottype(d) {
            d.x = +d.x;
            d.y = +d.y;
            return d;
        }

        function zoomed() {
            container.attr("transform", "translate(" + d3.event.translate + ")scale(" + d3.event.scale + ")");
        }

        function dragstarted(d) {
            d3.event.sourceEvent.stopPropagation();

            d3.select(this).classed("dragging", true);
            force.start();
        }

        function dragged(d) {

            d3.select(this).attr("cx", d.x = d3.event.x).attr("cy", d.y = d3.event.y);

        }

        function dragended(d) {

            d3.select(this).classed("dragging", false);
        }



    }

})(jQuery);